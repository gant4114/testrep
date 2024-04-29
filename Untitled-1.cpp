#include <iostream>

int main() {
  int число;
  std::cout << "Введите число: ";
  std::cin >> число;

  if (число % 2 == 0) {
    std::cout << "Число четное" << std::endl;
  } else {
    std::cout << "Число нечетное" << std::endl;
  }

  return 0;
}
