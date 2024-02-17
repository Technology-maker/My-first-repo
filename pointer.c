void pointer(int *p)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", p + i);
    }
}
void display(int *p)
{
    int i;
    for (i = 0; i <= 9; i++)
        printf("value is %d\n", *(p + i));
}

#include <stdio.h>

int main()
{
    int a[10];
    pointer(a);
    display(a);
}