//
//  Function Overloading.cpp
//  C++ Journey
//
//  Created by Siddhant on 03/08/23.
//

#include <iostream>
using namespace std;

int name(int a, int b)
{
    
    int c = a * b;
    return c;
    
}

int name(int a, int b, int c)
{
    
    int y = a + b + c;
    return y;
    
}

int main()
{
    
    int a = 10, b = 100, c = 1000;
    cout << "1st fxn " << name(a, b) << endl;
    cout << "1st fxn " << name(a, b, c) << endl;

    return 0;
}
