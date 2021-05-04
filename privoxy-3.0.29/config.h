/*
    Follow features are not supported:
    FUZZ, FEATURE_HTTPS_INSPECTION_OPENSSL

    xinlake@outlook.com
*/

#ifndef PRIVOXY_CONFIG
#define PRIVOXY_CONFIG


#define VERSION "3.0.29"
#define CODE_STATUS "stable"
#define VERSION_MAJOR 3
#define VERSION_MINOR 0
#define VERSION_POINT 29

#define HAVE_SNPRINTF
#define HAVE_TZSET
#define HAVE_PUTENV
#define HAVE_STRERROR
#define HAVE_MEMMOVE 1
#define HAVE_CALLOC

#define STATIC_PCRE
#define STATIC_PCRS

#define FEATURE_ACL
#define FEATURE_GRACEFUL_TERMINATION
#define FEATURE_CONNECTION_KEEP_ALIVE
#define FEATURE_CLIENT_TAGS
#define FEATURE_HTTPS_INSPECTION
#define FEATURE_HTTPS_INSPECTION_MBEDTLS

#define _WIN_CONSOLE
#define SIZEOF_LONG_LONG 8

#ifdef _WIN32
#define strcasecmp _stricmp
#define strncasecmp  _strnicmp
#define strdup _strdup
#endif


#endif
