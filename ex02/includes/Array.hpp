#pragma once

#include <iostream>

template <typename T> class Array
{
public:
  Array<T>()
      : n_(0), elements_(new T[0]()){
                   // std::cout << "Default constructor" << std::endl;
               };
  Array<T>(const Array<T> &src)
      : n_(src.n_), elements_(src.elements_ ? new T[n_]() : NULL)
  {
    if (this->elements_)
    {
      for (size_t i = 0; i < this->n_; i++)
        this->elements_[i] = src.elements_[i];
    }
    // std::cout << "copy constructor" << std::endl;
  };
  Array<T>(unsigned int n)
      : n_(n), elements_(new T[n_]()){
                   // std::cout << "int n constructor" << std::endl;
               };
  ~Array<T>() { delete[] elements_; };

  Array<T> &operator=(const Array<T> &rhs)
  {
    if (this != &rhs)
    {
      for (size_t i = 0; i < rhs.n_; i++)
      {
        if (rhs.elements_[i])
          this->elements_[i] = rhs.elements_[i];
        else
          this->elements_[i] = NULL;
      }
    }
    return (*this);
  };

  T &operator[](const size_t &i)
  {
    if (i > this->n_ - 1)
      throw std::exception();
    else
      return (this->elements_[i]);
  }

  const unsigned int &size() { return (this->n_); }

private:
  const unsigned int n_;
  T *elements_;
};
