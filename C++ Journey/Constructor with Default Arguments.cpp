//
//  Constructor with Default Arguments.cpp
//  C++ Journey
//
//  Created by Siddhant on 07/08/23.
//

#include <iostream>
using namespace std;

typedef
class name
{
    
    int r, i;
    
public:
    
    name(int a = 0, int b = 0)            //Default argument constructor. If no arguments passed then it takes the value given to it initially.
    {
        
        r = a;
        i = b;
        
    }
    
    void showdata()
    {
        
        cout << endl << r << " + " << i << "i" << endl ;
        
    }
    
    void sum(name A, name B);
    
}
rot;

void name :: sum(name A, name B)
{
    
    name C;
    
    C.r = A.r + B.r;
    C.i = A.i + B.i;
    
    C.showdata();
    
}

int main()
{
    
    name A(9, 9), B(9, 9), C;
    
    C.sum(A, B);
    
    return 0;
}

