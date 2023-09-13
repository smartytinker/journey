//
//  Graphics1.cpp
//  C++ Journey
//
//  Created by Siddhant on 06/09/23.
//


#include <iostream>
#include <string>
using namespace std;

int main()
{
    int row[3][3] = {1, 2, 3, 4, 1, 6, 7, 8, 1};
    if((row[0][0] == row[1][1] && row[1][1] == row[2][2]))
    {
        cout << "true";
    }
    else
        cout <<"false";
    return 0;
    
}
