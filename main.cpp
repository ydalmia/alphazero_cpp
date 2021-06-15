#include <iostream>
#include "utils/exception.h"

int main() {
    std::cout << "in main" << std::endl;
    throw lczero::Exception("hi");
    return 0;
}