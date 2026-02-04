#include "daksh.h"

/*
  The while loop logic explained
  1 means true -> aka run 
  0 means false -> aka don't run

  any non-zero number will be treated as true and run

  so while(1) is an infinite loop that runs until exit is typed
*/

void interactive(void){
    char *input = NULL; // allocates a block of memory for buffer // malloc(sizeof(char) * input_buf_size);
    size_t input_buf_size = 0; // holds the size of the buffer and initialized to 0

  while(1) {  
    printf("daksh> ");
    // read input 
    getline(&input, &input_buf_size, stdin); // (address of buffer, address of size of buffer, standard input stream --> keyboard)
    
    // exit while loop condition
    if (strcmp(input, "exit\n") == 0){
      break;
    }

    printf("Command typed: %sWith buffer size of %ld\n", input, input_buf_size);

    // char * strsep(char **stringp, const char *delim);
    // parse input 
    char *parse_input = input;
    char *token;  // token is spaces (" ")
    char *argv[25];
    int argc = 0;

    while ((token = strsep(&parse_input, " \t\n")) != NULL) {
      if (*token ==  '\0') {
        continue; // skip over empty tokens
      }
      argv[argc++] = token;
    }

    argv[argc] = NULL; // required for execvp later
    
    // debugging purposes
    for (int i = 0; i < argc; i++) {
      printf("Token[%d]: %s\n", i, argv[i]);
    }
  } 
  free(input);
}

void batch(char *filename) {

}