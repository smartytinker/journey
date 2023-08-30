//
//  Basic to Class Type.cpp
//  C++ Journey
//
//  Created by Siddhant on 30/08/23.
//

#include <iostream>
using namespace std;

typedef
class name
{
    
    int h, m;
    
public:
    
    name(){};
    name(int a)                                        //Only Constructors are used for converting basic to class
    {
        
        h = a/60;
        m = a%60;
        cout << h << " hours and " << m << " minutes";
        cout << "\n" << h << "." << m << "\n";
        
    }
    
}
rot;

int main()
{
    
    name A;
    int t = 400;
    A = t;                       // Basic to Class Type;
    
    return 0;
}

