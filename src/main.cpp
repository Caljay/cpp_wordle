#include <iostream>
#include <string>

int main() {

    std::string lang = "C++";

    std::cout << "Hello and welcome to " << lang + " " << lang.capacity() << "!\n";

    for (int i = 1; i <= 5; i++) {


        std::cout << "i = " << i << std::endl;
    }

    return 0;
}
