#include "Array.hpp"
#include <iostream>
#include <stdexcept>

int main()
{
  try
  {
    Array<int> z;
    Array<int> a(12);
    Array<char> b(12);
    for (size_t i = 0; i < 12; i++)
      b[i] = 48 + i;

    std::cout << "\n============================================\n\n";

    std::cout << "Array<int> z print default values and size\n----- "
              << std::endl;
    for (size_t i = 0; i < z.size(); i++)
      std::cout << "[" << z[i] << "] ";
    std::cout << std::endl;
    std::cout << "\n============================================\n\n";

    std::cout << "Array<int> a print default values with size parameter\n----- "
              << std::endl;
    for (size_t i = 0; i < a.size(); i++)
      std::cout << "[" << a[i] << "] ";
    std::cout << std::endl;
    std::cout << "\n============================================\n\n";

    std::cout << "Array<char> b print\n----- " << std::endl;
    for (size_t i = 0; i < b.size(); i++)
      std::cout << "[" << b[i] << "] ";
    std::cout << std::endl;
    std::cout << "\n============================================\n\n";

    Array<char> c(b);
    std::cout << "Array<char> c print copy from b\n----- " << std::endl;
    for (size_t i = 0; i < c.size(); i++)
      std::cout << "[" << c[i] << "] ";
    std::cout << std::endl;
    for (size_t i = 0; i < c.size(); i++)
      c[i] = 'Z' - i;
    std::cout << "Array<char> c print modified\n----- " << std::endl;
    for (size_t i = 0; i < c.size(); i++)
      std::cout << "[" << c[i] << "] ";
    std::cout << std::endl;
    std::cout << "\n============================================\n\n";

    std::cout << "Array<char> b print OOB\n----- " << std::endl;
    try
    {
      for (size_t i = 0; i < b.size() + 1; i++)
        std::cout << "[" << b[i] << "] ";
    }
    catch (const std::out_of_range &e)
    {

      std::cout << std::endl
                << "Out of range exception" << e.what() << std::endl;
    }
    std::cout << "\n============================================\n\n";
  }
  catch (const std::bad_alloc &ba)
  {
    std::cout << ba.what() << std::endl;
  }
}
