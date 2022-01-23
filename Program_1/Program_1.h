#pragma once
#include "IProgram.h"

class CollatzSequenceHandler : public ICollatzSequenceHandler{
public:
    CollatzSequenceHandler(unsigned long long input);

    unsigned long long generate_sequence() override;
};
