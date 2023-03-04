#include <stdio.h>

int main(){
    int x=2,y=2,i,j;
    int a[100][100] = {};

    for (i=1;i<=10;i++){
        for (j=1;j<=10;j++){
            scanf("%d",&a[i][j]);
        }
    }
    while (1){
        if (a[x][y]==2){
            a[x][y]=9;
            break;
        }
        a[x][y]=9;
        if (a[x][y+1]==1){
            if (a[x+1][y]==1) {break;} //오른쪽 벽, 아래쪽 벽
            else { x++;} //오른쪽 벽, 아래쪽 0
        }
        else{ 
            y++;
        }

    }


    for (i=1;i<=10;i++){
        for (j=1;j<=10;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
