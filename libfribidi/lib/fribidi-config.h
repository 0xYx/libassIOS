/* @configure_input@ */
/* Not copyrighted, in public domain. */
#ifndef FRIBIDI_CONFIG_H
#define FRIBIDI_CONFIG_H

#define FRIBIDI "@PACKAGE@"
#define FRIBIDI_NAME "@PACKAGE_NAME@"
#define FRIBIDI_BUGREPORT "@PACKAGE_BUGREPORT@"

#define FRIBIDI_VERSION "@FRIBIDI_VERSION@"
#define FRIBIDI_MAJOR_VERSION @FRIBIDI_MAJOR_VERSION@
#define FRIBIDI_MINOR_VERSION @FRIBIDI_MINOR_VERSION@
#define FRIBIDI_MICRO_VERSION @FRIBIDI_MICRO_VERSION@
#define FRIBIDI_INTERFACE_VERSION @FRIBIDI_INTERFACE_VERSION@
#define FRIBIDI_INTERFACE_VERSION_STRING "@FRIBIDI_INTERFACE_VERSION@"

/* Define to 1 if you want charset conversion codes in the library */
//#define FRIBIDI_CHARSETS @FRIBIDI_CHARSETS@
#define FRIBIDI_CHARSETS 1

/* Define to 1 if you want to use glib */
//#define FRIBIDI_USE_GLIB @FRIBIDI_USE_GLIB@
#define FRIBIDI_USE_GLIB 0

/* The size of a `int', as computed by sizeof. */
#define FRIBIDI_SIZEOF_INT __SIZEOF_INT__

#endif /* FRIBIDI_CONFIG_H */
