#include <stdio.h>

int numJudge(int);

int main(void){
    int a;
    int result;
    printf("整数値を入力してください：");
    scanf("%d",&a);
    result = numJudge(a);
    printf("%d\n", result);
}

int numJudge(int n1){
    if(n1 == 0){
        printf("0です\n");
    }else if(n1%2 == 0){
        printf("偶数です\n");
    }else{
        printf("奇数です\n");
    }
}
