#include <iostream>
#include <json/json.h>

int main() {
  std::cout << "Hello, world!" << std::endl;

  Json::Value root;
  root["hello"] = "world";
  std::cout << root << std::endl;

  return 0;
}