// Huy Nguyen
// Hnguyen05@csu.fullerton.edu
// @Hnguyen05
// Partners: @CodyNguyen

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc != 4) {
    std::cout << "error: you must supply three arguments";
    return 1;
  }

  std::string protein{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment{arguments.at(3)};

  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment;

  return 0;
}
