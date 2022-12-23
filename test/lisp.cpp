
#include <string>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <vector>
#include <compare>

namespace ntt::lisp
{

  template <typename T>
  class Value
  {
  public:
    Value(T v)
      : value(v)
    {}

    auto operator = (T v) -> Value<T>
    {
      this->value = v;
      return (*this);
    }

    auto operator * () -> T&
    {
      return this->value;
    }

    virtual ~Value()
    {}
  private:
    T value;
  };

  class Env
  {
  public:
    enum class NativeType
    {
      INT8,
      INT16,
      INT32,
      INT64,
      FLOAT32,
      FLOAT64,
      CHAR8
    };

    Env()
      : scope(0)
    {
      
    }

    virtual ~Env()
    {

    }
  private:
    std::uint64_t scope;
  };
}

int main()
{

}