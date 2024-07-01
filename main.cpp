#include <iostream>
#include <vector>
#include <cassert>
#include "fizzbuzz.h"

// test structure to hold test cases
struct TestCase{
    int input;
    std::string expectedOutput;
};

void runTests(const std::vector<TestCase>& testCases)
{
    for (const auto& testCase : testCases)
    {
        std::string result = fizzBuzz(testCase.input);

        assert(result == testCase.expectedOutput && "Test failed!");

        std::cout << "Test passed for input: " << testCase.input << "\n";
    }
}

int main()
{
    // test cases
    std::vector<TestCase> testCases = {
            {1, "1"},
            {3, "Fizz"},
            {5, "Buzz"},
            {15, "FizzBuzz"},
            {-30, "FizzBuzz"},
            {-9, "Fizz"},
            {-100, "Buzz"},
            {-7, "7"},
    };

    runTests(testCases);

    // program logic
    for (int i = 1; i < 101; i++)
    {
        std::cout << fizzBuzz(i) << "\n";
    }

    return 0;
}