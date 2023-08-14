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

char* make_pathname(const char *dir, const char *fname, const char *ext) {
    // replace this comment and the return statement with your own code
    size_t dirlen = sizeof(dir);
    size_t filelen = sizeof(fname);
    size_t extlen = sizeof(ext);

    size_t pathlen = dirlen + filelen + extlen + 3;
    char *path = (char *)malloc(pathlen * sizeof(char*));
  

    fill_buffer(dir, dirlen, fname, filelen, ext, extlen, path);
    
    return path;
    
}

