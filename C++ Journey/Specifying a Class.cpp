//
//  Specifying a Class.cpp
//  C++ Journey
//
//  Created by Siddhant on 03/08/23.
//


#include <iostream>
using namespace std;

class name
{
    
public:
    
    int a = 10, b = 10, c = 90;
    
    void getdata()
    {
        
        cout << a + b + c << endl;
        
    };
    
    
} x, y, z;                                             //Objects can also be defined like this.

int main()
{
    
    name A;
    A.getdata();
    x.getdata();
    return 0;
    
}


