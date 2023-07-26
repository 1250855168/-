#include <algorithm>
#include <cstdlib>
#include <iostream>

using namespace std;

void merge(int arr[], int temp[], int left, int mid, int right) {

  int tempLeft = left;
  int tempRight = mid + 1;
  int pos = left;

  // 两两比较 选中最小的原数进行 填入临时数字
  while (tempLeft <= mid && tempRight <= right) {
    if (arr[tempLeft] < arr[tempRight]) {
      temp[pos++] = arr[tempLeft++];
    } else {
      temp[pos++] = arr[tempRight++];
    }
  }

  // 添加右边剩余的原数进入临时数组
  while (tempLeft <= mid) {
    temp[pos++] = arr[tempLeft++];
  }

  // 添加左边的原数进入临时数组
  while (tempRight <= right) {
    temp[pos++] = arr[tempRight++];
  }

  // 把临时数组的原数填入最终原数中
  while (left <= right) {

    arr[left] = temp[left];

    left++;
  }
}

void msort(int arr[], int temp[], int left, int right) {
  // 如果只有一个原数跳出递归
  if(left < right) {

    int mid = (left + right) / 2;

    // 进行右分区
    msort(arr, temp, left, mid);
    // 进行左分区
    msort(arr, temp, mid + 1, right);
    // 进行合并
    merge(arr, temp, left, mid, right);
  }
}

void merge_sort(int arr[], int n) {

  int *temp = (int *)malloc(sizeof(int) * n); // 开辟临时数组空间

  if (temp) {
    msort(arr, temp, 0, n - 1);

    free(temp);
  } else {
    cout << "error: malloc...";
  }
}


int main() {

  int arr[] = {1, 5, 8, 9, 4, 7, 2, 6, 7, 1, 55, 88, 33, 44};

  merge_sort(arr, 14);

  for (auto x : arr) {
    cout << x << endl;
  }

  return 0;
}