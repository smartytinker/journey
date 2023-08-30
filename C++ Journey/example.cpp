#include <iostream>
using namespace std;

int main()
{
    int a, b, c[6], d, count = 0;
    
    cin >> a;
    
    for(int i = 1; i <= a; i++)
    {
        
        for(int j = 0; j < 6; j++)
        {
            
            cin >> c[j];
            
        }
        
        for(int k = 2; k < 6; k++)
        {
            
            if(c[k] == c[0] || c[k] == c[1])
            {
                
                if(c[k+1] == c[0] || c[k+1] == c[1])
                {
                    
                    count++;
                    d = k;
                    break;
                    
                }
              
                
            }
            
        }
        
            
    if((d == 2 || d == 3) && count != 0)
    cout << "\n1";
    
    if((d == 4 || d == 5) && count != 0)
    cout << "\n2";
    
    if(count == 0)
    cout << "\n0";
    
    count = 0;
        
    }


    return 0;
}
