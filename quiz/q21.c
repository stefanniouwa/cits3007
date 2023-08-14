#include <stdio.h>
#include <stdlib.h>

int return_num() {
    // auto int n = 1;
    static int n = 1;
    n += 1;
    return n;
}

int main() {
    auto int o;

    for(auto size_t i = 0; i < 5; i++) {
        o = return_num(); 
    }
    
    printf("%d\n", o);
    return 0;
}