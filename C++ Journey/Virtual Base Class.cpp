//
//  Virtual Base Class.cpp
//  C++ Journey
//
//  Created by Siddhant on 01/09/23.
//

#include <iostream>
#include <string>

using namespace std;

typedef
class employee
{
    
protected:
    
    string nop, designation;
    int roll;
    
public:
    
    void getdata()
    {
        
        cout << "\nEnter employee name - " ;
        cin >> nop;
        cout << "\nEnter employee designation - " ;
        cin >> designation;
        cout << "\nEnter employee roll number - " ;
        cin >> roll;
        
    }
    
}
rot;

class python : public virtual employee
{
    
protected:
    
    int shift;
    
public:
    
    void getdata()
    {
        
        cout << "Enter shift";
        cin >> shift;
        
    }
    
};

class cpp : virtual public employee
{
    
protected:
    
    int shift;
    
public:
    
    void getdata()
    {
        
        cout << "Enter shift";
        cin >> shift;
        
    }
    
};

class Marudh : public python, public cpp
{
    
    
    
};

int main()
{
    
    Marudh A;
    
    A.employee::getdata();
    A.python::getdata();
    A.cpp::getdata();
    
    return 0;
}

