#pragma once
#include <vector>

class ICollatzSequenceHandler{
protected:
    unsigned long long input_;
    ICollatzSequenceHandler(unsigned long long input) : input_(input) {}
    virtual unsigned long long generate_sequence() = 0;
};
