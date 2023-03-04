#include <stdio.h>

int main(){
    int h,w,n,l,d,x,y,i,j;
    scanf("%d %d",&h,&w);
    int a[100][100] = {};
    scanf("%d",&n);

    for (i=1;i<=h;i++){
        for (j=1;j<=w;j++){
            a[i][j]=0;
        }
    }

    for (i=1;i<=n;i++){
        scanf("%d %d %d %d",&l,&d,&x,&y);
        for (j=0;j<=l-1;j++){
            if (d==0){
                a[x][y+j] = 1;
            }
            else{
                a[x+j][y] = 1;
            }
        }
    }

    for (i=1;i<=h;i++){
        for (j=1;j<=w;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
