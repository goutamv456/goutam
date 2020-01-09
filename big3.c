#include <stdio.h>

void big3(){
    
    int a, b, c;
    printf("Enter a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b && a > c) {
        printf("%d is Greater",a);
    }
    else if (b > a && b > c) {
        printf("%d is Greater",b);
    }
    else if (c > a && c > b) {
        printf("%d is Greater",c);
    }
    else {
        printf("all are equal or any two values are equal");
    } 
    //return 0;
}
