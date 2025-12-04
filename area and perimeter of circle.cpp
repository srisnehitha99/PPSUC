#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    float pi=3.14;
    float area=pi*n*n;
    float perimeter=2*pi*n;
    printf("%.2f",area);
    printf("");
    printf("%.2f",perimeter);
}
