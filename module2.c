#include "stdio.h"


#ifdef Variability2

int MaybeAnotherMainFunction(){
    int var2 = 110;
    int var2_2 = 220;

    printf("Trying some elaborate test%d\n", var2);

    var2 = var2_2;
}

#endif