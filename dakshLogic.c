#include "daksh.h"

/*
  The while loop logic explained
  1 means true -> aka run 
  0 means false -> aka don't run

  any non-zero number will be treated as true and run

  so while(1) is an infinite loop that runs until exit is typed
*/

void interactive(void){
    char *input = NULL; // allocates a block of memory for buffer
    size_t input_buf_size = 0; // holds the size of the buffer

  while(1) {  
    printf("daksh> ");
    getline(&input, &input_buf_size, stdin); // (address of buffer, address of size of buffer, standard input stream --> keyboard)
    printf("\n");
    printf("Command typed: %sWith buffer size of %ld\n", input, input_buf_size);
  
    if (strcmp(input, "exit\n") == 0){
      break;
    }
  } 
  free(input);
}

void batch(char *filename) {

}