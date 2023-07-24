#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*
题目描述
给定两个有序数组，把两个数组合并为一个。
输入输出样例
输入是两个数组和它们分别的长度 m 和 n。其中第一个数组的长度被延长至 m + n，多出的
n 位被 0 填补。题目要求把第二个数组归并到第一个数组上，不需要开辟额外空间。
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: nums1 = [1,2,2,3,5,6]
*/

void test(vector<int> number1, vector<int> number2, int len)
{

    sort(number1.begin(), number1.end(), [](int a, int b)
         { return a < b; });

    sort(number2.begin(), number2.end(), [](int a, int b)
         { return a < b; });

    int j = number2.size() - 1;

    number1.resize(number1.size()+len);

    for (size_t i = number1.size() - 1; i > 0; i--)
    {
        if (number1[i] < number2[j])
        {
            number1[i] = number2[j];
            j--;
        }

        if (j == -1)
        {
            continue;
        }
    }

    for (auto i : number1)
    {
        cout << i << endl;
    }
}

int main()
{

    vector<int> number1 = {1, 2, 3, 4};

    vector<int> number2 = {4, 5, 6, 7};

    test(number1, number2, number2.size());

    return 0;
}