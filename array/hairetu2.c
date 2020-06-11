#include <stdio.h>

int main(void){
    double a[4] = {1.2, -1.3, 5.2, 4.8};
    for (int i = 0; i < 4; i++){
        printf("a[%d]=%f\n", i, a[i]);
    }
}
