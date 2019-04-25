// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef _OE_STRING_H
#define _OE_STRING_H

#include <openenclave/bits/defs.h>
#include <openenclave/bits/types.h>

OE_EXTERNC_BEGIN

/*
**==============================================================================
**
** OE names:
**
**==============================================================================
*/

#if __STDC_VERSION__ >= 199901L
#define OE_RESTRICT restrict
#elif !defined(__GNUC__) || defined(__cplusplus)
#define OE_RESTRICT
#endif

/* The mem methods are always defined by their stdc names in oecore */
int memcmp(const void* vl, const void* vr, size_t n);
void* memcpy(void* OE_RESTRICT dest, const void* OE_RESTRICT src, size_t n);
void* memmove(void* dest, const void* src, size_t n);
void* memset(void* dest, int c, size_t n);

size_t oe_strlen(const char* s);

size_t oe_strnlen(const char* s, size_t n);

int oe_strcmp(const char* s1, const char* s2);

int oe_strncmp(const char* s1, const char* s2, size_t n);

char* oe_strstr(const char* haystack, const char* needle);

size_t oe_strlcpy(char* dest, const char* src, size_t size);

char* oe_strncpy(char* dest, const char* src, size_t n);

size_t oe_strlcat(char* dest, const char* src, size_t size);

char* oe_strerror(int errnum);

int oe_strerror_r(int errnum, char* buf, size_t buflen);

char* oe_strtok_r(char* str, const char* delim, char** saveptr);

char* oe_strdup(const char* s);

size_t oe_strspn(const char* s, const char* accept);

size_t oe_strcspn(const char* s, const char* reject);

int oe_strcasecmp(const char* s1, const char* s2);

int oe_strncasecmp(const char* s1, const char* s2, size_t n);

char* oe_strchr(const char* s, int c);

char* oe_strchrnul(const char* s, int c);

char* oe_strrchr(const char* s, int c);

/*
**==============================================================================
**
** Standard-C names:
**
**==============================================================================
*/

#if defined(OE_NEED_STDC_NAMES)

OE_INLINE
size_t strlen(const char* s)
{
    return oe_strlen(s);
}

OE_INLINE
size_t strnlen(const char* s, size_t n)
{
    return oe_strnlen(s, n);
}

OE_INLINE
int strcmp(const char* s1, const char* s2)
{
    return oe_strcmp(s1, s2);
}

OE_INLINE
int strncmp(const char* s1, const char* s2, size_t n)
{
    return oe_strncmp(s1, s2, n);
}

OE_INLINE
char* strstr(const char* haystack, const char* needle)
{
    return oe_strstr(haystack, needle);
}

OE_INLINE
size_t strlcpy(char* dest, const char* src, size_t size)
{
    return oe_strlcpy(dest, src, size);
}

OE_INLINE
char* strncpy(char* dest, const char* src, size_t n)
{
    return oe_strncpy(dest, src, n);
}

OE_INLINE
size_t strlcat(char* dest, const char* src, size_t size)
{
    return oe_strlcat(dest, src, size);
}

OE_INLINE
char* strerror(int errnum)
{
    return oe_strerror(errnum);
}

OE_INLINE
int strerror_r(int errnum, char* buf, size_t buflen)
{
    return oe_strerror_r(errnum, buf, buflen);
}

OE_INLINE
char* strtok_r(char* str, const char* delim, char** saveptr)
{
    return oe_strtok_r(str, delim, saveptr);
}

OE_INLINE char* strdup(const char* s)
{
    return oe_strdup(s);
}

OE_INLINE size_t strspn(const char* s, const char* accept)
{
    return oe_strspn(s, accept);
}

OE_INLINE size_t strcspn(const char* s, const char* reject)
{
    return oe_strcspn(s, reject);
}

OE_INLINE int strcasecmp(const char* s1, const char* s2)
{
    return oe_strcasecmp(s1, s2);
}

OE_INLINE int strncasecmp(const char* s1, const char* s2, size_t n)
{
    return oe_strncasecmp(s1, s2, n);
}

OE_INLINE char* strchr(const char* s, int c)
{
    return oe_strchr(s, c);
}

OE_INLINE char* strchrnul(const char* s, int c)
{
    return oe_strchrnul(s, c);
}

OE_INLINE char* strrchr(const char* s, int c)
{
    return oe_strrchr(s, c);
}

#endif /* defined(OE_NEED_STDC_NAMES) */

OE_EXTERNC_END

#endif /* _OE_STRING_H */
