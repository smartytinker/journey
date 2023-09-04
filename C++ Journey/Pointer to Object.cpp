//
//  Pointer to Object.cpp
//  C++ Journey
//
//  Created by Siddhant on 04/09/23.
//

#include <iostream>
using namespace std;

class name
{
    
    int a, b;
    
public:
    
    void getdata(int x, int y)
    {
        
        a = x;
        b = y;
        
        cout << "Real Part = " << a;
        cout << "\nReal Part = " << b << "\n ";
        
    }
    
};

int main()
{
    
    name *ptr = new name;      //*ptr = dereferencing the pointer, ptr stores address of variable
    
    (*ptr).getdata(2, 3);
    ptr->getdata(3, 4);        // can also be used like this
    
    return 0;
}

