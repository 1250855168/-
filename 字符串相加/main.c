#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX(len1, len2) ((len1) > (len2) ? (len1) : (len2))

char *sumStr(const char *str1, const char *str2)
{

    int len1 = strlen(str1) - 1;
    int len2 = strlen(str2) - 1;

    int lenMax = MAX(len1, len2);

    int c = 0; // 进位
    char *str3;

    if (len1 > len2)
    {
        str3 = malloc(len1 + 2);
        int len3 = len1 + 1;
        memset(str3, '0', len1 + 2);
        for (int i = len1; i >= 0; i--)
        {
            if (len2 < 0)
            {
                str3[len3--] = ((str1[len1] - '0' + c) % 10 + '0');
                c = ((str1[len1] - '0' + c) / 10);
            }
            else
            {
                str3[len3--] = ((str1[len1] - '0' + str2[len2] - '0' + c) % 10 + '0');
                c = ((str1[len1] - '0' + str2[len2] - '0' + c) / 10);
            }

            len1--;
            len2--;
        }
        str3[len3--] = c + '0';
    }
    else
    {
        str3 = malloc(len2 + 2);
        int len3 = len2 + 1;
        memset(str3, '0', len2 + 2);
        for (int i = len2; i >= 0; i--)
        {
            if (len1 < 0)
            {
                str3[len3--] = ((str1[len1] - '0' + c) % 10 + '0');
                c = ((str1[len1] - '0' + c) / 10);
            }
            else
            {
                str3[len3--] = ((str1[len1] - '0' + str2[len2] - '0' + c) % 10 + '0');
                c = ((str1[len1] - '0' + str2[len2] - '0' + c) / 10);
            }

            len1--;
            len2--;
        }
        str3[len3--] = c + '0';
    }
    for (int i = 0; i < lenMax + 2; i++)
    {
        if (i == 0 && str3[i] == '0')
            continue;
        putchar(str3[i]);
    }
    putchar('\n');
    return str3;
}

int test(char *s)
{

    int len = strlen(s);

    if (len == 0)
    {
        return 0;
    }

    int max = 1;
    int temp = 1;

    for (int i = 0; i < len - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            temp++;
        }
        else
        {
            if (temp > max)
            {
                max = temp;
            }
            temp = 0;
        }
    }

    if (temp > max)
    {
        max = temp;
    }

    return max;
}

struct data
{
    int a;
    unsigned short b;
};

int main()
{

    struct data d;

    d.b = 0x0b0A;

    char *p = (char *)&d;

    printf("%d %d \n", 4, (int)(*(p +5 )));

    // char str1[64];
    // char str2[64];

    // scanf("%s", str1);
    // scanf("%s", str2);

    // sumStr(str1, str2);

    // printf("%d\n", test("abbbbbb"));

    // char ch[] = "123";
    // char ch1[]="123";

    // if (ch==ch1)
    // {
    //     printf("xxxxx\n");
    // }

    return 0;
}
