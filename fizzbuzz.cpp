#include "fizzbuzz.h"

// fizzBuzz implementation
std::string fizzBuzz(int n, int number1, int number2)
{
    int i = std::abs(n);

    if ((i % number1 == 0) && (i % number2 == 0))
    {
        return "FizzBuzz";
    }
    else if (i % number1 == 0)
    {
        return "Fizz";
    }
    else if (i % number2 == 0)
    {
        return "Buzz";
    }
    else
    {
        return std::to_string(i);
    }
}