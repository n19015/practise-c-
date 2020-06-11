#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i = 0;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max = a[0];
    int min = a[9];
    srand(time(NULL));
    for(i = 0; i < 10; i++) {
        a[i] = rand() % 10 + 1;
        printf(" %d", a[i]);
        if (max < a[i]) {
            max = a[i];
        }
        if (min > a[i]) {
            min = a[i];
        }
    }
    printf("\n");
    printf("最大値:%d\n", max);
    printf("最小値:%d\n", min);
}
