/*

Basic-Academic Operations

CodeUp - C1038 ~ C1046

*/
#include <stdio.h>

int main() {

    /*

    long long int a,b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", a + b);

    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", a + b);

    long long int n;
    scanf("%lldd", &n);
    printf("%lld", -n);

    char c;
    scanf("%c", &c);
    printf("%c", c+1);

    long long int a,b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", a/b);

    unsigned int a, b;
    scanf("%u %u", &a, &b);
    printf("%u", a%b);

    long long int n;
    scanf("%lld", &n);
    printf("%lld", ++n);

    unsigned int a, b;
    scanf("%u %u", &a, &b);
    printf("%d\n%d\n%d\n%d\n%d\n%.2f", a+b, a-b, a*b, a/b, a%b, (float)a/(float)b);

    */
   
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n%.1f", a+b+c, (float)(a+b+c)/3);
   
    return 0;
}