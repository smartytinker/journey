//
//  Recursions.cpp
//  C++ Journey
//
//  Created by Siddhant on 25/08/23.
//

#include <iostream>
using namespace std;

int
toi(int a)
{
    
    if(a < 2     )
    {
        
        return 1;
        
    }
    return toi(a - 1) + toi(a - 2);
    
}
int main()
{
    int a;
    cout << "Enter the position";
    cin >> a;
    cout << "\n" << toi(a);
    
    return 0;
}

