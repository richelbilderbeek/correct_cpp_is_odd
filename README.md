# correct_cpp_is_odd

Branch|[Travis CI](https://travis-ci.org)|[Codecov](https://www.codecov.io)
---|---|---
master|[![Build Status](https://travis-ci.org/richelbilderbeek/correct_cpp_is_odd.svg?branch=master)](https://travis-ci.org/richelbilderbeek/correct_cpp_is_odd)|[![codecov.io](https://codecov.io/github/richelbilderbeek/correct_cpp_is_odd/coverage.svg?branch=master)](https://codecov.io/github/richelbilderbeek/correct_cpp_is_odd/branch/master)

[Correct C++](https://github.com/richelbilderbeek/correct_cpp) chapter 'is odd'.

## Goals

 * Respond to exceptions

## Prerequisites

 * Understand [how this course works](https://github.com/richelbilderbeek/correct_cpp/blob/master/doc/how_this_course_works.md)
 * Have written [a correct 'Show CLI arguments' program](https://github.com/richelbilderbeek/correct_cpp_show_args)

## Exercise

Write a command-line interface (CLI) program that determines if its argument is an odd number.

If there are more arguments supplied, ignore the ones beyond the first

Call to `is_odd`|Output|Exit status
---|---|---
`./is_odd`|Any|1
`./is_odd 1`|`true` (with newline)|0
`./is_odd 2`|`false` (with newline)|0
`./is_odd nonsense`|Any|1
`./is_odd 12345678901234567890`|Any|1
`./is_odd 2 1`|`false` (with newline)|0

With 'Any' output, you can choose to:

 * inform the user, for example: 'Error: must supply one argument'
 * give no ouput at all: the exit status of 1 indicates that the program ended with an error

This is the code you start with:

```c++
main(argc, argv)
{
  //Your code here
}
```

 * Use [std::stoi](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdStoi.md) to convert a [std::string](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdString.md) to an [int](https://github.com/richelbilderbeek/cpp/blob/master/content/CppInt.md)
 * [std::stoi](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdStoi.md) properly [2] [throws](https://github.com/richelbilderbeek/cpp/blob/master/content/CppThrow.md) an [exception](https://github.com/richelbilderbeek/cpp/blob/master/content/CppException.md) if the [std::string](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdString.md) cannot be converted to an [integer](https://github.com/richelbilderbeek/cpp/blob/master/content/CppInt.md):
    * when the std::string is a word, like `nonsense`
    * when the std::string is a number too big to be an integer, like `12345678901234567890`
 * Use [try](https://github.com/richelbilderbeek/cpp/blob/master/content/CppTry.md) and [catch](https://github.com/richelbilderbeek/cpp/blob/master/content/CppCatch.md) to respond to the [exception](https://github.com/richelbilderbeek/cpp/blob/master/content/CppException.md) [thrown](https://github.com/richelbilderbeek/cpp/blob/master/content/CppThrow.md) by [std::stoi](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdStoi.md)
 * Avoid [std::endl](https://github.com/richelbilderbeek/cpp/blob/master/content/CppStdEndl.md) [1]
 * [catch](https://github.com/richelbilderbeek/cpp/blob/master/content/CppCatch.md) the [exception](https://github.com/richelbilderbeek/cpp/blob/master/content/CppException.md) by [reference](https://github.com/richelbilderbeek/cpp/blob/master/content/CppReference.md) [3]
 * You can have multiple [catch](https://github.com/richelbilderbeek/cpp/blob/master/content/CppCatch.md) clauses per [try](https://github.com/richelbilderbeek/cpp/blob/master/content/CppTry.md)
 * Use [const](https://github.com/richelbilderbeek/cpp/blob/master/content/CppConst.md) to define objects with values that do not change after construction [4]

## External links

 * [Download the Qt Creator file `main.pro`](https://raw.githubusercontent.com/richelbilderbeek/correct_cpp/master/shared/main.pro)

## References

 * [1] [C++ Core Guidelines: SL.io.50: Avoid endl](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rio-endl)
 * [2] [C++ Core Guidelines: E.2: Throw an exception to signal that a function can't perform its assigned task](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#e2-throw-an-exception-to-signal-that-a-function-cant-perform-its-assigned-task)
 * [3] [C++ Core Guidelines: E.15: Catch exceptions from a hierarchy by reference](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Re_catch)
 * [4] [C++ Core Guidelines: Con.4: Use const to define objects with values that do not change after construction](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con4-use-const-to-define-objects-with-values-that-do-not-change-after-construction)
