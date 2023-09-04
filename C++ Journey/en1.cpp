//
//  en1.cpp
//  C++ Journey
//
//  Created by Siddhant on 02/09/23.
//

#include <iostream>
using namespace std;

int main()
{
    
    for(int i = 1; i <= 5; i++)
    {
        
        for(int j = 1; j <= i; j++)
            cout << "*";
            
        for(int k = 10 - (i*2); k >= 0; k = k - 1)
            cout << " ";
        
        for(int m = 1; m <= i; m++)
            cout << "*";
        
        cout << "\n";
        
    }
    for(int i = 1; i <= 5; i++)
    {
        
        for(int j = 5 - i; j >= 0; j--)
            cout << "*";
            
        for(int k = 10 - (i-1) * 2; k <= 10; k++)
            cout << " "; 
        
        for(int m = 5 - i; m >= 0; m--)
            cout << "*";
        
        cout << "\n";
        
    }
    
    return 0;
}

