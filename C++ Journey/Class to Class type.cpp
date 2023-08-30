//
//  Class to Class type.cpp
//  C++ Journey
//
//  Created by Siddhant on 30/08/23.
//
#include <iostream>
using namespace std;

class name1;
typedef
class name
{
    
    int a, b;
    
public:
    
    name(){}
    name(int x, int y)
    {
        
        a = x;
        b = y;
        
    }
    
    operator int()
    {
        
        return (a+b);
        
    }
    
}
rot;

class name1
{
public:
    name1(){}
    name1(name A)
    {
        
        cout << "in name1\n";
        
    }
    
};

int main()
{
    
    name A(12, 12);
    name1 B;
    int n = A;
    B = A;
    cout << n << "\n";
    return 0;
    
}

