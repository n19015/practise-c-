#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int a[10] = {};
    srand(time(NULL));
    for(int i = 0; i < 10; i++) {
        a[i] = rand() % 10 + 1;
        if (a[i] % 2 == 0){
            printf("偶数:%d\n", a[i]);
        } else {
            printf("奇数:%d\n", a[i]);
        }
    }
}
