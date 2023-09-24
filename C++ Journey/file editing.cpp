//
//  file editing.cpp
//  C++ Journey
//
//  Created by Siddhant on 18/09/23.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string a;
    ifstream in("File.txt");
    in >> a;
    getline(in, a);
    cout << a;
    
    return 0;
}

