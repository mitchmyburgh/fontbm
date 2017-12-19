#pragma once
#include <exception>
#include "FtInclude.h"

namespace ft {

class Exception : public std::exception
{
public:
    Exception(const std::string& s, FT_Error e)
    {
        msg = s + ", error code: " + std::to_string(e);
    }

    const char* what() const throw() override
    {
        return msg.c_str();
    }

private:
    std::string msg;
};

}
