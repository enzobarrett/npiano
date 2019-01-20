AC_INIT([npiano], [0.9], [enzobarrett@gmail.com])
AM_INIT_AUTOMAKE
AC_PROG_CC
#AC_CHECK_HEADERS([stdlib.h unistd.h])
AC_CHECK_HEADERS([ncurses.h])
AC_CHECK_PROG(beep,[beep],[yes],[no])
test "$beep" == "no" && AC_MSG_ERROR([Required program 'beep' not found.])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
