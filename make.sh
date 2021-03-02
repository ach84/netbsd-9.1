#!/bin/bash

BUILD=./sys/arch/evbarm/compile/PINE64
REL=2

case $1 in
  conf)
	[ -d ./log ] || mkdir ./log
	pushd ./sys/arch/evbarm/conf
	config PINE64
	popd
	;;
  dep)
	LOG=${PWD}/log/$( date +%Y%m%d%H%M%S ).dep.log
	touch $LOG
	pushd $BUILD
	time make -j4 depend | tee $LOG
	popd
	;;
  bin)
	LOG=${PWD}/log/$( date +%Y%m%d%H%M%S ).bin.log
	touch $LOG
	pushd $BUILD
	echo $REL > ./version
	rm -f vers.c vers.o
	time make -j4 | tee $LOG
	popd
	;;
  clean)
	pushd $BUILD
	make distclean
	popd
	;;
  stat)
	file ${BUILD}/netbsd /netbsd
	shasum ${BUILD}/netbsd /netbsd
	;;
  install)
	install -m0755 ${BUILD}/netbsd /netbsd
	;;
  *)
	echo "usage: $0 [conf|dep|bin|clean|stat|install]"
	;;
esac

exit 0
