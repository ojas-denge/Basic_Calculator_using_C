#include <stdio.h>
int main() {
    char c;
    int n1, n2;
    printf("Select an Operation:\n");
    scanf("%c", &c);
    
    printf("Enter a number\n");
    scanf("%d", &n1);
    printf("Enter another number\n");
    scanf("%d", &n2);
    
    if (c=='+') {
        printf("Output:%d \n", n1+n2);
    }
    else if (c=='-') {
        printf("Output:%d \n", n1-n2);
    }
    else if (c=='*') {
        printf("Output:%d \n", n1*n2);
    }
    else if (c=='/') {
        printf("Output:%d \n", n1/n2);
    }
    else {
        printf("Enter valid output");
    }
    
    return 0;
}