#include <stdio.h>

int main(){
    long long int h,b,c,s;
    scanf("%lld %lld %lld %lld",&h,&b,&c,&s);
    double size = (double)(h*b*c*s)/8388608;
    printf("%.1lf MB",size);

    return 0;
}