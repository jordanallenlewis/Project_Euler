#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(int argc, const char * argv[])
{
    int checkThisNumber = 0;
    int numberOfPrimes = 1;
    while(numberOfPrimes <= 10001)
    {
        checkThisNumber++;
        int tempCount = 0;
        for(int i = 1; i <= checkThisNumber; i++)
        {
            if(checkThisNumber % i == 0)
            {
                tempCount++;
            }
        }
        if(tempCount == 2)
        {
            numberOfPrimes++;
        }
    }
    cout << "Answer: "<< checkThisNumber << endl;
    return 0;
}
