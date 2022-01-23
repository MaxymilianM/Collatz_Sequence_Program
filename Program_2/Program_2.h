#pragma once
#include "IProgram.h"

class CollatzSequenceHandler2 : public ICollatzSequenceHandler{
public:
    CollatzSequenceHandler2(unsigned long long input);

    unsigned long long generate_sequence() override;
};
