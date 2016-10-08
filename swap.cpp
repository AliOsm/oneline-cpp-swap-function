#include <iostream>

void swap(int&, int&);

int main() {
  int a = 1, b = 2;
  
  std::cout << a << ' ' << b << '\n';
  swap(a, b);
  std::cout << a << ' ' << b << '\n';

  return 0;
}

void swap(int& a, int& b) {
  a = (b  = (a = a - b) + b) - a;
}
