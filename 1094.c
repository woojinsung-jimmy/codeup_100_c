    #include <stdio.h>

    int main(){
        int n,i,t;
        int a[10000]={};
        scanf("%d",&n);
        for (i=1;i<=n;i++){
            scanf("%d",&t);
            a[i] = t;
        }
        for (i=n;i>=1;i--){
            printf("%d ",a[i]);
        }

    }