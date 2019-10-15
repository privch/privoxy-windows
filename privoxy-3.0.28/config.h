#ifndef _PRIVOXY_CONFIG_
#define _PRIVOXY_CONFIG_


#define VERSION "3.0.28"
#define CODE_STATUS "stable"
#define VERSION_MAJOR 3
#define VERSION_MINOR 0
#define VERSION_POINT 28

#define HAVE_SNPRINTF
#define HAVE_TZSET
#define HAVE_PUTENV
#define HAVE_STRERROR
#define HAVE_MEMMOVE 1
#define HAVE_CALLOC

#define STATIC_PCRE
#define STATIC_PCRS

/*
    fuzz was not added
*/
#define FEATURE_ACL
#define FEATURE_GRACEFUL_TERMINATION
#define FEATURE_CONNECTION_KEEP_ALIVE
#define FEATURE_CLIENT_TAGS

#define _WIN_CONSOLE
#define SIZEOF_LONG_LONG 8

#ifdef _WIN32
#define strcasecmp _stricmp
#define strncasecmp  _strnicmp
#define strdup _strdup
#endif


#endif