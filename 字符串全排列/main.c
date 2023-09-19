#pragma pack(8)
#include <stdio.h>
#include <stdlib.h>

struct S
{

    char ch : 1;

    int a : 3;

    int d;
};

union A
{
    int i;
    char x[2];
};

void swap(char *ch1, char *ch2)
{
    char temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}

void test(char *str, int a, int b)
{
    if (a == b)
    {
        printf("%s\n", str);
    }
    else
    {
        for (int i = a; i < b; i++)
        {
            swap(str + a, str + i);
            test(str, a + 1, b);
            swap(str + a, str + i);
        }
    }
}

int main()
{
    int n=5,a[n][n];
    // union A a1;
    // a1.x[0] = 10;
    // a1.x[1] = 1;

    // printf("%d \n", a1.i);

    char ch[] = "abc"; 

    test(ch,0,3);

    //     int a[] = {6,7,8,9,10};

    //     char *p = a;

    // *(p+2)+= 2;

    // printf("%d %d\n",*p,*(p+2));

    // char *a = malloc(1);

    //     printf("%d\n", sizeof(struct S));
}