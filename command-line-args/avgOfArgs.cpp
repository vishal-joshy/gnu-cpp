#include <iostream>
#include <string>

int main(int argc, char **argv)
{
  if (argc == 1)
  {
    return 0;
    std::cout << "No command line args";
  }

  double sum = 0.0;
  for (int i = 1; i < argc; i++)
  {
    sum = sum + std::stoi(argv[i]);
  }
  double avg = sum / (argc - 1);
  std::cout << "sum:" << sum << "\n avg:" << avg;

  return 0;
}
