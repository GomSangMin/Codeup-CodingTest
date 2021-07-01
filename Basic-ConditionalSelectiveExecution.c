/*

Basic-ConditionalSelectiveExecution

CodeUp - C1065 ~ C1070

*/

#include <stdio.h>

int main() {

    /*

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a%2 == 0) printf("%d\n",a);
    if(b%2 == 0) printf("%d\n",b);
    if(c%2 == 0) printf("%d",c);

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a%2==0) printf("even\n");
    else printf("odd\n");
    if(b%2==0) printf("even\n");
    else printf("odd\n");
    if(c%2==0) printf("even\n");
    else printf("odd\n");

    int a;
    scanf("%d", &a);
    if(a>0) printf("plus\n");
    else printf("minus\n");
    if(a%2==0) printf("even");
    else printf("odd");

    int a;
    scanf("%d", &a);
    if(a>=90) printf("A");
    else if(90>a&&a>=70) printf("B");
    else if(70>a&&a>=40) printf("C");
    else if(a<40) printf("D");

    char a;
    scanf("%c", &a);
    switch(a)
    {
        case 'A': printf("best!!!"); break;
        case 'B': printf("good!!"); break;
        case 'C': printf("run!"); break;
        case 'D': printf("slowly~"); break;
        default: printf("what?");
    }

    */

    int month;
    scanf("%d", &month);
    switch(month)
    {
        case 12:
        case 1:
        case 2: printf("winter"); break;

        case 3:
        case 4:
        case 5: printf("spring"); break;

        case 6:
        case 7:
        case 8: printf("summer"); break;

        case 9:
        case 10:
        case 11: printf("fall"); break;
    }

    return 0;

}
