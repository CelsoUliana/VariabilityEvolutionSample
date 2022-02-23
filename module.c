#include "stdio.h"

#ifdef Variability3
int var3 = 110;
#endif

int main(){
    int var1 = 55;
    printf("Var1 value is %d\n", var1);
}



#ifdef Variability3

int AnotherMain(){
    var3 = 256;

    print("this is a new vp\n");
    if(var3 != 110){
        printf("Woah, something changed\n");
    }
}


#endif