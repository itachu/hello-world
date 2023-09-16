#include <iostream>
#include <string>

int main(int argc, char** argv) {
  std::string msg("hello-world, from hh");
  msg.append(std::to_string(827494));
  std::cout << msg << std::endl;
}
