#include "stdio.h"

#ifdef Variability5
int var3 = 110;
#endif

#ifdef Variability3
int AnotherMain(){
    var3 = 256;

    print("this is a new vp\n");
    if(var3 != 110){
        printf("Woah, something changed\n");
    }
}
#endif