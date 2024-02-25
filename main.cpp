#include <iomanip>
#include <iostream>

// find the maxmum value from the userinput
// if the input is: 95 100 85 80 30 80
// then the output is: 100

int main()
{

    int inValue;
    int maximumVal = 7;

    int maxSeenSoFar;

    for (int i = 0; i < maximumVal; i++)
    {
        std::cin >> inValue;
        if (inValue == 0)
        {
            maxSeenSoFar = inValue;
        }
        else if (inValue > maxSeenSoFar)
        {
            maxSeenSoFar = inValue;
        }
    }
    std::cout << maxSeenSoFar;

    return 0;
}