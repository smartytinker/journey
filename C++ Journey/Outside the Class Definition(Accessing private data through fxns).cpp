//
//  Outside the Class Definition(Accessing private data through fxns).cpp
//  C++ Journey
//
//  Created by Siddhant on 03/08/23.
//

#include <iostream>
using namespace std;

typedef class name
{
    
    int a = 10, b = 199;
    
public:
    
    void getdata();
    
}rot;

int main()
{
    
    rot A;
    A.getdata();
    return 0;
    
}

void rot :: getdata()                             //we can make this inline by writing "inline void rot :: getdata()"
{
    
    cout << a << endl << b << endl;
    
}
