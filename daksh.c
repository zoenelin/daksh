#include "daksh.h"

int main(int argc, char *argv[]) {
  
if (argc == 1) {                                                         // interactive mode 
    interactive();
} else if (argc == 2) {                                                  // batch mode 

} else {                                                                 // error
  // error too many arguments

}



  return 0;
}