/*

Basic-Arrangement

CodeUp - C1093 ~ C1100

*/

#include <stdio.h>

int main() {

    /*

    int n, i, t;
    int a[24] = {0,};
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &t);
        a[t] += 1;
    }
    for(i=1; i<=23; i++){
        printf("%d", a[i]);
    }

    int num, a[10000];
    scanf("%d", &num);
    for(int i = 1; i<=num; i++){
        scanf("%d", &a[i]);
    }
    for(int i = num; i>0; i--){
        printf("%d ", a[i]);
    }

    int num, number, a[10000];
    scanf("%d", &num);
    for(int i = 0; i<num; i++){
        scanf("%d", &a[i]);
    }
    number = a[0];
    for(int i = 0; i<num; i++){
        if(number>a[i]) { number = a[i]; }
    }
    printf("%d", number);

    int n, i, j, x, y;
    int a[20][20]={};
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d %d", &x, &y);
        a[x][y]=1;
    }
    for(i=1; i<=19; i++){
        for(j=1; j<=19; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    */

    int s, x, y;
    int a[20][20];
    for(int i = 1; i<=19; i++){     // 바둑판 입력 받기
        for(int j = 1; j<=19; j++){
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &s); // 좌표입력받기.
    for(int j = 1; j<=s; j++){
        scanf("%d %d", &x, &y);
        for(int j = 1; j<=19; j++){
            if(a[x][j]==0) { a[x][j]=1; }
            else a[x][j] = 0;
        }
        for(int j = 1;);
    }

    
    return 0;
}