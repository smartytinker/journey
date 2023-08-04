//
//  Scope Resolution Operator.cpp
//  C++ Journey
//
//  Created by Siddhant on 03/08/23.
//

#include <iostream>
using namespace std;


int a = 100;

int main()
{
    
    int a = 10;

    cout << "in local a = " << a << endl;
    cout << "in global ::a = " << ::a << endl;
    
    return 0;
    
}
