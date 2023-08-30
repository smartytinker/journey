//
//  Copy Constructor.cpp
//  C++ Journey
//
//  Created by Siddhant on 06/08/23.
//

#include <iostream>
using namespace std;


class name
{
    int x;
    
public:
    
    name(){}                                            //Important to declare if any variables are declared without any parameters.
    
    name(int a)
    {
        
        x = a;
        
    }
    
    void getdata()
    {
        
        cout << x << endl;
        
    }
    
    name (name &A)                                      //We can skip making a copy constructor as the compiler has a built in Copy Constructor.
    {                                                   //Just comment out this thing if you wanna check.
        
        x = A.x;
        cout << "\nthis is a copy constructor." << endl << x << endl;
        
    }
    
    
};

int main()
{
    
    name A(4), B(A), C;
    
    C = A;                                              //Constructor not formed.
    
    name D = A;                                         //Constructor is formed.
    
    D.getdata();
    
    return 0;
}

