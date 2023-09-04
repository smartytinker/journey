//
//  Pointer to Derived Class.cpp
//  C++ Journey
//
//  Created by Siddhant on 04/09/23.
//

#include <iostream>
using namespace std;

class base
{
    
public:
    
    int a;
    
    void getdata()
    {
       
        cout << "We are in base class - " << a << "\n";
        
    }
    
};

class derived : public base
{
    
public:
    
    int b;
    
    void getdata()
    {
        
        cout << "We are in derived class - " << b << "\n";
        
    }
    
};

int main()
{
    
    derived B;
    
    base *baseptr = new base;
    baseptr = &B;
    
    baseptr -> a = 34;
    
    baseptr -> getdata();
    
    derived *derivedptr = new derived;
    derivedptr = &B;
    
    derivedptr -> b = 90;
    
    derivedptr -> getdata();
    
    return 0;
}

