template <typename T> class Array
{
public:
  Array();
  Array(const Array &src);
  Array(unsigned int n);
  ~Array();

  Array &operator=(const Array &rhs);

  T *elements;
};
