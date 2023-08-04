//
//  Call by Reference.cpp
//  C++ Journey
//
//  Created by Siddhant on 03/08/23.
//



#include <iostream>
using namespace std;

void name(int* a, int* b)
{
    
    int t;
    t = *a;                // t = number stored in address of a i.e address of m
    *a = *b;
    *b = t;
    
}
void name1(int a, int b)
{
    
    int y;
    y = a;
    a = b;
    b = y;
    
    
}

int main()
{
    
    int m=10, n=20;
    cout << endl << m << "\t" << n;
    name1(m, n);
    cout << endl << m << "\t" << n;               //Does not swap cause the values of m and n are copied in a, b not moved
    name(&m, &n);
    cout << endl << m << "\t" << n << endl;       //Swaps cause address of m, n are copied to *a, *b. As address is same, they get swapped
    return 0;
    
}
