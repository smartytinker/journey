//
//  Arrays of Objects using Pointers.cpp
//  C++ Journey
//
//  Created by Siddhant on 04/09/23.
//

#include <iostream>
using namespace std;

class Mallitems
{
    
    int a, b;
    
public:
    
    void getdata(int x, int y)
    {
        
        a = x;
        b = y;
        
    }
    
    void showdata()
    {
        
        cout << "\nCode of this item is - " << a;
        cout << "\n100Price of this item is - " << b;
        
    }
    
};

int main()
{
    int w, e;
    
    Mallitems *ptr = new Mallitems[3];
    
    Mallitems *ptr2 = ptr;
    
    for(int i = 0; i < 3; i++)
    {
        
        cout << "Enter the code of item " << i << " = ";
        cin >> w;
        cout << "Enter the price of item " << i << " = ";
        cin >> e;
        ptr -> getdata(w, e);
        ptr++;
        
    }
    
    for(int i = 0; i < 3; i++)
    {
        
        ptr2 -> showdata();
        ptr2++;
        
    }
    
    return 0;
}

