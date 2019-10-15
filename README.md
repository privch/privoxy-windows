# Privoxy for Windows
Build and debug Privoxy using Visual Studio. Privoxy was configured as console application with following features enabled:
```C
#define FEATURE_ACL
#define FEATURE_GRACEFUL_TERMINATION
#define FEATURE_CONNECTION_KEEP_ALIVE
#define FEATURE_CLIENT_TAGS
```

dftables is the program used to generate the source file chartables.c required by PCRE.
