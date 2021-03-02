/* $NetBSD: linux_syscalls.c,v 1.69 2018/08/10 21:47:14 pgoyette Exp $ */

/*
 * System call names.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	NetBSD: syscalls.master,v 1.60 2017/02/03 16:18:19 christos Exp
 */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: linux_syscalls.c,v 1.69 2018/08/10 21:47:14 pgoyette Exp $");

#if defined(_KERNEL_OPT)
#if defined(_KERNEL_OPT)
#include "opt_sysv.h"
#include "opt_compat_43.h"
#include "opt_compat_netbsd.h"
#endif
#include <sys/param.h>
#include <sys/poll.h>
#include <sys/systm.h>
#include <sys/signal.h>
#include <sys/mount.h>
#include <sys/syscallargs.h>
#include <sys/time.h>
#include <compat/sys/time.h>
#include <compat/linux/common/linux_types.h>
#include <compat/linux/common/linux_mmap.h>
#include <compat/linux/common/linux_ipc.h>
#include <compat/linux/common/linux_msg.h>
#include <compat/linux/common/linux_sem.h>
#include <compat/linux/common/linux_shm.h>
#include <compat/linux/common/linux_signal.h>
#include <compat/linux/common/linux_siginfo.h>
#include <compat/linux/common/linux_machdep.h>
#include <compat/linux/linux_syscallargs.h>
#else /* _KERNEL_OPT */
#include <sys/null.h>
#endif /* _KERNEL_OPT */

const char *const linux_syscallnames[] = {
	/*   0 */	"read",
	/*   1 */	"write",
	/*   2 */	"open",
	/*   3 */	"close",
	/*   4 */	"stat64",
	/*   5 */	"fstat64",
	/*   6 */	"lstat64",
	/*   7 */	"poll",
	/*   8 */	"lseek",
	/*   9 */	"mmap",
	/*  10 */	"mprotect",
	/*  11 */	"munmap",
	/*  12 */	"brk",
	/*  13 */	"rt_sigaction",
	/*  14 */	"rt_sigprocmask",
	/*  15 */	"rt_sigreturn",
	/*  16 */	"ioctl",
	/*  17 */	"pread",
	/*  18 */	"pwrite",
	/*  19 */	"readv",
	/*  20 */	"writev",
	/*  21 */	"access",
	/*  22 */	"pipe",
	/*  23 */	"select",
	/*  24 */	"sched_yield",
	/*  25 */	"mremap",
	/*  26 */	"__msync13",
	/*  27 */	"mincore",
	/*  28 */	"madvise",
#ifdef SYSVSHM
	/*  29 */	"shmget",
	/*  30 */	"shmat",
	/*  31 */	"shmctl",
#else
	/*  29 */	"#29 (unimplemented shmget)",
	/*  30 */	"#30 (unimplemented shmat)",
	/*  31 */	"#31 (unimplemented shmctl)",
#endif
	/*  32 */	"dup",
	/*  33 */	"dup2",
	/*  34 */	"pause",
	/*  35 */	"nanosleep",
	/*  36 */	"getitimer",
	/*  37 */	"alarm",
	/*  38 */	"setitimer",
	/*  39 */	"getpid",
	/*  40 */	"#40 (unimplemented sendfile)",
	/*  41 */	"socket",
	/*  42 */	"connect",
	/*  43 */	"oaccept",
	/*  44 */	"sendto",
	/*  45 */	"recvfrom",
	/*  46 */	"sendmsg",
	/*  47 */	"recvmsg",
	/*  48 */	"shutdown",
	/*  49 */	"bind",
	/*  50 */	"listen",
	/*  51 */	"getsockname",
	/*  52 */	"getpeername",
	/*  53 */	"socketpair",
	/*  54 */	"setsockopt",
	/*  55 */	"getsockopt",
	/*  56 */	"clone",
	/*  57 */	"fork",
	/*  58 */	"__vfork14",
	/*  59 */	"execve",
	/*  60 */	"exit",
	/*  61 */	"wait4",
	/*  62 */	"kill",
	/*  63 */	"uname",
#ifdef SYSVSEM
	/*  64 */	"semget",
	/*  65 */	"semop",
	/*  66 */	"semctl",
#else
	/*  64 */	"#64 (unimplemented semget)",
	/*  65 */	"#65 (unimplemented semop)",
	/*  66 */	"#66 (unimplemented semctl)",
#endif
#ifdef SYSVSHM
	/*  67 */	"shmdt",
#else
	/*  67 */	"#67 (unimplemented shmdt)",
#endif
#ifdef SYSVMSG
	/*  68 */	"msgget",
	/*  69 */	"msgsnd",
	/*  70 */	"msgrcv",
	/*  71 */	"msgctl",
#else
	/*  68 */	"#68 (unimplemented msgget)",
	/*  69 */	"#69 (unimplemented msgsnd)",
	/*  70 */	"#70 (unimplemented msgrcv)",
	/*  71 */	"#71 (unimplemented msgctl)",
#endif
	/*  72 */	"fcntl",
	/*  73 */	"flock",
	/*  74 */	"fsync",
	/*  75 */	"fdatasync",
	/*  76 */	"truncate64",
	/*  77 */	"ftruncate64",
	/*  78 */	"getdents",
	/*  79 */	"__getcwd",
	/*  80 */	"chdir",
	/*  81 */	"fchdir",
	/*  82 */	"__posix_rename",
	/*  83 */	"mkdir",
	/*  84 */	"rmdir",
	/*  85 */	"creat",
	/*  86 */	"link",
	/*  87 */	"unlink",
	/*  88 */	"symlink",
	/*  89 */	"readlink",
	/*  90 */	"chmod",
	/*  91 */	"fchmod",
	/*  92 */	"__posix_chown",
	/*  93 */	"__posix_fchown",
	/*  94 */	"__posix_lchown",
	/*  95 */	"umask",
	/*  96 */	"gettimeofday",
	/*  97 */	"getrlimit",
	/*  98 */	"getrusage",
	/*  99 */	"sysinfo",
	/* 100 */	"times",
	/* 101 */	"ptrace",
	/* 102 */	"getuid",
	/* 103 */	"#103 (unimplemented syslog)",
	/* 104 */	"getgid",
	/* 105 */	"setuid",
	/* 106 */	"setgid",
	/* 107 */	"geteuid",
	/* 108 */	"getegid",
	/* 109 */	"setpgid",
	/* 110 */	"getppid",
	/* 111 */	"getpgrp",
	/* 112 */	"setsid",
	/* 113 */	"setreuid",
	/* 114 */	"setregid",
	/* 115 */	"getgroups",
	/* 116 */	"setgroups",
	/* 117 */	"setresuid",
	/* 118 */	"getresuid",
	/* 119 */	"setresgid",
	/* 120 */	"getresgid",
	/* 121 */	"getpgid",
	/* 122 */	"setfsuid",
	/* 123 */	"setfsgid",
	/* 124 */	"getsid",
	/* 125 */	"#125 (unimplemented capget)",
	/* 126 */	"#126 (unimplemented capset)",
	/* 127 */	"rt_sigpending",
	/* 128 */	"rt_sigtimedwait",
	/* 129 */	"rt_queueinfo",
	/* 130 */	"rt_sigsuspend",
	/* 131 */	"sigaltstack",
	/* 132 */	"utime",
	/* 133 */	"mknod",
#ifdef EXEC_AOUT
	/* 134 */	"uselib",
#else
	/* 134 */	"#134 (unimplemented sys_uselib)",
#endif
	/* 135 */	"personality",
	/* 136 */	"#136 (unimplemented ustat)",
	/* 137 */	"statfs",
	/* 138 */	"fstatfs",
	/* 139 */	"#139 (unimplemented sysfs)",
	/* 140 */	"getpriority",
	/* 141 */	"setpriority",
	/* 142 */	"sched_setparam",
	/* 143 */	"sched_getparam",
	/* 144 */	"sched_setscheduler",
	/* 145 */	"sched_getscheduler",
	/* 146 */	"sched_get_priority_max",
	/* 147 */	"sched_get_priority_min",
	/* 148 */	"#148 (unimplemented sys_sched_rr_get_interval)",
	/* 149 */	"mlock",
	/* 150 */	"munlock",
	/* 151 */	"mlockall",
	/* 152 */	"munlockall",
	/* 153 */	"#153 (unimplemented vhangup)",
	/* 154 */	"modify_ldt",
	/* 155 */	"#155 (unimplemented pivot_root)",
	/* 156 */	"__sysctl",
	/* 157 */	"#157 (unimplemented prctl)",
	/* 158 */	"arch_prctl",
	/* 159 */	"#159 (unimplemented adjtimex)",
	/* 160 */	"setrlimit",
	/* 161 */	"chroot",
	/* 162 */	"sync",
	/* 163 */	"acct",
	/* 164 */	"settimeofday",
	/* 165 */	"#165 (unimplemented mount)",
	/* 166 */	"#166 (unimplemented umount2)",
	/* 167 */	"swapon",
	/* 168 */	"swapoff",
	/* 169 */	"reboot",
	/* 170 */	"sethostname",
	/* 171 */	"setdomainname",
	/* 172 */	"iopl",
	/* 173 */	"ioperm",
	/* 174 */	"#174 (unimplemented create_module)",
	/* 175 */	"#175 (unimplemented init_module)",
	/* 176 */	"#176 (unimplemented delete_module)",
	/* 177 */	"#177 (unimplemented get_kernel_syms)",
	/* 178 */	"#178 (unimplemented query_module)",
	/* 179 */	"#179 (unimplemented quotactl)",
	/* 180 */	"#180 (unimplemented nfsservctl)",
	/* 181 */	"#181 (unimplemented getpmsg)",
	/* 182 */	"#182 (unimplemented putpmsg)",
	/* 183 */	"#183 (unimplemented afs_syscall)",
	/* 184 */	"#184 (unimplemented tuxcall)",
	/* 185 */	"#185 (unimplemented security)",
	/* 186 */	"gettid",
	/* 187 */	"#187 (unimplemented readahead)",
	/* 188 */	"setxattr",
	/* 189 */	"lsetxattr",
	/* 190 */	"fsetxattr",
	/* 191 */	"getxattr",
	/* 192 */	"lgetxattr",
	/* 193 */	"fgetxattr",
	/* 194 */	"listxattr",
	/* 195 */	"llistxattr",
	/* 196 */	"flistxattr",
	/* 197 */	"removexattr",
	/* 198 */	"lremovexattr",
	/* 199 */	"fremovexattr",
	/* 200 */	"tkill",
	/* 201 */	"time",
	/* 202 */	"futex",
	/* 203 */	"sched_setaffinity",
	/* 204 */	"sched_getaffinity",
	/* 205 */	"#205 (unimplemented set_thread_area)",
	/* 206 */	"#206 (unimplemented io_setup)",
	/* 207 */	"#207 (unimplemented io_destroy)",
	/* 208 */	"#208 (unimplemented io_getevents)",
	/* 209 */	"#209 (unimplemented io_submit)",
	/* 210 */	"#210 (unimplemented io_cancel)",
	/* 211 */	"#211 (unimplemented get_thread_area)",
	/* 212 */	"#212 (unimplemented lookup_dcookie)",
	/* 213 */	"#213 (unimplemented epoll_create)",
	/* 214 */	"#214 (unimplemented epoll_ctl_old)",
	/* 215 */	"#215 (unimplemented epoll_wait_old)",
	/* 216 */	"#216 (unimplemented remap_file_pages)",
	/* 217 */	"getdents64",
	/* 218 */	"set_tid_address",
	/* 219 */	"#219 (unimplemented restart_syscall)",
	/* 220 */	"#220 (unimplemented semtimedop)",
	/* 221 */	"fadvise64",
	/* 222 */	"#222 (unimplemented timer_create)",
	/* 223 */	"#223 (unimplemented timer_settime)",
	/* 224 */	"#224 (unimplemented timer_gettime)",
	/* 225 */	"#225 (unimplemented timer_getoverrun)",
	/* 226 */	"#226 (unimplemented timer_delete)",
	/* 227 */	"clock_settime",
	/* 228 */	"clock_gettime",
	/* 229 */	"clock_getres",
	/* 230 */	"clock_nanosleep",
	/* 231 */	"exit_group",
	/* 232 */	"#232 (unimplemented epoll_wait)",
	/* 233 */	"#233 (unimplemented epoll_ctl)",
	/* 234 */	"tgkill",
	/* 235 */	"utimes",
	/* 236 */	"#236 (unimplemented vserver)",
	/* 237 */	"#237 (unimplemented mbind)",
	/* 238 */	"#238 (unimplemented set_mempolicy)",
	/* 239 */	"#239 (unimplemented get_mempolicy)",
	/* 240 */	"#240 (unimplemented mq_open)",
	/* 241 */	"#241 (unimplemented mq_unlink)",
	/* 242 */	"#242 (unimplemented mq_timedsend)",
	/* 243 */	"#243 (unimplemented mq_timedreceive)",
	/* 244 */	"#244 (unimplemented mq_notify)",
	/* 245 */	"#245 (unimplemented mq_getsetattr)",
	/* 246 */	"#246 (unimplemented kexec_load)",
	/* 247 */	"#247 (unimplemented waitid)",
	/* 248 */	"#248 (unimplemented add_key)",
	/* 249 */	"#249 (unimplemented request_key)",
	/* 250 */	"#250 (unimplemented keyctl)",
	/* 251 */	"#251 (unimplemented ioprio_set)",
	/* 252 */	"#252 (unimplemented ioprio_get)",
	/* 253 */	"#253 (unimplemented inotify_init)",
	/* 254 */	"#254 (unimplemented inotify_add_watch)",
	/* 255 */	"#255 (unimplemented inotify_rm_watch)",
	/* 256 */	"#256 (unimplemented migrate_pages)",
	/* 257 */	"openat",
	/* 258 */	"mkdirat",
	/* 259 */	"mknodat",
	/* 260 */	"fchownat",
	/* 261 */	"#261 (unimplemented futimesat)",
	/* 262 */	"fstatat64",
	/* 263 */	"unlinkat",
	/* 264 */	"renameat",
	/* 265 */	"linkat",
	/* 266 */	"symlinkat",
	/* 267 */	"readlinkat",
	/* 268 */	"fchmodat",
	/* 269 */	"faccessat",
	/* 270 */	"pselect6",
	/* 271 */	"ppoll",
	/* 272 */	"#272 (unimplemented unshare)",
	/* 273 */	"set_robust_list",
	/* 274 */	"get_robust_list",
	/* 275 */	"#275 (unimplemented splice)",
	/* 276 */	"#276 (unimplemented tee)",
	/* 277 */	"#277 (unimplemented sync_file_range)",
	/* 278 */	"#278 (unimplemented vmsplice)",
	/* 279 */	"#279 (unimplemented move_pages)",
	/* 280 */	"utimensat",
	/* 281 */	"#281 (unimplemented epoll_pwait)",
	/* 282 */	"#282 (unimplemented signalfd)",
	/* 283 */	"#283 (unimplemented timerfd_create)",
	/* 284 */	"#284 (unimplemented eventfd)",
	/* 285 */	"#285 (unimplemented fallocate)",
	/* 286 */	"#286 (unimplemented timerfd_settime)",
	/* 287 */	"#287 (unimplemented timerfd_gettime)",
	/* 288 */	"accept4",
	/* 289 */	"#289 (unimplemented signalfd4)",
	/* 290 */	"#290 (unimplemented eventfd2)",
	/* 291 */	"#291 (unimplemented epoll_create1)",
	/* 292 */	"dup3",
	/* 293 */	"pipe2",
	/* 294 */	"#294 (unimplemented inotify_init1)",
	/* 295 */	"#295 (unimplemented preadv)",
	/* 296 */	"#296 (unimplemented pwritev)",
	/* 297 */	"#297 (unimplemented rt_tgsigqueueinfo)",
	/* 298 */	"#298 (unimplemented perf_counter_open)",
	/* 299 */	"recvmmsg",
	/* 300 */	"#300 (unimplemented fanotify_init)",
	/* 301 */	"#301 (unimplemented fanotify_mark)",
	/* 302 */	"#302 (unimplemented prlimit64)",
	/* 303 */	"#303 (unimplemented name_to_handle_at)",
	/* 304 */	"#304 (unimplemented open_by_handle_at)",
	/* 305 */	"#305 (unimplemented clock_adjtime)",
	/* 306 */	"#306 (unimplemented syncfs)",
	/* 307 */	"sendmmsg",
	/* 308 */	"#308 (unimplemented setns)",
	/* 309 */	"#309 (unimplemented getcpu)",
	/* 310 */	"#310 (unimplemented process_vm_readv)",
	/* 311 */	"#311 (unimplemented process_vm_writev)",
	/* 312 */	"#312 (unimplemented kcmp)",
	/* 313 */	"#313 (unimplemented finit_module)",
	/* 314 */	"nosys",
	/* 315 */	"# filler",
	/* 316 */	"# filler",
	/* 317 */	"# filler",
	/* 318 */	"# filler",
	/* 319 */	"# filler",
	/* 320 */	"# filler",
	/* 321 */	"# filler",
	/* 322 */	"# filler",
	/* 323 */	"# filler",
	/* 324 */	"# filler",
	/* 325 */	"# filler",
	/* 326 */	"# filler",
	/* 327 */	"# filler",
	/* 328 */	"# filler",
	/* 329 */	"# filler",
	/* 330 */	"# filler",
	/* 331 */	"# filler",
	/* 332 */	"# filler",
	/* 333 */	"# filler",
	/* 334 */	"# filler",
	/* 335 */	"# filler",
	/* 336 */	"# filler",
	/* 337 */	"# filler",
	/* 338 */	"# filler",
	/* 339 */	"# filler",
	/* 340 */	"# filler",
	/* 341 */	"# filler",
	/* 342 */	"# filler",
	/* 343 */	"# filler",
	/* 344 */	"# filler",
	/* 345 */	"# filler",
	/* 346 */	"# filler",
	/* 347 */	"# filler",
	/* 348 */	"# filler",
	/* 349 */	"# filler",
	/* 350 */	"# filler",
	/* 351 */	"# filler",
	/* 352 */	"# filler",
	/* 353 */	"# filler",
	/* 354 */	"# filler",
	/* 355 */	"# filler",
	/* 356 */	"# filler",
	/* 357 */	"# filler",
	/* 358 */	"# filler",
	/* 359 */	"# filler",
	/* 360 */	"# filler",
	/* 361 */	"# filler",
	/* 362 */	"# filler",
	/* 363 */	"# filler",
	/* 364 */	"# filler",
	/* 365 */	"# filler",
	/* 366 */	"# filler",
	/* 367 */	"# filler",
	/* 368 */	"# filler",
	/* 369 */	"# filler",
	/* 370 */	"# filler",
	/* 371 */	"# filler",
	/* 372 */	"# filler",
	/* 373 */	"# filler",
	/* 374 */	"# filler",
	/* 375 */	"# filler",
	/* 376 */	"# filler",
	/* 377 */	"# filler",
	/* 378 */	"# filler",
	/* 379 */	"# filler",
	/* 380 */	"# filler",
	/* 381 */	"# filler",
	/* 382 */	"# filler",
	/* 383 */	"# filler",
	/* 384 */	"# filler",
	/* 385 */	"# filler",
	/* 386 */	"# filler",
	/* 387 */	"# filler",
	/* 388 */	"# filler",
	/* 389 */	"# filler",
	/* 390 */	"# filler",
	/* 391 */	"# filler",
	/* 392 */	"# filler",
	/* 393 */	"# filler",
	/* 394 */	"# filler",
	/* 395 */	"# filler",
	/* 396 */	"# filler",
	/* 397 */	"# filler",
	/* 398 */	"# filler",
	/* 399 */	"# filler",
	/* 400 */	"# filler",
	/* 401 */	"# filler",
	/* 402 */	"# filler",
	/* 403 */	"# filler",
	/* 404 */	"# filler",
	/* 405 */	"# filler",
	/* 406 */	"# filler",
	/* 407 */	"# filler",
	/* 408 */	"# filler",
	/* 409 */	"# filler",
	/* 410 */	"# filler",
	/* 411 */	"# filler",
	/* 412 */	"# filler",
	/* 413 */	"# filler",
	/* 414 */	"# filler",
	/* 415 */	"# filler",
	/* 416 */	"# filler",
	/* 417 */	"# filler",
	/* 418 */	"# filler",
	/* 419 */	"# filler",
	/* 420 */	"# filler",
	/* 421 */	"# filler",
	/* 422 */	"# filler",
	/* 423 */	"# filler",
	/* 424 */	"# filler",
	/* 425 */	"# filler",
	/* 426 */	"# filler",
	/* 427 */	"# filler",
	/* 428 */	"# filler",
	/* 429 */	"# filler",
	/* 430 */	"# filler",
	/* 431 */	"# filler",
	/* 432 */	"# filler",
	/* 433 */	"# filler",
	/* 434 */	"# filler",
	/* 435 */	"# filler",
	/* 436 */	"# filler",
	/* 437 */	"# filler",
	/* 438 */	"# filler",
	/* 439 */	"# filler",
	/* 440 */	"# filler",
	/* 441 */	"# filler",
	/* 442 */	"# filler",
	/* 443 */	"# filler",
	/* 444 */	"# filler",
	/* 445 */	"# filler",
	/* 446 */	"# filler",
	/* 447 */	"# filler",
	/* 448 */	"# filler",
	/* 449 */	"# filler",
	/* 450 */	"# filler",
	/* 451 */	"# filler",
	/* 452 */	"# filler",
	/* 453 */	"# filler",
	/* 454 */	"# filler",
	/* 455 */	"# filler",
	/* 456 */	"# filler",
	/* 457 */	"# filler",
	/* 458 */	"# filler",
	/* 459 */	"# filler",
	/* 460 */	"# filler",
	/* 461 */	"# filler",
	/* 462 */	"# filler",
	/* 463 */	"# filler",
	/* 464 */	"# filler",
	/* 465 */	"# filler",
	/* 466 */	"# filler",
	/* 467 */	"# filler",
	/* 468 */	"# filler",
	/* 469 */	"# filler",
	/* 470 */	"# filler",
	/* 471 */	"# filler",
	/* 472 */	"# filler",
	/* 473 */	"# filler",
	/* 474 */	"# filler",
	/* 475 */	"# filler",
	/* 476 */	"# filler",
	/* 477 */	"# filler",
	/* 478 */	"# filler",
	/* 479 */	"# filler",
	/* 480 */	"# filler",
	/* 481 */	"# filler",
	/* 482 */	"# filler",
	/* 483 */	"# filler",
	/* 484 */	"# filler",
	/* 485 */	"# filler",
	/* 486 */	"# filler",
	/* 487 */	"# filler",
	/* 488 */	"# filler",
	/* 489 */	"# filler",
	/* 490 */	"# filler",
	/* 491 */	"# filler",
	/* 492 */	"# filler",
	/* 493 */	"# filler",
	/* 494 */	"# filler",
	/* 495 */	"# filler",
	/* 496 */	"# filler",
	/* 497 */	"# filler",
	/* 498 */	"# filler",
	/* 499 */	"# filler",
	/* 500 */	"# filler",
	/* 501 */	"# filler",
	/* 502 */	"# filler",
	/* 503 */	"# filler",
	/* 504 */	"# filler",
	/* 505 */	"# filler",
	/* 506 */	"# filler",
	/* 507 */	"# filler",
	/* 508 */	"# filler",
	/* 509 */	"# filler",
	/* 510 */	"# filler",
	/* 511 */	"# filler",
};


/* libc style syscall names */
const char *const altlinux_syscallnames[] = {
	/*   0 */	NULL, /* read */
	/*   1 */	NULL, /* write */
	/*   2 */	NULL, /* open */
	/*   3 */	NULL, /* close */
	/*   4 */	NULL, /* stat64 */
	/*   5 */	NULL, /* fstat64 */
	/*   6 */	NULL, /* lstat64 */
	/*   7 */	NULL, /* poll */
	/*   8 */	NULL, /* lseek */
	/*   9 */	NULL, /* mmap */
	/*  10 */	NULL, /* mprotect */
	/*  11 */	NULL, /* munmap */
	/*  12 */	NULL, /* brk */
	/*  13 */	NULL, /* rt_sigaction */
	/*  14 */	NULL, /* rt_sigprocmask */
	/*  15 */	NULL, /* rt_sigreturn */
	/*  16 */	NULL, /* ioctl */
	/*  17 */	NULL, /* pread */
	/*  18 */	NULL, /* pwrite */
	/*  19 */	NULL, /* readv */
	/*  20 */	NULL, /* writev */
	/*  21 */	NULL, /* access */
	/*  22 */	NULL, /* pipe */
	/*  23 */	NULL, /* select */
	/*  24 */	NULL, /* sched_yield */
	/*  25 */	NULL, /* mremap */
	/*  26 */	"msync",
	/*  27 */	NULL, /* mincore */
	/*  28 */	NULL, /* madvise */
#ifdef SYSVSHM
	/*  29 */	NULL, /* shmget */
	/*  30 */	NULL, /* shmat */
	/*  31 */	NULL, /* shmctl */
#else
	/*  29 */	NULL, /* unimplemented shmget */
	/*  30 */	NULL, /* unimplemented shmat */
	/*  31 */	NULL, /* unimplemented shmctl */
#endif
	/*  32 */	NULL, /* dup */
	/*  33 */	NULL, /* dup2 */
	/*  34 */	NULL, /* pause */
	/*  35 */	NULL, /* nanosleep */
	/*  36 */	NULL, /* getitimer */
	/*  37 */	NULL, /* alarm */
	/*  38 */	NULL, /* setitimer */
	/*  39 */	NULL, /* getpid */
	/*  40 */	NULL, /* unimplemented sendfile */
	/*  41 */	NULL, /* socket */
	/*  42 */	NULL, /* connect */
	/*  43 */	"accept",
	/*  44 */	NULL, /* sendto */
	/*  45 */	NULL, /* recvfrom */
	/*  46 */	NULL, /* sendmsg */
	/*  47 */	NULL, /* recvmsg */
	/*  48 */	NULL, /* shutdown */
	/*  49 */	NULL, /* bind */
	/*  50 */	NULL, /* listen */
	/*  51 */	NULL, /* getsockname */
	/*  52 */	NULL, /* getpeername */
	/*  53 */	NULL, /* socketpair */
	/*  54 */	NULL, /* setsockopt */
	/*  55 */	NULL, /* getsockopt */
	/*  56 */	NULL, /* clone */
	/*  57 */	NULL, /* fork */
	/*  58 */	"vfork",
	/*  59 */	NULL, /* execve */
	/*  60 */	NULL, /* exit */
	/*  61 */	NULL, /* wait4 */
	/*  62 */	NULL, /* kill */
	/*  63 */	NULL, /* uname */
#ifdef SYSVSEM
	/*  64 */	NULL, /* semget */
	/*  65 */	NULL, /* semop */
	/*  66 */	NULL, /* semctl */
#else
	/*  64 */	NULL, /* unimplemented semget */
	/*  65 */	NULL, /* unimplemented semop */
	/*  66 */	NULL, /* unimplemented semctl */
#endif
#ifdef SYSVSHM
	/*  67 */	NULL, /* shmdt */
#else
	/*  67 */	NULL, /* unimplemented shmdt */
#endif
#ifdef SYSVMSG
	/*  68 */	NULL, /* msgget */
	/*  69 */	NULL, /* msgsnd */
	/*  70 */	NULL, /* msgrcv */
	/*  71 */	NULL, /* msgctl */
#else
	/*  68 */	NULL, /* unimplemented msgget */
	/*  69 */	NULL, /* unimplemented msgsnd */
	/*  70 */	NULL, /* unimplemented msgrcv */
	/*  71 */	NULL, /* unimplemented msgctl */
#endif
	/*  72 */	NULL, /* fcntl */
	/*  73 */	NULL, /* flock */
	/*  74 */	NULL, /* fsync */
	/*  75 */	NULL, /* fdatasync */
	/*  76 */	NULL, /* truncate64 */
	/*  77 */	NULL, /* ftruncate64 */
	/*  78 */	NULL, /* getdents */
	/*  79 */	NULL, /* __getcwd */
	/*  80 */	NULL, /* chdir */
	/*  81 */	NULL, /* fchdir */
	/*  82 */	NULL, /* __posix_rename */
	/*  83 */	NULL, /* mkdir */
	/*  84 */	NULL, /* rmdir */
	/*  85 */	NULL, /* creat */
	/*  86 */	NULL, /* link */
	/*  87 */	NULL, /* unlink */
	/*  88 */	NULL, /* symlink */
	/*  89 */	NULL, /* readlink */
	/*  90 */	NULL, /* chmod */
	/*  91 */	NULL, /* fchmod */
	/*  92 */	NULL, /* __posix_chown */
	/*  93 */	NULL, /* __posix_fchown */
	/*  94 */	NULL, /* __posix_lchown */
	/*  95 */	NULL, /* umask */
	/*  96 */	NULL, /* gettimeofday */
	/*  97 */	NULL, /* getrlimit */
	/*  98 */	NULL, /* getrusage */
	/*  99 */	NULL, /* sysinfo */
	/* 100 */	NULL, /* times */
	/* 101 */	NULL, /* ptrace */
	/* 102 */	NULL, /* getuid */
	/* 103 */	NULL, /* unimplemented syslog */
	/* 104 */	NULL, /* getgid */
	/* 105 */	NULL, /* setuid */
	/* 106 */	NULL, /* setgid */
	/* 107 */	NULL, /* geteuid */
	/* 108 */	NULL, /* getegid */
	/* 109 */	NULL, /* setpgid */
	/* 110 */	NULL, /* getppid */
	/* 111 */	NULL, /* getpgrp */
	/* 112 */	NULL, /* setsid */
	/* 113 */	NULL, /* setreuid */
	/* 114 */	NULL, /* setregid */
	/* 115 */	NULL, /* getgroups */
	/* 116 */	NULL, /* setgroups */
	/* 117 */	NULL, /* setresuid */
	/* 118 */	NULL, /* getresuid */
	/* 119 */	NULL, /* setresgid */
	/* 120 */	NULL, /* getresgid */
	/* 121 */	NULL, /* getpgid */
	/* 122 */	NULL, /* setfsuid */
	/* 123 */	NULL, /* setfsgid */
	/* 124 */	NULL, /* getsid */
	/* 125 */	NULL, /* unimplemented capget */
	/* 126 */	NULL, /* unimplemented capset */
	/* 127 */	NULL, /* rt_sigpending */
	/* 128 */	NULL, /* rt_sigtimedwait */
	/* 129 */	NULL, /* rt_queueinfo */
	/* 130 */	NULL, /* rt_sigsuspend */
	/* 131 */	NULL, /* sigaltstack */
	/* 132 */	NULL, /* utime */
	/* 133 */	NULL, /* mknod */
#ifdef EXEC_AOUT
	/* 134 */	NULL, /* uselib */
#else
	/* 134 */	NULL, /* unimplemented sys_uselib */
#endif
	/* 135 */	NULL, /* personality */
	/* 136 */	NULL, /* unimplemented ustat */
	/* 137 */	NULL, /* statfs */
	/* 138 */	NULL, /* fstatfs */
	/* 139 */	NULL, /* unimplemented sysfs */
	/* 140 */	NULL, /* getpriority */
	/* 141 */	NULL, /* setpriority */
	/* 142 */	NULL, /* sched_setparam */
	/* 143 */	NULL, /* sched_getparam */
	/* 144 */	NULL, /* sched_setscheduler */
	/* 145 */	NULL, /* sched_getscheduler */
	/* 146 */	NULL, /* sched_get_priority_max */
	/* 147 */	NULL, /* sched_get_priority_min */
	/* 148 */	NULL, /* unimplemented sys_sched_rr_get_interval */
	/* 149 */	NULL, /* mlock */
	/* 150 */	NULL, /* munlock */
	/* 151 */	NULL, /* mlockall */
	/* 152 */	NULL, /* munlockall */
	/* 153 */	NULL, /* unimplemented vhangup */
	/* 154 */	NULL, /* modify_ldt */
	/* 155 */	NULL, /* unimplemented pivot_root */
	/* 156 */	NULL, /* __sysctl */
	/* 157 */	NULL, /* unimplemented prctl */
	/* 158 */	NULL, /* arch_prctl */
	/* 159 */	NULL, /* unimplemented adjtimex */
	/* 160 */	NULL, /* setrlimit */
	/* 161 */	NULL, /* chroot */
	/* 162 */	NULL, /* sync */
	/* 163 */	NULL, /* acct */
	/* 164 */	NULL, /* settimeofday */
	/* 165 */	NULL, /* unimplemented mount */
	/* 166 */	NULL, /* unimplemented umount2 */
	/* 167 */	NULL, /* swapon */
	/* 168 */	NULL, /* swapoff */
	/* 169 */	NULL, /* reboot */
	/* 170 */	NULL, /* sethostname */
	/* 171 */	NULL, /* setdomainname */
	/* 172 */	NULL, /* iopl */
	/* 173 */	NULL, /* ioperm */
	/* 174 */	NULL, /* unimplemented create_module */
	/* 175 */	NULL, /* unimplemented init_module */
	/* 176 */	NULL, /* unimplemented delete_module */
	/* 177 */	NULL, /* unimplemented get_kernel_syms */
	/* 178 */	NULL, /* unimplemented query_module */
	/* 179 */	NULL, /* unimplemented quotactl */
	/* 180 */	NULL, /* unimplemented nfsservctl */
	/* 181 */	NULL, /* unimplemented getpmsg */
	/* 182 */	NULL, /* unimplemented putpmsg */
	/* 183 */	NULL, /* unimplemented afs_syscall */
	/* 184 */	NULL, /* unimplemented tuxcall */
	/* 185 */	NULL, /* unimplemented security */
	/* 186 */	NULL, /* gettid */
	/* 187 */	NULL, /* unimplemented readahead */
	/* 188 */	NULL, /* setxattr */
	/* 189 */	NULL, /* lsetxattr */
	/* 190 */	NULL, /* fsetxattr */
	/* 191 */	NULL, /* getxattr */
	/* 192 */	NULL, /* lgetxattr */
	/* 193 */	NULL, /* fgetxattr */
	/* 194 */	NULL, /* listxattr */
	/* 195 */	NULL, /* llistxattr */
	/* 196 */	NULL, /* flistxattr */
	/* 197 */	NULL, /* removexattr */
	/* 198 */	NULL, /* lremovexattr */
	/* 199 */	NULL, /* fremovexattr */
	/* 200 */	NULL, /* tkill */
	/* 201 */	NULL, /* time */
	/* 202 */	NULL, /* futex */
	/* 203 */	NULL, /* sched_setaffinity */
	/* 204 */	NULL, /* sched_getaffinity */
	/* 205 */	NULL, /* unimplemented set_thread_area */
	/* 206 */	NULL, /* unimplemented io_setup */
	/* 207 */	NULL, /* unimplemented io_destroy */
	/* 208 */	NULL, /* unimplemented io_getevents */
	/* 209 */	NULL, /* unimplemented io_submit */
	/* 210 */	NULL, /* unimplemented io_cancel */
	/* 211 */	NULL, /* unimplemented get_thread_area */
	/* 212 */	NULL, /* unimplemented lookup_dcookie */
	/* 213 */	NULL, /* unimplemented epoll_create */
	/* 214 */	NULL, /* unimplemented epoll_ctl_old */
	/* 215 */	NULL, /* unimplemented epoll_wait_old */
	/* 216 */	NULL, /* unimplemented remap_file_pages */
	/* 217 */	NULL, /* getdents64 */
	/* 218 */	NULL, /* set_tid_address */
	/* 219 */	NULL, /* unimplemented restart_syscall */
	/* 220 */	NULL, /* unimplemented semtimedop */
	/* 221 */	NULL, /* fadvise64 */
	/* 222 */	NULL, /* unimplemented timer_create */
	/* 223 */	NULL, /* unimplemented timer_settime */
	/* 224 */	NULL, /* unimplemented timer_gettime */
	/* 225 */	NULL, /* unimplemented timer_getoverrun */
	/* 226 */	NULL, /* unimplemented timer_delete */
	/* 227 */	NULL, /* clock_settime */
	/* 228 */	NULL, /* clock_gettime */
	/* 229 */	NULL, /* clock_getres */
	/* 230 */	NULL, /* clock_nanosleep */
	/* 231 */	NULL, /* exit_group */
	/* 232 */	NULL, /* unimplemented epoll_wait */
	/* 233 */	NULL, /* unimplemented epoll_ctl */
	/* 234 */	NULL, /* tgkill */
	/* 235 */	NULL, /* utimes */
	/* 236 */	NULL, /* unimplemented vserver */
	/* 237 */	NULL, /* unimplemented mbind */
	/* 238 */	NULL, /* unimplemented set_mempolicy */
	/* 239 */	NULL, /* unimplemented get_mempolicy */
	/* 240 */	NULL, /* unimplemented mq_open */
	/* 241 */	NULL, /* unimplemented mq_unlink */
	/* 242 */	NULL, /* unimplemented mq_timedsend */
	/* 243 */	NULL, /* unimplemented mq_timedreceive */
	/* 244 */	NULL, /* unimplemented mq_notify */
	/* 245 */	NULL, /* unimplemented mq_getsetattr */
	/* 246 */	NULL, /* unimplemented kexec_load */
	/* 247 */	NULL, /* unimplemented waitid */
	/* 248 */	NULL, /* unimplemented add_key */
	/* 249 */	NULL, /* unimplemented request_key */
	/* 250 */	NULL, /* unimplemented keyctl */
	/* 251 */	NULL, /* unimplemented ioprio_set */
	/* 252 */	NULL, /* unimplemented ioprio_get */
	/* 253 */	NULL, /* unimplemented inotify_init */
	/* 254 */	NULL, /* unimplemented inotify_add_watch */
	/* 255 */	NULL, /* unimplemented inotify_rm_watch */
	/* 256 */	NULL, /* unimplemented migrate_pages */
	/* 257 */	NULL, /* openat */
	/* 258 */	NULL, /* mkdirat */
	/* 259 */	NULL, /* mknodat */
	/* 260 */	NULL, /* fchownat */
	/* 261 */	NULL, /* unimplemented futimesat */
	/* 262 */	NULL, /* fstatat64 */
	/* 263 */	NULL, /* unlinkat */
	/* 264 */	NULL, /* renameat */
	/* 265 */	NULL, /* linkat */
	/* 266 */	NULL, /* symlinkat */
	/* 267 */	NULL, /* readlinkat */
	/* 268 */	NULL, /* fchmodat */
	/* 269 */	NULL, /* faccessat */
	/* 270 */	NULL, /* pselect6 */
	/* 271 */	NULL, /* ppoll */
	/* 272 */	NULL, /* unimplemented unshare */
	/* 273 */	NULL, /* set_robust_list */
	/* 274 */	NULL, /* get_robust_list */
	/* 275 */	NULL, /* unimplemented splice */
	/* 276 */	NULL, /* unimplemented tee */
	/* 277 */	NULL, /* unimplemented sync_file_range */
	/* 278 */	NULL, /* unimplemented vmsplice */
	/* 279 */	NULL, /* unimplemented move_pages */
	/* 280 */	NULL, /* utimensat */
	/* 281 */	NULL, /* unimplemented epoll_pwait */
	/* 282 */	NULL, /* unimplemented signalfd */
	/* 283 */	NULL, /* unimplemented timerfd_create */
	/* 284 */	NULL, /* unimplemented eventfd */
	/* 285 */	NULL, /* unimplemented fallocate */
	/* 286 */	NULL, /* unimplemented timerfd_settime */
	/* 287 */	NULL, /* unimplemented timerfd_gettime */
	/* 288 */	NULL, /* accept4 */
	/* 289 */	NULL, /* unimplemented signalfd4 */
	/* 290 */	NULL, /* unimplemented eventfd2 */
	/* 291 */	NULL, /* unimplemented epoll_create1 */
	/* 292 */	NULL, /* dup3 */
	/* 293 */	NULL, /* pipe2 */
	/* 294 */	NULL, /* unimplemented inotify_init1 */
	/* 295 */	NULL, /* unimplemented preadv */
	/* 296 */	NULL, /* unimplemented pwritev */
	/* 297 */	NULL, /* unimplemented rt_tgsigqueueinfo */
	/* 298 */	NULL, /* unimplemented perf_counter_open */
	/* 299 */	NULL, /* recvmmsg */
	/* 300 */	NULL, /* unimplemented fanotify_init */
	/* 301 */	NULL, /* unimplemented fanotify_mark */
	/* 302 */	NULL, /* unimplemented prlimit64 */
	/* 303 */	NULL, /* unimplemented name_to_handle_at */
	/* 304 */	NULL, /* unimplemented open_by_handle_at */
	/* 305 */	NULL, /* unimplemented clock_adjtime */
	/* 306 */	NULL, /* unimplemented syncfs */
	/* 307 */	NULL, /* sendmmsg */
	/* 308 */	NULL, /* unimplemented setns */
	/* 309 */	NULL, /* unimplemented getcpu */
	/* 310 */	NULL, /* unimplemented process_vm_readv */
	/* 311 */	NULL, /* unimplemented process_vm_writev */
	/* 312 */	NULL, /* unimplemented kcmp */
	/* 313 */	NULL, /* unimplemented finit_module */
	/* 314 */	NULL, /* nosys */
	/* 315 */	NULL, /* filler */
	/* 316 */	NULL, /* filler */
	/* 317 */	NULL, /* filler */
	/* 318 */	NULL, /* filler */
	/* 319 */	NULL, /* filler */
	/* 320 */	NULL, /* filler */
	/* 321 */	NULL, /* filler */
	/* 322 */	NULL, /* filler */
	/* 323 */	NULL, /* filler */
	/* 324 */	NULL, /* filler */
	/* 325 */	NULL, /* filler */
	/* 326 */	NULL, /* filler */
	/* 327 */	NULL, /* filler */
	/* 328 */	NULL, /* filler */
	/* 329 */	NULL, /* filler */
	/* 330 */	NULL, /* filler */
	/* 331 */	NULL, /* filler */
	/* 332 */	NULL, /* filler */
	/* 333 */	NULL, /* filler */
	/* 334 */	NULL, /* filler */
	/* 335 */	NULL, /* filler */
	/* 336 */	NULL, /* filler */
	/* 337 */	NULL, /* filler */
	/* 338 */	NULL, /* filler */
	/* 339 */	NULL, /* filler */
	/* 340 */	NULL, /* filler */
	/* 341 */	NULL, /* filler */
	/* 342 */	NULL, /* filler */
	/* 343 */	NULL, /* filler */
	/* 344 */	NULL, /* filler */
	/* 345 */	NULL, /* filler */
	/* 346 */	NULL, /* filler */
	/* 347 */	NULL, /* filler */
	/* 348 */	NULL, /* filler */
	/* 349 */	NULL, /* filler */
	/* 350 */	NULL, /* filler */
	/* 351 */	NULL, /* filler */
	/* 352 */	NULL, /* filler */
	/* 353 */	NULL, /* filler */
	/* 354 */	NULL, /* filler */
	/* 355 */	NULL, /* filler */
	/* 356 */	NULL, /* filler */
	/* 357 */	NULL, /* filler */
	/* 358 */	NULL, /* filler */
	/* 359 */	NULL, /* filler */
	/* 360 */	NULL, /* filler */
	/* 361 */	NULL, /* filler */
	/* 362 */	NULL, /* filler */
	/* 363 */	NULL, /* filler */
	/* 364 */	NULL, /* filler */
	/* 365 */	NULL, /* filler */
	/* 366 */	NULL, /* filler */
	/* 367 */	NULL, /* filler */
	/* 368 */	NULL, /* filler */
	/* 369 */	NULL, /* filler */
	/* 370 */	NULL, /* filler */
	/* 371 */	NULL, /* filler */
	/* 372 */	NULL, /* filler */
	/* 373 */	NULL, /* filler */
	/* 374 */	NULL, /* filler */
	/* 375 */	NULL, /* filler */
	/* 376 */	NULL, /* filler */
	/* 377 */	NULL, /* filler */
	/* 378 */	NULL, /* filler */
	/* 379 */	NULL, /* filler */
	/* 380 */	NULL, /* filler */
	/* 381 */	NULL, /* filler */
	/* 382 */	NULL, /* filler */
	/* 383 */	NULL, /* filler */
	/* 384 */	NULL, /* filler */
	/* 385 */	NULL, /* filler */
	/* 386 */	NULL, /* filler */
	/* 387 */	NULL, /* filler */
	/* 388 */	NULL, /* filler */
	/* 389 */	NULL, /* filler */
	/* 390 */	NULL, /* filler */
	/* 391 */	NULL, /* filler */
	/* 392 */	NULL, /* filler */
	/* 393 */	NULL, /* filler */
	/* 394 */	NULL, /* filler */
	/* 395 */	NULL, /* filler */
	/* 396 */	NULL, /* filler */
	/* 397 */	NULL, /* filler */
	/* 398 */	NULL, /* filler */
	/* 399 */	NULL, /* filler */
	/* 400 */	NULL, /* filler */
	/* 401 */	NULL, /* filler */
	/* 402 */	NULL, /* filler */
	/* 403 */	NULL, /* filler */
	/* 404 */	NULL, /* filler */
	/* 405 */	NULL, /* filler */
	/* 406 */	NULL, /* filler */
	/* 407 */	NULL, /* filler */
	/* 408 */	NULL, /* filler */
	/* 409 */	NULL, /* filler */
	/* 410 */	NULL, /* filler */
	/* 411 */	NULL, /* filler */
	/* 412 */	NULL, /* filler */
	/* 413 */	NULL, /* filler */
	/* 414 */	NULL, /* filler */
	/* 415 */	NULL, /* filler */
	/* 416 */	NULL, /* filler */
	/* 417 */	NULL, /* filler */
	/* 418 */	NULL, /* filler */
	/* 419 */	NULL, /* filler */
	/* 420 */	NULL, /* filler */
	/* 421 */	NULL, /* filler */
	/* 422 */	NULL, /* filler */
	/* 423 */	NULL, /* filler */
	/* 424 */	NULL, /* filler */
	/* 425 */	NULL, /* filler */
	/* 426 */	NULL, /* filler */
	/* 427 */	NULL, /* filler */
	/* 428 */	NULL, /* filler */
	/* 429 */	NULL, /* filler */
	/* 430 */	NULL, /* filler */
	/* 431 */	NULL, /* filler */
	/* 432 */	NULL, /* filler */
	/* 433 */	NULL, /* filler */
	/* 434 */	NULL, /* filler */
	/* 435 */	NULL, /* filler */
	/* 436 */	NULL, /* filler */
	/* 437 */	NULL, /* filler */
	/* 438 */	NULL, /* filler */
	/* 439 */	NULL, /* filler */
	/* 440 */	NULL, /* filler */
	/* 441 */	NULL, /* filler */
	/* 442 */	NULL, /* filler */
	/* 443 */	NULL, /* filler */
	/* 444 */	NULL, /* filler */
	/* 445 */	NULL, /* filler */
	/* 446 */	NULL, /* filler */
	/* 447 */	NULL, /* filler */
	/* 448 */	NULL, /* filler */
	/* 449 */	NULL, /* filler */
	/* 450 */	NULL, /* filler */
	/* 451 */	NULL, /* filler */
	/* 452 */	NULL, /* filler */
	/* 453 */	NULL, /* filler */
	/* 454 */	NULL, /* filler */
	/* 455 */	NULL, /* filler */
	/* 456 */	NULL, /* filler */
	/* 457 */	NULL, /* filler */
	/* 458 */	NULL, /* filler */
	/* 459 */	NULL, /* filler */
	/* 460 */	NULL, /* filler */
	/* 461 */	NULL, /* filler */
	/* 462 */	NULL, /* filler */
	/* 463 */	NULL, /* filler */
	/* 464 */	NULL, /* filler */
	/* 465 */	NULL, /* filler */
	/* 466 */	NULL, /* filler */
	/* 467 */	NULL, /* filler */
	/* 468 */	NULL, /* filler */
	/* 469 */	NULL, /* filler */
	/* 470 */	NULL, /* filler */
	/* 471 */	NULL, /* filler */
	/* 472 */	NULL, /* filler */
	/* 473 */	NULL, /* filler */
	/* 474 */	NULL, /* filler */
	/* 475 */	NULL, /* filler */
	/* 476 */	NULL, /* filler */
	/* 477 */	NULL, /* filler */
	/* 478 */	NULL, /* filler */
	/* 479 */	NULL, /* filler */
	/* 480 */	NULL, /* filler */
	/* 481 */	NULL, /* filler */
	/* 482 */	NULL, /* filler */
	/* 483 */	NULL, /* filler */
	/* 484 */	NULL, /* filler */
	/* 485 */	NULL, /* filler */
	/* 486 */	NULL, /* filler */
	/* 487 */	NULL, /* filler */
	/* 488 */	NULL, /* filler */
	/* 489 */	NULL, /* filler */
	/* 490 */	NULL, /* filler */
	/* 491 */	NULL, /* filler */
	/* 492 */	NULL, /* filler */
	/* 493 */	NULL, /* filler */
	/* 494 */	NULL, /* filler */
	/* 495 */	NULL, /* filler */
	/* 496 */	NULL, /* filler */
	/* 497 */	NULL, /* filler */
	/* 498 */	NULL, /* filler */
	/* 499 */	NULL, /* filler */
	/* 500 */	NULL, /* filler */
	/* 501 */	NULL, /* filler */
	/* 502 */	NULL, /* filler */
	/* 503 */	NULL, /* filler */
	/* 504 */	NULL, /* filler */
	/* 505 */	NULL, /* filler */
	/* 506 */	NULL, /* filler */
	/* 507 */	NULL, /* filler */
	/* 508 */	NULL, /* filler */
	/* 509 */	NULL, /* filler */
	/* 510 */	NULL, /* filler */
	/* 511 */	NULL, /* filler */
};