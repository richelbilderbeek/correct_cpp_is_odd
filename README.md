# correct_cpp_is_odd

[Correct C++](https://github.com/richelbilderbeek/correct_cpp) chapter 'is odd'.

## Goals

 * Respond to exceptions

## Exercise

Write a command-line interface (CLI) program that determines if its argument is an odd number.

If there are more arguments supplied, ignore the ones beyond the first

Call to `hello_cli`|Output|Exit status
---|---|---
`./is_odd`|Any|1
`./is_odd 1`|`true` (with newline)|0
`./is_odd 2`|`false` (with newline)|0
`./is_odd nonsense`|Any|1
`./is_odd 2 1`|`false` (with newline)|0

This is the code you start with:

```c++
main(argc, argv)
{
  //Your code here
}
```

## Tips

 * [main](https://github.com/richelbilderbeek/cpp/blob/master/content/CppMain.md) has two forms
 * Use [std::stoi](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdStoi.md) to convert a [std::string](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdString.md) to an [int](https://github.com/richelbilderbeek/cpp/blob/master/content/CppInt.md)
 * [std::stoi](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdStoi.md) properly [2] throws an exception if the `std::string` cannot be converted to integer
 * Use [try](https://github.com/richelbilderbeek/cpp/blob/master/content/CppTry.md) and [catch](https://github.com/richelbilderbeek/cpp/blob/master/content/CppCatch.md) to respond to the [exception](https://github.com/richelbilderbeek/cpp/blob/master/content/CppException.md) thrown by `std::stoi`

## Advice

 * Avoid [std::endl](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdEndl.md) [1]
 * Catch the exception by reference [3]

## References

 * [1] [C++ Core Guidelines: SL.io.50: Avoid endl](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rio-endl)
 * [2] [C++ Core Guidelines: E.2: Throw an exception to signal that a function can't perform its assigned task](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#e2-throw-an-exception-to-signal-that-a-function-cant-perform-its-assigned-task)
 * [3] [C++ Core Guidelines: E.15: Catch exceptions from a hierarchy by reference](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Re_catch)
