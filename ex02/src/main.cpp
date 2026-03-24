#include "Array.hpp"
#include <iostream>

int main()
{
  Array<int> z;
  Array<int> a(12);
  std::cout << a[4] << std::endl;
  Array<char> b(12);
  for (size_t i = 0; i < 12; i++)
    b[i] = 48 + i;
  for (size_t i = 0; i < 12; i++)
    std::cout << "b[i] av modification : " << b[i] << std::endl;

  Array<char> c(b);
  for (size_t i = 0; i < 12; i++)
    std::cout << "c[i] av modification : " << c[i] << std::endl;
  for (size_t i = 0; i < 12; i++)
    c[i] = 'Z' - i;
  for (size_t i = 0; i < 12; i++)
    std::cout << "c[i] ap modification : " << c[i] << std::endl;
  try
  {
    for (size_t i = 0; i < 13; i++)
      std::cout << "b[i] ap modification : " << b[i] << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
}
