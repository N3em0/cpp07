#include "Iter.hpp"
#include <iostream>

int main()
{
  int arr1[] = {1, 2, 3};
  int const arr2[] = {1, 2, 3};
  std::string const arr3[] = {"hi", "const", "people"};
  std::string arr4[] = {"hi", "non-const", "people"};
  std::cout << "===========" << std::endl;
  iter(arr1, 3, add_arr<int>);
  std::cout << "-----------" << std::endl;
  iter(arr4, 3, add_arr<std::string>);
  // std::cout << "-----------" << std::endl;
  // iter(arr2, 3, add_arr<int>); --> Can't compile. non const func on const
  // type
  std::cout << "===========" << std::endl;
  // iter(arr1, 3, print_arr<int>); --> Can compile, const func on non const
  // type std::cout << "-----------" << std::endl;
  iter(arr2, 3, print_arr<int>);
  std::cout << "-----------" << std::endl;
  iter(arr3, 3, print_arr<std::string>);
  std::cout << "===========" << std::endl;
}
