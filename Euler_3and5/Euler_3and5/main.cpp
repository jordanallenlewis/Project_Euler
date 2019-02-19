//
//  main.cpp
//  Euler_3and5
//
//  Created by Jordan Lewis on 2/19/19.
//  Copyright © 2019 Jordan Lewis. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;



int main(int argc, const char * argv[]) {
    int answer = 0;
    int input = 1000;
    while(input > 0)
    {
        input--;
        if((input % 3 == 0) || (input % 5 == 0))
        {
            answer = answer + input;
        }
    }
    
    
    
    
    
    cout << answer << endl;
    return 0;
}
