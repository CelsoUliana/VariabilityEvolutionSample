#include "stdio.h"

#ifdef Variability3
int var3 = 110;
#endif

#ifdef Variability3 || Variability2
int var32 = 32;
#endif

#ifdef Variability3 && Variability2
int var3and2 = 32;
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