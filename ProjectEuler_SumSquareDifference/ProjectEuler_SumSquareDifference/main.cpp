#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;







int main(int argc, const char * argv[]) {
    
    
    int sumOfSquares = 0;
    int temp2 = 0;
    for(int i = 1; i <= 100; i++)
    {
        temp2 = i*i;
        sumOfSquares = sumOfSquares + temp2;
        
        
    }
    temp2 = 0;
    int squareOfSums = 0;
    for(int i = 1; i <= 100; i++)
    {
        squareOfSums = squareOfSums + i;
    }
    squareOfSums = squareOfSums * squareOfSums;
    cout << "Sum of squares: " << sumOfSquares << endl;
    cout << "Square of sums: " << squareOfSums << endl;
    cout << "Answer: " << squareOfSums - sumOfSquares << endl;
    
    
    
    
    
    
    
    return 0;
}
