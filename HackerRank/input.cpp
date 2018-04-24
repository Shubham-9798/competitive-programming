#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long int b;
    char c;
    float d;
    double e;
    scanf("%d",&a);
    scanf("%ld",&b);
    scanf(" %c",&c);
    scanf("%f",&d);
    scanf("%lf",&e);

    printf("%d\n%ld\n%c\n%.3f\n%.9lf",a,b,c,d,e);
    return 0;
}
