#include <iostream>
#include <vector>
#include <string.h>

char *sumStr(const char *str1, const char *str2)
{

    int len1 = strlen(str1);

    int len2 = strlen(str2);

    char *str3 = (char *)malloc(len1 + len2 + 1);
}

void shellSort(std::vector<int> &v)
{

    printf("%d %c\n", '\0', '\0');

    int size = v.size();
    int gap = 0;
    int i;
    int j;

    for (gap = size / 2; gap > 0; gap /= 2)
    {
        for (i = gap; i < size; i++)
        {
            int temp = v[i];
            for (j = i; j >= gap && temp < v[j - gap]; j -= gap)
            {
                v[j] = v[j - gap];
            }
            v[j] = temp;
        }
    }
}

int main()
{

    std::vector<int> v{1, 5, 3, 7, 8, 4, 9};

    shellSort(v);

    for (auto it : v)
    {
        std::cout << it << " ";
    }

    std::cout << std::endl;
}