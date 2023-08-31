//
//  Multilevel Level Inheritance.cpp
//  C++ Journey
//
//  Created by Siddhant on 31/08/23.
//

#include <iostream>
using namespace std;

typedef
class student
{
    
protected:
    
    int roll;
    string name;
    
public:
    
    student(){}
    void getdata(string a)
    {
       
        name = a;
        cout << "Name of the student - " << a;
        
    }
    
}
rot;

class result: public student
{
    
protected:
    
    int sub1, sub2;
    
public:

    result()
    {
    }
    
    void getdata(int a, int b)
    {
        
        sub1 = a;
        sub2 = b;
        
    }
    
    void showdata()
    {
        
            cout << "\nsubject 1 marks = " << sub1;
            cout << "\nsubject 2 marks = " << sub2;
            
    }
    
    
};

class total: public result
{
    
    int sum;
    
public:
    
    
    void showdata()
    {
        
        sum = sub1 + sub2;
        
        cout << "\nTotal marks = " << sum << "\n";
        
    }
    
};

int main()
{
    
    total C;
    C.student::getdata("Siddhant");     //Functions with same name
    C.result::getdata(50, 60);          //Functions with same name
    C.result::showdata();               //Functions with same name
    C.total::showdata();                //Functions with same name
    
    return 0;
    
}

/*
 
 We can also write the above like this-
 
 int main()
 {
 
    total C;
    C.getdata1("Siddhant");
    C.getdata2(50, 60);
    C.showdata1();
    C.showdata2();
    
    return 0;
 
 }
 
 */
