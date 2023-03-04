#include <stdio.h>

int main(){
    int i=1,a,sum=0;
    scanf("%d",&a);
    while (1){
        sum+=i;
        i++;
        
        if (sum>=a){
            printf("%d",sum);
            break;
        }
    }

    

    return 0;
}