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
	DIR=${PWD}
	LOG=${PWD}/log/$( date +%Y%m%d%H%M%S ).dep.log
	touch $LOG
	pushd $BUILD
	time make -j4 depend NETBSDSRCDIR=$DIR | tee $LOG
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
  restore)
	install -m0755 /netbsd.9.99.77 /netbsd
	;;
  *)
	echo "usage: $0 [conf|dep|bin|clean|stat|install]"
	;;
esac

exit 0
