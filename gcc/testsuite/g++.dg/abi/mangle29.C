// Test of std::basic_ostream<char, std::char_traits<char> > mangling

// { dg-do compile }
// { dg-options "-fno-inline -fabi-compat-version=0" }

namespace std {
  template<typename> struct char_traits;

  template<typename, typename> struct basic_ostream { basic_ostream(){} };
}

std::basic_ostream<char,std::char_traits<char> > s1;

// { dg-final { scan-assembler "\n_?_ZNSoC\[12\]Ev\[: \t\n\]" } }
