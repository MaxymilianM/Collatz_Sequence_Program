#include "Program_1.h"
#include <iostream>
#include <sstream>

bool check_input(int argc, char** argv, unsigned long long& value)
{
    if (argc < 2)
        return false;

    std::istringstream ss(argv[1]);
    if (!(ss >> value)) {
        std::cerr << "Invalid number: " << argv[1] << '\n';
        return false;
    }
    else if (!ss.eof()) {
        std::cerr << "Trailing characters after number: " << argv[1] << '\n';
        return false;
    }
    return true;
}

int main(int argc, char** argv)
{
    unsigned long long value;
    if (!check_input(argc, argv, value))
        return EXIT_FAILURE;

    CollatzSequenceHandler handler(value);

    std::cout << "Result: " << handler.generate_sequence() << std::endl;
    return EXIT_SUCCESS;
}
