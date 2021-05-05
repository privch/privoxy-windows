# Privoxy for Windows
![MSBuild](https://github.com/xinlake/privoxy-windows/workflows/MSBuild/badge.svg)

选择语言：[英文](README.md)，简体中文

[Privoxy](https://www.privoxy.org/) 项目的 Windows 移植，使用 Visual Studio 2019 构建和调试。`privoxy-windows` Visual Studio 解决方案（privoxy.sln）包括三个工程：

### privoxy
Windows 原生应用程序 privoxy.exe，依赖 `mbedtls` 静态库，privoxy 被配置为了 Windows 控制台应用程序，并启用了以下功能：
``` C
#define FEATURE_ACL
#define FEATURE_GRACEFUL_TERMINATION
#define FEATURE_CONNECTION_KEEP_ALIVE
#define FEATURE_CLIENT_TAGS
#define FEATURE_HTTPS_INSPECTION
#define FEATURE_HTTPS_INSPECTION_MBEDTLS
```

### mbedtls

[Mbed TLS](https://tls.mbed.org/) Visual Studio 静态库。

### dftables

这个程序用来生成 `privoxy` 工程所需的源文件 `chartables.c`。

# 构建
下载源代码并保存到一个目录如 `Source-Privoxy`，构建之前你可能需要知道工程的中间目录被设为了 `Source-Privoxy\.build`，输出目录则被设为了 `Source-Privoxy\.target`，你可以在工程的属性页面中修改这些设置。

1，用 Visual Studio 2019 打开 `privoxy.sln`

2，编译 `dftables` 工程，到输出目录（如 `Source-Privoxy\.target\x64\Debug`）运行 dftables.exe 以生成 `chartables.c` 文件：
```
dftables.exe > "..\..\..\privoxy-3.0.32\pcre\chartables.c"
```

3，编译 `privoxy` 工程，你可以在输出目录里找到最终的文件。
