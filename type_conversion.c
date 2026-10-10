//数据类型转换

#include <stdio.h>
int main() {
    double a = 10.0;
    int b = 3;
    printf("%lf\n", a / b);//隐式类型转换

    int i = (int)3.14f;//强制类型转换
    printf("i = %d\n", i);
    return 0;
}
