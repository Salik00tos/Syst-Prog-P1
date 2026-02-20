// This paper depends on a shared outline called greet.h
// If greet.h changes, we may need to recompile this file
#include "greet.h"

int main(void) {
    // Use a function defined in another section (greet.c)
    greet("world");
    return 0;
}