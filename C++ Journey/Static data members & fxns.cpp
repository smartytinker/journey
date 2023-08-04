//
//  Static data members & fxns.cpp
//  C++ Journey
//
//  Created by Siddhant on 04/08/23.
//

#include <iostream>
using namespace std;

typedef
class name
{
    
    int id;
    static int count;                                       //We cannot set the count value here.
    
public:
    
    void fxn1(void)                                         //Normal member fxns can also access static data member.
    {
        
        cout << "\nEnter employee id: ";
        cin >> id;
        count ++;
        
    }
    
    void fxn2()
    {
        
        cout << "\nThe employee id is: " << id;
        
        
    }
    
    static void fxn3()                                      //Static fxns only can access static variables not normal variables.
    {
        
        cout << "\nthe count is: " << count;
        
    }
    
}
rot;

int rot :: count;                                           //We can set the initial value of count here.
                                                            //The default value of count is 0.
int main()
{
    
    rot A, B, C, D;
    
    A.fxn1();
    A.fxn2();
    A.fxn3();
    
    
    B.fxn1();                                                //Here count is shared between the members A, B, C, D.
    B.fxn2();
    B.fxn3();
                                                             //Here id is a unique variable for each object.
    C.fxn1();
    C.fxn2();
    C.fxn3();
    
    D.fxn1();
    D.fxn2();
    D.fxn3();
    
    return 0;
    
}

