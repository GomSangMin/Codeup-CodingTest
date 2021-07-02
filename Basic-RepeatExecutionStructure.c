/*

Basic-Repeat Execution Structure

Codeup - C1071 ~ C1077

*/

#include <stdio.h>

int main() {

    /*

    int num;
work:
    scanf("%d", &num);
    if(num!=0) { printf("%d\n", num); goto work; }

    int num, line, count = 0;
    scanf("%d", &line);
replay:
    scanf("%d", &num);
    if(line-- != 0) { 
        printf("%d\n", num); 
        goto replay; 
    } 

    int num;
    while (1) {
        scanf("%d", &num);
        if(num!=0) { printf("%d\n", num); } 
        else break;
    }

    int num;
    scanf("%d", &num);
    while (1) {
        printf("%d\n", num);
        num--;
        if(num==0) { break; }
    }

    int num;
    scanf("%d", &num);
    while (num!=0) {
        num--;
        printf("%d\n", num);
    }

    char alphabet;
    scanf("%c", &alphabet);
    int num = 97;
    do {
        printf("%c ", num);
        num+=1;
    } while(num < alphabet+1);

    */

    int num;
    scanf("%d", &num);
    for(int i = 0; i<=num; i++) {
        printf("%d\n", i);
    }

    return 0;

}
