/*

Basic-Comprehensive

CodeUp - C1078 ~ C1092

*/

#include <stdio.h>

int main() {

    /*

    int num, sum = 0;
    scanf("%d", &num);
    for(int i = 0; i<= num; i++) {
        if(i%2==0) { sum+=i; }
    }
    printf("%d", sum);

    char code;
    while (1) {
        scanf("%c", &code);
        printf("%c", code);
        if(code=='q') { break;}
    }

    int num = 0, sum = 0, i = 0;
    scanf("%d", &num);
    while(1) {
        i++;
        sum += i;
        if(num<=sum) { printf("%d", i); break; }
    }

    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=m; j++) {
            printf("%d %d\n",i, j);
        }

    int num;
    scanf("%X", &num);
    for(int i = 1; i<16; i++){
        printf("%X*%X=%X\n", num, i, num*i);
    }

    int num;
    scanf("%d", &num);
    for(int i = 1; i<=num; i++){
        if(i%3==0) { printf("X "); }
        else { printf("%d ", i); }
    }

    int r, g, b, c = 0;
    scanf("%d %d %d", &r, &g, &b);
    for(int i = 0; i<r; i++){
        for(int j = 0; j<g; j++){
            for(int k = 0; k<b; k++){
                printf("%d %d %d\n", i, j, k);
                c++;
            }
        }
    }
    printf("%d", c);

    long long int h, b, c, s;
    long double storage;
    scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
    storage = h * b * c * s;
    storage = storage / (8 * 1024 * 1024);
    printf("%.1Lf MB", storage);

    double w, h, b, storage;
    scanf("%lf %lf %lf", &w, &h, &b);
    storage = (w * h * b) / (8 * 1024 * 1024);
    printf("%.2lf MB", storage);

    int num, sum = 0, i = 1;
    scanf("%d", &num);
    while(num>sum){
        sum += i;
        i++;
    }
    printf("%d", sum);

    int num;
    scanf("%d", &num);
    for(int i = 0; i<=num; i++) {
        if(i%3!=0){
            printf("%d ", i);
        }
    }    

    int a, d, n, count = 0;
    scanf("%d %d %d", &a, &d, &n);
    while(1){
        count++;
        if(count==n) { break; }
        a += d;
    }
    printf("%d", a);

    long long int a, d, n, count = 0;
    scanf("%lld %lld %lld", &a, &d, &n);
    while(1){
        count++;
        if(count==n) { break; }
        a *= d;
    }
    printf("%lld", a);

    long long int a, m, d, n, count = 0;
    scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
    while(1){
        count++;
        if(count==n) { break; }
        a = ((a * m) + d);
    }
    printf("%lld", a);

    */

    int a, b, c, num = 1;
    scanf("%d %d %d", &a, &b, &c);
    while((num%a!=0)||(num%b!=0)||(num%c!=0)){
        num++;
    }
    printf("%d", num);

    return 0;

}