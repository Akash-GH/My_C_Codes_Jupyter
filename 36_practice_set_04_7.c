#include <stdio.h>

int main()
{
    int num;
    int i;
    int factorial = 1;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i = 1; i <= num; i++){
        factorial *= i; 
    }
    printf("The factorial of given number %d is %d\n",num,factorial);
    return 0;
}