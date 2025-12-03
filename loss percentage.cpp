#include<stdio.h>
int main(){
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    double loss=cp-sp;
    double l=(loss/cp)*100;
    printf("%.2f",l);
}
