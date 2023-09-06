//
//  gitpr1.cpp
//  C++ Journey
//
//  Created by Siddhant on 05/09/23.
//

#include <iostream>
using namespace std;

int main()
{
    long double a, b, c;
    char d;
    
    cin >> a >> b ;
    cin >> d;
    
    if(d == '+')
    {
        c = a + b;
    }
    if(d == '-')
    {
        c = a - b;
    }
    if(d == '*')
    {
        c = a * b;
    }
    if(d == '/')
    {
        c = a / b;
    }
    
    cout << c;
    
    return 0;
}

