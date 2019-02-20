#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int testNum = 1;
    bool foundIt = false;
    while(foundIt == false)
    {
        foundIt = true;
        for(int i = 1; i <= 20; i++ )
        {
            if(testNum % i != 0)
            {
                foundIt = false;
                break;
            }
        }
        if(foundIt == true)
        {
            cout << "Answer: " << testNum << endl;
            break;
        }
        else
        {
            testNum++;
        }
    }
    return 0;
}
