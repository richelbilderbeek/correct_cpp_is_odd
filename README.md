# correct_cpp_is_odd

[Correct C++](https://github.com/richelbilderbeek/correct_cpp) chapter 'is odd'.

## Goals

 * Respond to exceptions

## Prerequisites

 * Understand [how this course works](https://github.com/richelbilderbeek/correct_cpp/blob/master/how_this_course_works.md)
 * Have written [a correct CLI program](https://github.com/richelbilderbeek/correct_cpp_hello_cli)

## Exercise

Write a command-line interface (CLI) program that determines if its argument is an odd number.

If there are more arguments supplied, ignore the ones beyond the first

Call to `hello_cli`|Output|Exit status
---|---|---
`./is_odd`|Any|1
`./is_odd 1`|`true` (with newline)|0
`./is_odd 2`|`false` (with newline)|0
`./is_odd nonsense`|Any|1
`./is_odd 12345678901234567890`|Any|1
`./is_odd 2 1`|`false` (with newline)|0

This is the code you start with:

```c++
main(argc, argv)
{
  //Your code here
}
```

 * Use the form of [main](https://github.com/richelbilderbeek/cpp/blob/master/content/CppMain.md) that gives access to command-line arguments
 * Use [std::stoi](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdStoi.md) to convert a [std::string](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdString.md) to an [int](https://github.com/richelbilderbeek/cpp/blob/master/content/CppInt.md)
 * [std::stoi](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdStoi.md) properly [2] [throws](https://github.com/richelbilderbeek/cpp/blob/master/content/CppThrow.md) an [exception](https://github.com/richelbilderbeek/cpp/blob/master/content/CppException.md) if the [std::string](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdString.md) cannot be converted to an [integer](https://github.com/richelbilderbeek/cpp/blob/master/content/CppInt.md):
    * when the std::string is a word, like `nonsense`
    * when the std::string is a number too big to be an integer, like `12345678901234567890`
 * Use [try](https://github.com/richelbilderbeek/cpp/blob/master/content/CppTry.md) and [catch](https://github.com/richelbilderbeek/cpp/blob/master/content/CppCatch.md) to respond to the [exception](https://github.com/richelbilderbeek/cpp/blob/master/content/CppException.md) [thrown](https://github.com/richelbilderbeek/cpp/blob/master/content/CppThrow.md) by [std::stoi](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdStoi.md)
 * Don't cut corners by using ellipsis (`...`)
 * Avoid [std::endl](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdEndl.md) [1]
 * [catch](https://github.com/richelbilderbeek/cpp/blob/master/content/CppCatch.md) the [exception](https://github.com/richelbilderbeek/cpp/blob/master/content/CppException.md) by [reference](https://github.com/richelbilderbeek/cpp/blob/master/content/CppReference.md) [3]
 * Use [const](https://github.com/richelbilderbeek/cpp/blob/master/content/CppConst.md) to define objects with values that do not change after construction [4]

## References

 * [1] [C++ Core Guidelines: SL.io.50: Avoid endl](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rio-endl)
 * [2] [C++ Core Guidelines: E.2: Throw an exception to signal that a function can't perform its assigned task](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#e2-throw-an-exception-to-signal-that-a-function-cant-perform-its-assigned-task)
 * [3] [C++ Core Guidelines: E.15: Catch exceptions from a hierarchy by reference](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Re_catch)
 * [4] [C++ Core Guidelines: Con.4: Use const to define objects with values that do not change after construction](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con4-use-const-to-define-objects-with-values-that-do-not-change-after-construction)
