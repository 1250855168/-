#include <condition_variable>
#include <functional>
#include <future>
#include <iostream>
#include <mutex>
#include <ostream>
#include <thread>
class A {
private:
  int a;
  std::mutex m;
  std::condition_variable cv;

public:
  A(int _a) : a(_a) {}
  void print(int a) {
    std::cout << "Thread ID: " << std::this_thread::get_id() << std::endl;
    for (int i = 0; i < 5; ++i) {
      std::cout << a++ << " ";
    }
    std::cout << std::endl;
  }
  void foo(int time) {
    std::unique_lock<std::mutex> l(m);
    for (int i = 0; i < time; ++i) {
      a++;
    }
  }

  int get() { return a; }

  void increasing() {
    std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 10));
    std::cout << "xxxxxxx\n";
    std::cout << a << " xxx\n";
    std::unique_lock<std::mutex> l(m);
    a++;
    if (a >= 100) {
      std::cout << "杀猪了！！\n";
      // std::cout << a << std::endl;
      cv.notify_one();
    }
  }

  void Deling() {
    std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 10));
    std::unique_lock<std::mutex> l(m);
    cv.wait(l, [this] { return a >= 100; });
    std::cout << a << " xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
    if (a >= 10000) {
      a = 0;
      std::cout << "okxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
      std::cout << "okxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
      std::cout << "okxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
    }
  }
};

void producer(A *a) {
  while (1) {
    a->increasing();
  }
}

void asume(A *a) {
  while (1) {
    a->Deling();
  }
}

int main() {
  A a(0);

  std::thread l(producer, &a);
  std::thread l1(asume, &a);
  l.join();
  l1.join();

  std::cout << a.get() << std::endl;
}