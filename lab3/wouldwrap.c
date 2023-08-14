#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

/** Return true when the sum of dirlen, filelen, extlen and 3
 * would exceed the maximum possible value of a size_t; otherwise,
 * return false.
 */
bool would_wrap_around(size_t dirlen, size_t filelen, size_t extlen) {
    size_t res = dirlen + filelen;
    if (res < dirlen || res < filelen) {
        return 1;
    }
    res += extlen + 3;
    if (res < dirlen || res < filelen || res < extlen){
        return 1;
    }
    return 0;
}

int main(){
    // this could go in your main() function
    size_t dirlen = SIZE_MAX - 8; // adding 9 will cause wraparound
    size_t filelen = 3;
    size_t extlen = 3;
    bool res = would_wrap_around(dirlen, filelen, extlen);
    printf("%d\n", res);
    // and should produce the output shown at right
}