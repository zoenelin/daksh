#ifndef daksh
#define daksh

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // for fork(), execvp(), getpid()
#include <string.h> 
#include <sys/wait.h> // for waitpid()
#include <sys/types.h> // for pid_t

void interactive(void);
void batch(char *filename);

#endif
