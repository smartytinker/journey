#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b; long double d, e, f, g;
    string c;
    
    cin >> a;
    
    for(int i = 1; i <= a; i++)
    {
        
        cin >> b;
        
        getline(cin , c);
        
        for(int j = 0; j < b/2; j = j + 2)
        {
            
           int t = c.at(j);
           c.at(j) = c.at(j+1);
           c.at(j+1) = t;
            
        }
        
        d = c.find_first_of('a');
        c.at(d) = 'z';
        e = c.find_first_of('b');
        c.at(e) = 'y';
        f = c.find_first_of('c');
        c.at(f) = 'x';
        g = c.find_first_of('z');
        c.at(g) = 'a';
        
        cout << c;
        
    }
    return 0;
}
