bool is_odd(const int x) noexcept
{
  return x % 2 == 1;
}

int main(int argc, char* argv[])
{
  if (argc == 1)
  {
    assert( is_odd(1));
    assert(!is_odd(2));
    return 0;
  }
  if (argc > 2)
  {
    std::cout << "Please supply no or one argument\n";
    return 1;
  }
  assert(argc == 2);



}
