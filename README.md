# Privoxy for Windows
Build and debug Privoxy (<https://www.privoxy.org/>) using Visual Studio 2019. Privoxy was configured as windows console application with following features enabled:
```C
#define FEATURE_ACL
#define FEATURE_GRACEFUL_TERMINATION
#define FEATURE_CONNECTION_KEEP_ALIVE
#define FEATURE_CLIENT_TAGS
```

The dftables is the program used to generate the source file `chartables.c` required by PCRE.

privoxy-windows will follow up the official version.

![](https://github.com/xinlake/privoxy-windows/raw/master/Assets/screen-1.jpg)
