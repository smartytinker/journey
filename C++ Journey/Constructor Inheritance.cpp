//
//  Constructor Inheritance.cpp
//  C++ Journey
//
//  Created by Siddhant on 04/09/23.
//

#include <iostream>
using namespace std;

typedef
class alpha
{
    
protected:
    
    int a;
    
public:
    
    alpha(int x)
    {
        
        a = x;
        
        cout << "\nThis is alpha = " << a;
        
    }
    
}
rot;

class beta
{
    
protected:
    
    int b, c;
    
public:
    
    beta(int y, int z)
    {
        
        b = y;
        c = z;
        
        cout << "\nThis is beta = " << b << ", " << c;
        
    }
    
};

class gamma : public alpha, public beta
{
public:
     
    int q, w, v;
    gamma(int x, int y, int z, int f, int e, int o):
    alpha(x), beta(y, z)
    {
        
        q = f;
        w = e;
        v = o;
        
        cout << "\nWe are in gamma = " << q << ", " << w << ", " << v << "\n";
        
    }
    
};

class delta
{
    
    int a, b;
    
public:
    
    delta(int x, int y) : a(x), b(x*y)                              //cool trick
    {
        
        cout << "We are in delta = " << a << ", " << b << "\n";
        
    }
    
};

int main()
{
    
    gamma(1, 2, 3, 4, 5, 6);
    
    delta(10, 100);
    
    return 0;
}

