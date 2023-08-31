//
//  Multiple Level Inheritance.cpp
//  C++ Journey
//
//  Created by Siddhant on 31/08/23.
//

#include <iostream>
using namespace std;

typedef
class add
{
    
protected:
    
    int a, b;
    
public:
    
    void addition(int x, int y)
    {
        
        a = x;
        b = y;
        
        cout << "The Addition is = " << a + b;
        
    }
    
}
rot;

class sub
{
    
protected:
    
    int c, d;
    
public:
    
    void substraction(int x, int y)
    {
        
        c = x;
        d = y;
        
        cout << "\nThe Substraction is = " << c - d;
        
    }
    
};

class mul
{
    
protected:
    
    int e, f;
    
public:
    
    void multiplication(int x, int y)
    {
        
        e = x;
        f = y;
        
        cout << "\nThe Multiplication is = " << e * f;
        
    }
    
};

class div
{
    
protected:
    
    int g, h;
    
public:
    
    void division(int x, int y)
    {
        
        g = x;
        h = y;
        
        cout << "\nThe Division is = " << g * h << "\n";
        
    }
    
};

class all : public add, public sub, public mul, public div
{
    
    
    
};

int main()
{
    
    all A;
    A.addition(2,3);
    A.substraction(2,3);
    A.multiplication(2,3);
    A.division(2,3);
    
    return 0;
}

