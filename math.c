#include <stdio.h>
int main() 
{    
    int num1;
    int num2;
    int sum;
    printf("Enter num1 and num2: \n");
    scanf("%d %d", &num1, &num2); 
    sum = num1 + num2;     
    printf("%d + %d = %d", num1, num2, sum);
    return 0;
}
