//
//  Typecasting.cpp
//  C++ Journey
//
//  Created by Siddhant on 29/08/23.
//

#include <iostream>
using namespace std;

int main()
{
     //1         1         2         4         4            4             4               8               4        8          12
    //bool -> char -> short int -> int -> unsigned int -> long int -> unsigned int -> long long int -> float -> double -> long double
    
    float x = 5.66;
    int a;
    
    a = int(x);
    cout << "\nimplicit conversion = " << a;           //static cast, dynamic cast does the same thing but just use different words. same.
    
    a = x;
    cout << "\nexplicit conversion = " << a << "\n";
    
    return 0;
}

