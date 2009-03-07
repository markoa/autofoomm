
AM_CXXFLAGS = -Wall -Wextra \
              -Wctor-dtor-privacy -Woverloaded-virtual -Wchar-subscripts \
              -Wpointer-arith -Wcast-align -Wsign-compare

bin_PROGRAMS = autofoomm

autofoomm_SOURCES = \
	main.cc

global_defines = \
  -DPREFIX=\""$(prefix)"\" \
  -DSYSCONFDIR=\""$(sysconfdir)"\" \
  -DLIBDIR=\""$(libdir)"\" \
  -DDATADIR=\""$(datadir)"\" \
  -DAUTOFOOMM_PKGDATADIR=\""$(pkgdatadir)"\" \
  -DGTKMM_DISABLE_DEPRECATED

AM_CPPFLAGS = -I$(top_builddir) -I$(top_srcdir) $(global_defines) \
               ${AUTOFOOMM_CFLAGS}

autofoomm_LDADD = ${AUTOFOOMM_LIBS}
