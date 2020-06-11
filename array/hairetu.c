#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int a[6] = {1, 2, 3, 4, 5, 6};
    srand(time(NULL));
    for(int i = 0; i < 6; i++) {
        a[i] = rand() % 10 + 1;
        printf("%d\n", a[i]);
    }
}
