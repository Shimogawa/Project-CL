#include "cc_string.h"
#include "cc_assert.h"

#include <stddef.h>
#include <string.h>

CCTY(cc_ssize) cc_memchr(const void *str, int c, CCTY(cc_size) n) {
    CC_ASSERT(str != NULL);
    void *result = memchr(str, c, (size_t)n);
    if (result == NULL) {
        return -1;
    } else {
        return (CCTY(cc_ssize))(result - str);
    }
}

int cc_memcmp(const void *str1, const void *str2, CCTY(cc_size) n) {
    CC_ASSERT(str1 != NULL);
    CC_ASSERT(str2 != NULL);
    return memcmp(str1, str2, (size_t)n);
}

void cc_memcpy(void *restrict dest,
               const void * restrict from,
               CCTY(cc_size) n) {
    CC_ASSERT(dest != NULL);
    CC_ASSERT(from != NULL);
    (void)memcpy(dest, from, n);
}

void cc_memmove(void *dest, const void *from, CCTY(cc_size) n) {
    CC_ASSERT(dest != NULL);
    CC_ASSERT(from != NULL);
    (void)memmove(dest, from, (size_t)n);
}

CCTY(cc_size) cc_strcat(char *dest, const char *from);

CCTY(cc_size) cc_strncat(char *dest, const char *from, CCTY(cc_size) n);

int cc_strcmp(const char *str1, const char *str2);

int cc_strncmp(const char *str1, const char *str2, CCTY(cc_size) n);

CCTY(cc_size) cc_strcpy(char *dest, const char *from);

CCTY(cc_size) cc_strncpy(char *dest, const char *from, CCTY(cc_size) n);

CCTY(cc_ssize) cc_strchr(const char *str, int c);

CCTY(cc_ssize) cc_strrchr(const char *str, int c);

CCTY(cc_ssize) cc_strstr(const char *str1, const char *str2);