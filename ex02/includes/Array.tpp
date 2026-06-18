#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"
#include <cstddef>
#include <stdexcept>

template <typename T> Array<T>::Array() : n_(0), elements_(new T[0]()) {}

template <typename T>
Array<T>::Array(const Array<T> &src)
    : n_(src.n_), elements_(src.elements_ ? new T[n_]() : NULL)
{
  if (this->elements_)
  {
    for (size_t i = 0; i < this->n_; i++)
      this->elements_[i] = src.elements_[i];
  }
}

template <typename T>
Array<T>::Array(unsigned int n) : n_(n), elements_(new T[n_]())
{
}

template <typename T> Array<T>::~Array() { delete[] elements_; }

template <typename T> Array<T> &Array<T>::operator=(const Array<T> &rhs)
{
  if (this != &rhs)
  {
    delete[] this->elements_;
    this->elements_ = new T[rhs.n_];
    this->n_ = rhs.n_;
    for (size_t i = 0; i < rhs.n_; i++)
    {
      if (rhs.elements_[i])
        this->elements_[i] = rhs.elements_[i];
    }
  }
  return (*this);
}

template <typename T> T &Array<T>::operator[](size_t &i)
{
  if (i >= this->n_)
    throw std::out_of_range(": Index [i] is out of bounds");
  return (this->elements_[i]);
}

template <typename T> const T &Array<T>::operator[](size_t &i) const
{
  if (i >= this->n_)
    throw std::out_of_range(": Index [i] is out of bounds");
  return (this->elements_[i]);
}

template <typename T> unsigned int Array<T>::size() const { return (this->n_); }

#endif
