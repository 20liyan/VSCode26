//对输入数字进行求和，不知道输入几个数字
#include <stdio.h>
int main()
{
    int sum = 0;
    int num;
    printf("请输入数字，输入0结束：");
    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        sum += num;
    }
    printf("输入数字的和为：%d\n", sum);
    return 0;
}
