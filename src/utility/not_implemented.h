#ifndef KATA_NOT_IMPLEMENTED_H
#define KATA_NOT_IMPLEMENTED_H

#include <stdexcept>

class NotImplemented : public std::logic_error
{
public:
    NotImplemented() : std::logic_error("Function not yet implemented") {};
};

#endif //KATA_NOT_IMPLEMENTED_H
