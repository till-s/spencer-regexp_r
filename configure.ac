AC_INIT(regexp, unknown, unknown)
AM_INIT_AUTOMAKE(regexp, unknown)
AM_MAINTAINER_MODE
AC_CANONICAL_HOST

AC_PROG_INSTALL
AC_PROG_CC
AC_PROG_RANLIB
AC_CHECK_TOOL(AR,ar)

dnl RTEMS build seems to work fine with standard makefile
dnl
dnl if test "$host_os" == "rtems" ; then
dnl template=Makefile.rtems.in
dnl else

dnl template=Makefile.in

dnl fi

dnl AC_CONFIG_FILES(Makefile:$template)
AC_CONFIG_FILES(Makefile)
AC_OUTPUT
