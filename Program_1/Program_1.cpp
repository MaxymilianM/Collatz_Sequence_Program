#include "Program_1.h"

CollatzSequenceHandler::CollatzSequenceHandler(unsigned long long input) : ICollatzSequenceHandler(input) {}

unsigned long long CollatzSequenceHandler::generate_sequence()
{
    for (;input_ > 1;)
    {
        if (input_ % 2 == 0)
            input_ = input_ / 2;
        else
            input_ = 3 * input_ + 1;
    }

    return input_;
}
