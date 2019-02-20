#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> answer;
    for(int i = 100; i <= 999; i++)
    {
        for(int j = 100; j <= 999; j++)
        {
            int temp = i * j;
            string stringTemp = to_string(temp);
            int first = 0;
            int last = stringTemp.length()-1;
            bool isPal = true;
            while(first <= last)
            {
                if(stringTemp[first] != stringTemp[last])
                {
                    isPal = false;
                    break;
                }
                else
                {
                    first++;
                    last--;
                }
            }
            if(isPal == true)
            {
               answer.push_back(temp);
            }
        }
    }
    int largestPalindrome = *max_element(answer.begin(), answer.end());
    cout << "Largest palindrome: " << largestPalindrome << endl;
    return 0;
}
