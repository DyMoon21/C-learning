#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number between 1 and 5: ");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
            printf("You entered One.\n");
            break;
        case 2:
            printf("You entered Two.\n");
            break;
        case 3:
            printf("You entered Three.\n");
            break;
        case 4:
            printf("You entered Four.\n");
            break;
        case 5:
            printf("You entered Five.\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 5.\n");
    }
    return 0;
}