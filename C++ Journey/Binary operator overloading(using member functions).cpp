//
//  Binary operator overloading(using member functions).cpp
//  C++ Journey
//
//  Created by Siddhant on 26/08/23.
//

#include <iostream>
using namespace std;

typedef
class name
{
    
    int r, i;
    
public:
    
    void getdata();
    void showdata();
    name operator + (name A);
    
}
rot;

void rot :: getdata()
{
    
    cout << "\nEnter real part = ";
    cin >> r;
    cout << "\nEnter imaginary part = ";
    cin >> i;
    
}

void rot :: showdata()
{
    
    cout << "\n" << r << " + " << i << "i\n";
    
}

name name :: operator+ (name A)
{
    
    rot C;
    
    C.r = r + A.r;
    C.i = i + A.i;
    
    return C;
    
}

int main()
{
    
    rot A, B, C;
    
    A.getdata();
    
    B.getdata();
    
    C = A + B;
    
    C.showdata();
    
    return 0;
}

