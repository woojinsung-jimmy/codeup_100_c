    #include <stdio.h>

    int main(){
        int n,i,t,min=23;
        int a[10000]={};
        scanf("%d",&n);
        for (i=1;i<=n;i++){
            scanf("%d",&t);
            a[i] = t;
        }

        for (i=1;i<=n;i++){
            if (min>a[i]){
                min = a[i];
            }

        }
        printf("%d",min);
    }