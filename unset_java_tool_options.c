#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>

__attribute__((constructor))
static void unset_java_tool_options(void) {
    if (getenv("JAVA_TOOL_OPTIONS")) {
        unsetenv("JAVA_TOOL_OPTIONS");
        printf("JAVA_TOOL_OPTIONS has been unset.\n");
    }
}