//
//  This Pointer.cpp
//  C++ Journey
//
//  Created by Siddhant on 04/09/23.
//

#include <iostream>
using namespace std;

class name
{
    
    int a;
    
public:
    
    void getdata(int a)
    {
        
        //a = a;                            This is wrong   X
        this -> a = a;
        
    }
    
    void showdata()
    {
        
        cout << a << "\n";
        
    }
    
};
                                            //This is a pointer which points to the object which invokes the member fxn.
int main()
{
    
    name A;
    A.getdata(50);
    A.showdata();
    
    return 0;
}

