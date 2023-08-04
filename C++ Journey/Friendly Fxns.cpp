//
//  Friendly Fxns.cpp
//  C++ Journey
//
//  Created by Siddhant on 04/08/23.
//

#include <iostream>
using namespace std;

typedef
class name
{
    int a, b;
    
    friend void got(name A, name B);
    
public:
    
    void getdata(int x, int y)
    {
        
        a = x;
        b = y;
        
    }
    
    void showdata()
    {
        
        cout << "The complex number is : " << a << " + " << b << "i" << endl;
        
    }
    
    
}
rot;


void got(rot A, rot B)
{
    
    rot C;
    
    C.a = A.a + B.a;
    C.b = A.b + B.b;
    
    C.showdata();
    
}


int main()
{
    
    rot A, B;
    
    A.getdata(2,3);
    B.getdata(2,10);
    
    A.showdata();
    B.showdata();
    got(A, B);
    
    return 0;
    
}




/*
 Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
 */
