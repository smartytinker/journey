//
//  Inline Function.cpp
//  C++ Journey
//
//  Created by Siddhant on 03/08/23.
//

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    
    int c = a + b;
    return c;

    
}

inline  int sum1(int a, int b)
{
    
    int c = a + b;
    return c;

    
}


int main()
{
    
    int a = 10, b = 20;
    
    cout << "the sum is " << sum(a, b) << endl;
    cout << "the sum is " << sum(a, b) << endl;
    cout << "the sum is " << sum(a, b) << endl;
    cout << "the sum is " << sum(a, b) << endl;
    cout << "the sum is " << sum(a, b) << endl;               //the fxn is called 10 times
    cout << "the sum is " << sum(a, b) << endl;               //this code size is lesser than the above 10 but slower
    cout << "the sum is " << sum(a, b) << endl;
    cout << "the sum is " << sum(a, b) << endl;
    cout << "the sum is " << sum(a, b) << endl;
    cout << "the sum is " << sum(a, b) << endl << endl;
    
    
    cout << "the sum is " << sum1(a, b) << endl;
    cout << "the sum is " << sum1(a, b) << endl;
    cout << "the sum is " << sum1(a, b) << endl;
    cout << "the sum is " << sum1(a, b) << endl;
    cout << "the sum is " << sum1(a, b) << endl;
    cout << "the sum is " << sum1(a, b) << endl;              //the fxn code is copied 10 times
    cout << "the sum is " << sum1(a, b) << endl;              //this code size is greater than the above 10 but faster
    cout << "the sum is " << sum1(a, b) << endl;
    cout << "the sum is " << sum1(a, b) << endl;
    cout << "the sum is " << sum1(a, b) << endl;
    
    return 0;
}
