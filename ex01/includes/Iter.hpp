#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F> void iter(T *a, size_t const length, F f)
{
  for (size_t i = 0; i < length; i++)
  {
    f(a[i]);
  }
}

template <typename T> void print_arr(const T &v)
{
  std::cout << "[" << v << "]" << std::endl;
}

template <typename T> void add_arr(T &v)
{
  v += 48;
  std::cout << "[" << v << "]" << std::endl;
}
#endif
