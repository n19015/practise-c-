#include <stdio.h>

//  関数のプロトタイプ宣言
int add(int,int);
int sub(int, int);

void main(){
    int a,b;
    int result;
    int anser;
    printf("a=");
    scanf("%d",&a);     //  1つ目の数、aを入力
    printf("b=");
    scanf("%d",&b);     //  2つ目の数、bを入力
    result = add(a,b);  //  3つ目の数、cを入力
    anser = sub(a, b);
    printf("%d + %d = %d\n",a,b,result);    //  計算結果を出力
    printf("%d - %d = %d\n", a, b, anser);
}

//  二つの整数の和を求める関数
int add(int n1,int n2){
    return n1 + n2;
}

int sub(int x1, int x2){
    return x1 - x2;
}
