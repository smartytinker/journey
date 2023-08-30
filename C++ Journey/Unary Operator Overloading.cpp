//
//  Unary Operator Overloading(using .cpp
//  C++ Journey
//
//  Created by Siddhant on 26/08/23.
//

#include <iostream>
using namespace std;

typedef
class name
{
    
    int x, y, z;
    
public:
    
    void getdata();
    void showdata();
    void operator - ();
    
}
rot;

void name :: getdata()
{
    
    cout << "\nenter value of 1st\n";
    cin >> x;
    cout << "\nenter value of 2nd\n";
    cin >> y;
    cout << "\nenter value of 3rd\n";
    cin >> z;
    
    
}

void name :: showdata()
{
    
    cout << "\n1st = " << x << "\n2nd = " << y << "\n3rd = " << z << "\n";
    
}

void name :: operator - ()
{
    
    x = -x;
    y = -y;
    z = -z;
    
}

int main()
{
    
    rot A;
    
    A.getdata();
    A.showdata();
    
    - A;
    
    A.showdata();
    
    return 0;
}

