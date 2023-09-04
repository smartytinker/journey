//
//  Nesting of Classes.cpp
//  C++ Journey
//
//  Created by Siddhant on 04/09/23.
//

#include <iostream>
using namespace std;

class alpha
{
    
public:
    
    int num1 = 2, num2 = 9;
    
    alpha()
    {
        
        cout << "\nReal = " << num1;
        cout << "\nImaginary = " << num2;
        
    }
    
};

class beta
{
    
public:
    
    int num1 = 10, num2 = 20;
    
    beta()
    {
        
        cout << "\nReal = " << num1;
        cout << "\nImaginary = " << num2;
        
    }
    
};
    
class gamma
    {
        
        int num1, num2;
        
        void showdata()
        {
        
            cout << num1 << " + " << num2 << "i";
            
        }
    
};

class delta
{

public:
    
    alpha A();
    beta B();
    gamma C;                                    // Declaring in classes
   
    
};

int main()
{
    
    
    
    return 0;
}

