#include <stdio.h>

int main(){
    int a,d,n;
    scanf("%d %d %d",&a,&d,&n);

    while (1){
        a += d;
        n--;
        if (n==1){
            printf("%d",a);
            break;
        }
    }

    return 0;
}