//
//  Friendly Fxns(Pass-by-Reference).cpp
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
    
    friend void fxn1(name *A, name *B);    
    
public:
    
    void getdata(int x, int y)
    {
        
        a = x;
        b = y;
        
    }
    
    void showdata()
    {
         
        cout << a << b << endl;
        
    }
    
}
rot;

void fxn1(name *A, name *B)
{
    
    A->a = 0;
    A->b = 0;
    
}

int main()
{
    
    rot A, B;
    A.getdata(2, 3);
    B.getdata(9, 8);
    A.showdata();
    B.showdata();
    
    fxn1(&A, &B);
    
    A.showdata();
    
    return 0;
}

