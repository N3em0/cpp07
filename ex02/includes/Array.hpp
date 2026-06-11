#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>

template <typename T> class Array
{
public:
  Array();
  Array(const Array &src);
  Array(unsigned int n);
  ~Array();

  Array &operator=(const Array &rhs);
  T &operator[](size_t &i);
  const T &operator[](size_t &i) const;

  unsigned int size() const;

private:
  unsigned int n_;
  T *elements_;
};

#include "Array.tpp"

#endif
