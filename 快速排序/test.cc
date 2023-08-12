#include <iostream>

using namespace std;

void Qsort(int arry[], int l, int r) {

  if (l >= r) {
    return;
  }

  int mid = arry[r];  //直接交换最后一个值

  int i = l;
  int j = r - 1;  //为第二个元素

  while (true) {
    while (arry[i] < mid) { //++
      ++i;
    }
    while (j >= 0 && arry[j] > mid) {  // --
      --j;
    }
    if (i < j) {
      int temp = arry[i]; //进行交换
      arry[i] = arry[j];
      arry[j] = temp;
    } else {
      break;
    }
  }

  int temp = arry[r]; //进行交换
  arry[r] = arry[i];
  arry[i] = temp;

  Qsort(arry, l, i - 1);  // left i-1

  Qsort(arry, i + 1, r);
}

int main() {

  int a[8] = {1, 28, 2, 6, 47, 2, 4, 3};

  Qsort(a, 0, 7);

  for (auto i : a) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}