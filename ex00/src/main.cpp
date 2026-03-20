#include "whatever.hpp"
#include <iostream>

/* Subject main */
// int main(void)
// {
//   int a = 2;
//   int b = 3;
//   ::swap(a, b);
//   std::cout << "a = " << a << ", b = " << b << std::endl;
//   std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
//   std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
//   std::string c = "chaine1";
//   std::string d = "chaine2";
//   ::swap(c, d);
//   std::cout << "c = " << c << ", d = " << d << std::endl;
//   std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
//   std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
//   return 0;
// }

/* Some more tests */
int main()
{
  int a = 1;
  int b = 10;
  int c = 1;

  std::cout << "a: " << &a << std::endl;
  std::cout << "b: " << &b << std::endl;
  std::cout << "c: " << &c << std::endl;

  std ::cout << "min(a, b): " << min(a, b) << std::endl;
  std ::cout << "min(a, c): " << min(a, c) << " | " << &(min(a, c))
             << std::endl;

  std ::cout << "max(a, b): " << max(a, b) << std::endl;
  std ::cout << "max(a, c): " << max(a, c) << " | " << &(max(a, c))
             << std::endl;

  std::cout << "a before swap: " << a << std::endl;
  std::cout << "b before swap: " << b << std::endl;
  swap(a, b);
  std::cout << "a after swap: " << a << std::endl;
  std::cout << "b after swap: " << b << std::endl;

  // float f = 2.2f;
  // std ::cout << "max(a, f): " << max(a, f) << std::endl;
  // -> doesn't compile (no matching type)
}
