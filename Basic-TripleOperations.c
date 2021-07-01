/*

Basic-Triple Operations

CodeUp - C1063 ~ C1064

*/

#include <stdio.h>

int main() {

    /*

    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a > b ? a : b);

    */

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", ((a<b)?a:b)>c ? c : ((a>b)?b:a));

    return 0;

}
