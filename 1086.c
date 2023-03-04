#include <stdio.h>

int main(){
    long long int w,h,b;
    scanf("%lld %lld %lld",&w,&h,&b);
    double size = (double)(w*h*b)/8388608;
    printf("%.2lf MB",size);

    return 0;
}