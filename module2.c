#include "stdio.h"

#ifdef Variability5

int main(){
    int var1 = 55;
    printf("Var1 value is %d\n", var1);
    if(var1 == 55){
        var1 = 512;
        printf("Powers of 2 are interesting numbers, like %d\n", var1);
    }
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