#include<stdio.h>
int main(){

    int x,y;

    printf("Input two numbers to swap : ");
    scanf("%d %d", &x, &y);
    
    x = x+y;
    y = x-y;
    x = x-y;
    
    printf("Swap is: \n\t a=%d\n\t b=%d\n", x, y);

    return 0;
}
