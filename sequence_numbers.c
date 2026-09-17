#include <stdio.h>

int main() {
    int numbers;
    int ret;

    scanf("%d", &numbers);
    ret = numbers%10;
    while (1) {
        numbers = numbers/10;
        printf("%d", ret);
        ret = numbers%10;
        if (numbers == 0) {
            break;
        }
    }
    return 0;
}