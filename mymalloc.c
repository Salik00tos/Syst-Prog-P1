#include <stdlib.h>
#undef malloc
#undef free
#include "mymalloc.h"

// *********Temporary*********

void *mymalloc(size_t size, char *file, int line) {
    return malloc(size); // Uses the real malloc inside mymalloc.
}

void myfree(void *ptr, char *file, int line) {
    free(ptr); // Uses the real free inside myfree.
}