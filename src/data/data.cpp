#include "data.hpp"

DATA : DATA(int new_x)
{
    x = new_x;
}
DATA::DATA()
{
    x = 5;
}

int DATA::testFunction()
{
    return x;
}