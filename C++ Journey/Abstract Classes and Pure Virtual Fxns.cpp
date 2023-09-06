//
//  Abstract Classes and Pure Virtual Fxns.cpp
//  C++ Journey
//
//  Created by Siddhant on 05/09/23.
//

#include <iostream>
using namespace std;

class mychannel
{
    
protected:
    
     int ratings;
     string name;

public:
 
    mychannel(){}
    
    mychannel(string b, int a)
    {
        
        name = b;
        ratings = a;
        
    }
    
    virtual void display() = 0;
    
};

class video : public mychannel
{
    
protected:
    
    float videolength;
    
public:
    
    video(string name, int ratings, float vl) : mychannel(name, ratings)
    {
        
        videolength = vl;
        
    }
    
//    void display()
//    {
//
//        cout << "\nThe name of the video is - " << name;
//        cout << "\nThe ratings are - " << ratings;
//        cout << "\nThe videolength is - " << videolength << "\n";
//
//    }
    
};

class videotext : public mychannel
{
    
protected:
    
    int words;
    
public:
    
    videotext(string name, int ratings, int vl) : mychannel(name, ratings)
    {
        
        words = vl;
        
    }
    
    void display()
    {
        
        cout << "\nThe name of the video is - " << name;
        cout << "\nThe ratings are - " << ratings;
        cout << "\nThe words are - " << words << "\n";
        
    }
    
};

int main()
{
    
    int words = 40, rating = 4;
    float videolength = 50.17;
    string name = "Siddhant";
    
    video B(name, rating, videolength); 
    videotext C(name, rating, words);
    
    mychannel *ptr[2];
    ptr[0] = &B;
    ptr[1] = &C;
    
    ptr[0] -> display();
    ptr[1] -> display();
    
    return 0;
}


