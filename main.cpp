#include <cassert>
#include <iostream>
#include <stdexcept>
#include <string>

int main(int argc, char** argv)
{
  if(argc == 1)
  {
    std::cout << "No correct input!\n";
    return 1;
  }
  try
  {
    assert(argc != 1);
    const int number = std::stoi(argv[1]);
    const int modulo = number % 2;
    if(modulo == 1)
    {
      std::cout << "true\n";
    }
    if(modulo == 0)
    {
      std::cout << "false\n";
    }
  }
  catch(const std::out_of_range&)
  {
    std::cout << "This number is not valid!\n";
    return 1;
  }
  catch(const std::invalid_argument&)
  {
    std::cout << "This is not a number!\n";
    return 1;
  }
}
