#include <stdio.h>     // Needed to print text
#include "greet.h"     // Include the shared declaration (outline)


// This is the actual implementation of the function
// Think of it as writing the full paragraph
void greet(const char *name) {
    printf("Hello, %s!\n", name);
}