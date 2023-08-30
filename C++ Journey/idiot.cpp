//
//  idiot.cpp
//  C++ Journey
//
//  Created by Siddhant on 25/08/23.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string a = "onetwothreefourthree", b = "abc";
    
    
    cout << "\nS1 = " << a << "\n";
    
    cout << "\nS2 = " << b << "\n";
    
    
    //---------------------------------------------------------
    
    
    cout << a.at(1);
    
    int r = a.find("t");
    cout << r << "\n";
    
    int r1 = a.find_first_of("t");
    cout << r1 << "\n";
    
    int r2 = a.find_last_of("t");
    
    cout << r2 << "\n";
    
    a.substr(1, 3);
    
    cout << a << "\n";
    
    
    
    
    
    
    //---------------------------------------------------------
    
    cout << "S1 = ";
    getline(cin, a);
    
    cout << "\nS2 = ";
    getline(cin, b);

    
    a.swap(b);
    
    cout << a << "\n" << b << "\n";
    
    
    int x = a.compare(b);
    
    cout << "compare a and b = " << x << "\n\n";
    
    
    
    
    //---------------------------------------------------------
    
    cout << "S1 Size = "  << a.size() << "\n";
    
    cout << "S1 length = "  << a.length() << "\n";
    
    cout << "S1 capacity = " << a.capacity() << "\n";
    
    cout << "S1 max size = " << a.max_size() << "\n";
    
    cout << "S1 String empty = " << (a.empty() ? "yes" : "no");
    
    
    
    //---------------------------------------------------------
    
    
    
    a.insert(4, b);           // inserts other string after 4th position
    
    cout << "\nS2 in S1 = " << a << "\n";
    
    a.erase(4, 3);
    
    cout << "\nRemoving 3 characters after 4th position = " << a << "\n";
    
    a.replace(2, 3, b);
    
    cout <<"\nReplacing 3 characters after 2nd position from S2 = " << a << "\n\n";
    
    
    return 0;
    
}

