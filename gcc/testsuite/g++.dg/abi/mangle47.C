// PR c++/47132
// { dg-do compile { target c++11 } }
// { dg-final { scan-assembler "_Z1fIiEDToRfp_Li1EET_" } }
// { dg-additional-options -fabi-compat-version=0 }

template <typename T>
auto f (T t) -> decltype(t |= 1);

int main()
{
  f(1);
}
