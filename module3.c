#include "stdio.h"

#ifdef Variability3
int AnotherMain(){
    var3 = 256;

    print("this is a new vp\n");
    if(var3 != 110){
        printf("Woah, something changed\n");
    }
}
#endif

#if defined(Variability3) || defined(Variability2) 
int orFunction(){
    var3or2 = 256;

    print("this is a new vp\n");
}
#endif

#if defined(Variability3) && defined(Variability2) 
int andFunction(){
    var3and2 = 256;

    print("this is a new vp\n");
    if(var3and2 != 110){
        printf("Woah, something changed again\n");
    }
}
#endif

#if defined(Variability3) && defined(Variability2) 
    andFunction();
#endif

#if defined(Variability3) || defined(Variability2) 
    orFunction();
#endif