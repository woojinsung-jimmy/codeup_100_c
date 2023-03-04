#include <stdio.h>

int main(){
    int a,sum=1,i;
    scanf("%d",&a);
    for (i=0;sum<=a;i++){
        sum += i;
    }
    printf("%d",i-1);


    return 0;
}