#include "stdio.h"

#ifdef Variability1

int main(){
    int var1 = 55;
    printf("Var1 value is %d\n", var1);
}

#endif


#ifdef Variability2

int MaybeAnotherMainFunction(){
    int var2 = 110;
    int var2_2 = 220;

    printf("Trying some elaborate test%d\n", var2);

    var2 = var2_2;
}

#endif