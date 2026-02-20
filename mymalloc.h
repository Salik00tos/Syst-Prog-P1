/*
********** PROF ORIGINAL *********

#ifndef _MYMALLOC_H
#define _MYMALLOC_H

#define malloc(X) mymalloc (X, __FILE__, __LINE__)
#define free(X) myfree (X, __FILE__, __LINE__)

void * mymalloc (size_t size, char *file, int line);
void   myfree (void *ptr, char *file, int line):

#endif
*/

#ifndef _MYMALLOC_H
#define _MYMALLOC_H

#define malloc(X) mymalloc (X, __FILE__, __LINE__)
#define free(X) myfree (X, __FILE__, __LINE__)

void * mymalloc (size_t size, char *file, int line);
void   myfree (void *ptr, char *file, int line);

# endif

/*
At this current state, the entire program will strictly avoid using C's own malloc() and free()

to undo (incase we need to test using the real system malloc()), the header must look like this:
#ifndef _MYMALLOC_H
#define _MYMALLOC_H

#define malloc(X) mymalloc (X, __FILE__, __LINE__)
#define free(X) myfree (X, __FILE__, __LINE__)

void * mymalloc (size_t size, char *file, int line);
void   myfree (void *ptr, char *file, int line);

#endif 
*/