#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int first = 1;
    int second = 2;
    int next = first + second;
    int countEven = second;
    while (next <= 4000000)
    {
        first = second;
        second = next;
        next = first + second;
        if(next % 2 == 0)
        {
            countEven += next;
        }
    }
    cout << countEven << endl;
    return 0;
}
