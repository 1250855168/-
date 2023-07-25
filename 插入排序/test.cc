#include <iostream>
#include <iterator>

using namespace std;

int main() {

  int arr[10] = {1, 28, 3, 4, 5, 9, 54, 44, 77, 11};


  for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++) {

    for (int j = i; j > 0; j--) {
      if (arr[j] < arr[j - 1]) {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
      } else {
        break;
      }
    }
  }

  for (auto i : arr) {
    cout << i << endl;
  }

  return 0;
}