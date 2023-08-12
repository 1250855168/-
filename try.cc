#include <iostream>
#include <ostream>

// class A {
// private:
//   int &a;
// };

void abc() {
  int *p = nullptr;
  int addressValue = 0x1234;
  std::cout << addressValue << std::endl;
  p = reinterpret_cast<int *>(addressValue);
  std::cout << p << std::endl;

  if (p == nullptr) {
    throw -1;
  }
}

class A {
private:
  char a;
  double b;
  char c;

public:
  virtual void xxx() {}
};

class B : public A {
private:
  char d;
};

void x(void *a) {
  int *ac = static_cast<int *>(a);

  std::cout << " " << *ac << std::endl;
}

int main() {

  int a = 0;

  int *c = nullptr;

  x(static_cast<void *>(&a));

  const int *g = &a;

  int *c1 = const_cast<int *>(g);

  *c1 = 100;
  std::cout <<& a << " " << c1 << std::endl;

  double b = 1;

  std::cout << sizeof(B) << std::endl;

  try {
    abc();
  } catch (int e) {
    std::cout << "error " << e << std::endl;
  }

  try {
    if (b > -0.0000001 && b < 0.0000001) {
      throw -1;
    }
  } catch (int e) {
    std::cout << "error " << e << std::endl;
  }

  std::cout << "successfully !" << std::endl;

  return 0;
}