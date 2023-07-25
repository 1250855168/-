#include <iostream>
#include <iterator>

using namespace std;

void test(int arr[], int len) {

  for (int i = 0; i < len - 1; i++) {
    for (int j = 0; j < len - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {

  int arr[10] = {4, 5, 4, 1, 3, 1, 1, 5, 4, 4};

  test(arr, 10);

  for (int i = 0; i < 10; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}