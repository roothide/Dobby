#pragma once

#include "dobby/common.h"

#include "UnifiedInterface/platform.h"

#include "PlatformUnifiedInterface/MemoryAllocator.h"
#include "PlatformUnifiedInterface/ExecMemory/CodePatchTool.h"
#include "PlatformUnifiedInterface/ExecMemory/ClearCacheTool.h"

#include "MemoryAllocator/AssemblyCodeBuilder.h"

#include "InterceptRouting/InterceptRouting.h"

/*
#include <sys/syslog.h>
#define SYSLOG(...)                                                                                                    \
  {                                                                                                                    \
    fprintf(stderr, __VA_ARGS__);                                                                                      \
    fprintf(stderr, "\n");                                                                                             \
    fflush(stderr);                                                                                                    \
    openlog("roothide", LOG_PID, LOG_AUTH);                                                                            \
    syslog(LOG_DEBUG, __VA_ARGS__);                                                                                    \
    closelog();                                                                                                        \
  }
/*/
#define SYSLOG(...)
//*/
