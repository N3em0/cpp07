#include <iostream>

// function
template <typename T> T const &max(T const &x, T const &y)
{
  return (x >= y ? x : y);
}

// class

template <typename T> class List
{
public:
  List<T>(T const &content);
  List<T>(List const &list);
  ~List<T>(void);

private:
  T *_content;
  List<T> *_name;
};
