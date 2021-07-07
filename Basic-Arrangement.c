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

    int s, x, y;
    int a[20][20]={};
    for(int i = 1; i<=19; i++){     // 바둑판 입력 받기
        for(int j = 1; j<=19; j++){
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &s); // 좌표개수입력받기.
    for(int j = 1; j<=s; j++){  // 좌표입력받기
        scanf("%d %d", &x, &y);
        for(int j = 1; j<=19; j++){
            if(a[x][j]==0) { a[x][j]=1; }
            else a[x][j] = 0;
        }
        for(int j = 1; j<=19; j++){
            if(a[j][y]==0) { a[j][y]=1; }
            else a[j][y] = 0;
        }
    }
    for(int i = 1; i<=19; i++){
        for(int j = 1; j<=19; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int h, w, n, l, d, x, y, board[100][100] = {0, };
    scanf("%d %d", &h, &w);
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        scanf("%d %d %d %d", &l, &d, &x, &y);
        if(d==0) {
            for(int i = y; i<(y+l); i++) { board[x][i]=1;}
        }
        if(d==1) {
            for(int i = x; i<(x+l); i++) { board[i][y]=1;}
        }
    }
    for(int i = 1; i<=h; i++){
        for(int j = 1; j<=w; j++){
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    */

    int board[10][10] = {0, };
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            scanf("%d", &board[i][j]);
        }
    }
    int i = 1, j = 1;
    while(1){
        if(board[i][j]==1) { 
            i++;
            j--;
        }
        else if(board[i][j]==0) { 
            board[i][j] = 9; 
            j++;
        }
        else { 
            board[i][j] = 9;
            break; 
        }
    }
    
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}