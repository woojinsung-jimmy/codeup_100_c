#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float d = (float)(a+b+c)/3;
    printf("%d\n",a+b+c);
    printf("%.1f\n",d);

    return 0;
}
