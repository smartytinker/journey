//
//  Switch Statement.cpp
//  C++ Journey
//
//  Created by Siddhant on 03/08/23.
//

#include <iostream>
using namespace std;

int main()
{
    
    int age;
    cout << "enter age (2, 4, 5)";
    cin >> age;
    
    switch(age)
    {
        case 2:
            cout << "\nyou are 2 year old\n";
            break;
        case 4:
            cout << "\nyou are 4 year old\n";
            break;
        case 5:
            cout << "\nyou are 5 year old\n";
            break;
        default:
            cout << "\nInvalid input\n";
            break;
            
    }

    return 0;
}

