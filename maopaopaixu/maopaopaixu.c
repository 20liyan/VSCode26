#include <stdio.h>//冒泡排序，从小到大
int main()
{
    int a[10] = {65,45,32,13,67,98,75,42,18,23};
    int i,j,temp;
    for(i=0;i<10;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("排序后的数组为：\n");
     for(i=0;i<10;i++)
    {
        printf("%d\t ",a[i]);
        if(i==4)
        {
            printf("\n");
        }
    }
    return 0;
}