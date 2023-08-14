#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>


void fill_buffer(
    const char *dir, size_t dirlen, const char *fname, size_t filelen,
    const char *ext, size_t extlen, char *path
) {
    size_t pathlen = dirlen + filelen + extlen + 3;
    snprintf(path, pathlen, "%s/%s.%s", dir, fname, ext);
}