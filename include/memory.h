#ifndef PROJECT_CL_MEMORY_H
#define PROJECT_CL_MEMORY_H

#include <defs.h>

#ifdef __cplusplus
extern "C" {
#endif

void cc_memset(void *ptr, cc_uint8 value, cc_size cnt);

void cc_memcpy(void *dst, void *src, cc_size cnt);

void cc_memmove(void *dst, void *src, cc_size cnt);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* PROJECT_CL_MEMORY_H */
