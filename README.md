# correct_cpp_is_odd

[Correct C++](https://github.com/richelbilderbeek/correct_cpp) chapter 'is odd'.

## Exercise

Write a command-line interface (CLI) program that determines if its argument is an odd number.

Call to `hello_cli`|Result
---|---
`./is_odd`|`Error: no argument` (with newline), exit status must be 1
`./is_odd 1`|`true` (with newline), exit status must be 0
`./is_odd 2`|`false` (with newline), exit status must be 0
`./is_odd nonsense`|`Error: argument must be a number` (with newline), exit status must be 1
`./is_odd 1 2`|`Error: must supply one argument` (with newline), exit status must be 1

This is the code you start with:

```c++
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
  // Conversion
  const std::vector<std::string> args(argv, argv + argc);

  //Your code here
}
```

## Advice

 * Avoid `std::endl` [1]

## External links

 * [Richel Bilderbeek's page about StrToInt](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStrToInt.md)

## References

 * [1] [C++ Core Guidelines: SL.io.50: Avoid endl](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rio-endl)
