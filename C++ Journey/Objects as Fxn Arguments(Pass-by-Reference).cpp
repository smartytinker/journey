//
//  Objects as Fxn Arguments(Pass-by-Reference).cpp
//  C++ Journey
//
//  Created by Siddhant on 04/08/23.
//

#include <iostream>
using namespace std;

typedef
class name
{
    
    int hours, minutes;
    
public:
    
    void fxn1(int a, int b)
    {
        
        hours = a;
        minutes = b;
        
    }
    
    void fxn2()
    {
        
        cout << hours << " hours and " << minutes << "minutes" << endl;
        
        
    }
    
    void fxn3(name *, name *);
    
}
rot;

void rot :: fxn3(name *A, name *B)
{
    
    rot C;
    int total = A->minutes + B->minutes;                        // '->' is called this, we can use it for object pointers instead of '.'
    C.hours = A->hours + B->hours;
    C.minutes = total % 60;
    C.hours = total / 60 + C.hours;
    C.fxn2();
    A->hours = 0;
    A->minutes = 0;

}

int main()
{
    
    rot A, B, C;
    
    A.fxn1(2, 30);
    A.fxn2();
    
    B.fxn1(3, 45);
    B.fxn2();
    C.fxn3(&A, &B);
    
    A.fxn2();
    
    
    return 0;
}


