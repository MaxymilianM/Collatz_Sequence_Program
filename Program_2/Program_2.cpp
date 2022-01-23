#include "Program_2.h"

CollatzSequenceHandler2::CollatzSequenceHandler2(unsigned long long input) : ICollatzSequenceHandler(input) {}

/*
As an abstract machine that computes in base two.
Repeated applications of the Collatz function can be represented as an abstract machine that handles strings of bits.
The machine will perform the following three steps on any odd number until only one 1 remains:

1) Append 1 to the (right) end of the number in binary (giving 2n + 1);
2) Add this to the original number by binary addition (giving 2n + 1 + n = 3n + 1);
3) Remove all trailing 0s (that is, repeatedly divide by 2 until the result is odd).
*/
unsigned long long CollatzSequenceHandler2::generate_sequence()
{
    for (auto tmp = input_; input_ > 1; tmp = input_)
    {
        input_ = (input_ << 1) + 1; // Append 1 to the (right) end of the number in binary (giving 2n + 1);
        input_ += tmp;              // Add this to the original number by binary addition (giving 2n + 1 + n = 3n + 1);
        while (input_ % 2 == 0)
            input_ >>= 1;           // Remove all trailing 0s (that is, repeatedly divide by 2 until the result is odd).
    }

    return input_;
}
