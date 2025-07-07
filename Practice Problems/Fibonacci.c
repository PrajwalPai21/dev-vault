#include <stdio.h>

int main()
{
    int n;
    printf("Enter the total amount of number for fibonacci series ");
    scanf("%d", &n);
    int firstNum = 0, secondNum = 1, thirdNum = 0;

    if (n <= 0)
        printf("Enter a Valid Number");
    else if (n == 1)
        printf("%d", firstNum);
    else if (n == 2)
        printf("%d %d", firstNum, secondNum);
    else
    {
        printf("%d\t%d\t", firstNum, secondNum);
        for (int i = 2; i < n; i++)
        {
            thirdNum = firstNum + secondNum;
            firstNum = secondNum;
            secondNum = thirdNum;
            printf("%d\t", thirdNum);
        }
    }
    return 0;
}
