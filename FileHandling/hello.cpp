#include <iostream>
#include "lib/math/Operations.hpp"

auto sum(int a , int b)
{
    return a + b;
}

#ifndef CMAKEMACROSAMPLE
    #define CMAKEMACROSAMPLE "NO SYSTEM NAME"
#endif

int main()
{
    std::cout<<"Hello World\n";
    std::cout<<CMAKEMACROSAMPLE<<"\n";
    std::cout<<"Sum of 8 and 3 is "<<sum(8,3)<<"\n";

    math::operations op;
    int sum=op.sum(8,10);
    std::cout<<"Sum (math lib): "<<sum<<"\n";
    return 0;
}