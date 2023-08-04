//
//  Reference variable.cpp
//  C++ Journey
//
//  Created by Siddhant on 03/08/23.
//

#include <iostream>
using namespace std;


void f(int & x)
{
    
    x = x + 10;
    
}

int main()
{
    
    int a = 10;

    int & b = a;
    a++;
    b++;
    cout << a << endl;
    cout << b << endl;
    
    f(a);
    cout << a << endl;
    return 0;
    
}
