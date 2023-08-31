//
//  Single Inheritance.cpp
//  C++ Journey
//
//  Created by Siddhant on 31/08/23.
//

#include <iostream>
using namespace std;

typedef
class name
{
    
    int o = 3, p = 9;                                      //private members cannot be inherited.
    void to()                                              //We can use private fxn in member fxn of same class and then use it in derived class
    {
        cout << "\nWe are in private name void to()\n" << o << "\n" << p << "\n";
    }
    
protected:
    
    int t = 69;                                           //These can be accessed by directly derived public classes
    
public:
    
    int a, b, c;
    name(){}
    name(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
        cout << "We are in name\n" << a << "\n" << b << "\n"  << c << "\n" ;
    }
        void getdata()
        {
            
            cout << "\ncalling private member fxn\n";
            to();                                                           //Calling private member fxn
            
        }
    
    
}
rot;

class name1: public name                                //public class inheritance
{
                                                // a, b, c are public members of this class
public:
    
    name1()
    {
        cout << "\nWe are in name1\n";
    }
    
    
};

class name2: private name                               //private class inheritance
{
                                               
public:
    
    name2()
    {
        cout << "\nWe are in name2\n";
    }
    
    
};

class name3: public name                               //public class inheritance
{
                                               
public:
    
    name3()
    {
        cout << "\nWe are in name3\n" << t << "\n";     //We can access t which is a protected member of name
    }
    
    
};


int main()
{
    
    name A(1,2,3);
    name1 B;
    name2 C;
    name3 D;
    B.getdata();                    //We cannot do the same with C as its base class member fxns are private to derived class
    return 0;
}

