//
//  TIC-TAC-TOE.cpp
//  C++ Journey
//
//  Created by Siddhant on 08/09/23.
//

#include <iostream>
using namespace std;

class tic
{
    
    string row[3][3] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
    int x, y, a[10] = {0, 1, 2, 1, 2, 1, 2, 1, 2, 1};
    int b[7] = {0, 0, 0, 0, 0, 0, 0};
    bool middle_O = 0, counter = 0, count = 0, outloop;
    
public:
    
    void player_input()
    {
        cout << "\n\nPLAYER :";
        cout << "\nx position = ";
        cin >> x;
        cout << "y position = ";
        cin >> y;
        
        row[x-1][y-1] = "X";
    }
    
    void welcome()
        {
            cout << "\n\n WELCOME TO TIC-TAC-TOE\n\n";
            cout << "      |     |      " << "\n";
            cout << "  1,1 | 1,2 | 1,3  " << "\n";
            cout << " _____|_____|_____ " << "\n";
            cout << "      |     |      " << "\n";
            cout << "  2,1 | 2,2 | 2,3  " << "\n";
            cout << " _____|_____|_____ " << "\n";
            cout << "      |     |      " << "\n";
            cout << "  3,1 | 3,2 | 3,3  " << "\n";
            cout << "      |     |      " << "\n";
        }
    
    void print()
    {
        cout << "\n\n";
        cout << "      |     |      " << "\n";
        cout << "   " << row[0][0] << "  |  " << row[0][1] << "  |  " << row[0][2] << "   " << "\n";
        cout << " _____|_____|_____ " << "\n";
        cout << "      |     |      " << "\n";
        cout << "   " << row[1][0] << "  |  " << row[1][1] << "  |  " << row[1][2] << "   " << "\n";
        cout << " _____|_____|_____ " << "\n";
        cout << "      |     |      " << "\n";
        cout << "   " << row[2][0] << "  |  " << row[2][1] << "  |  " << row[2][2] << "   " << "\n";
        cout << "      |     |      " << "\n";
    }
    
    void computerwins();
    
    void forcedmove();
    
    void check_tie();
    
};

void tic :: computerwins()
{
    // -------------------------------------------if player is an idiot, machine wins -------------------------------------------
    
    
    //------------------------------------------00, 10, 20 -------------------------------------------
    if(row[1][0] == " " || row[2][0] == "O" || row[0][0] == "O")
    {
        if(
           row[1][0] == " " && row[2][0] == "O" && row[0][0] == "O" && counter == 0
           )
        {
            row[1][0] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
        if(
           row[1][0] == " " && row[2][0] == "O" && row[0][0] == "O" &&
           counter == 0
           )
        {
            row[1][0] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
        if(
           row[0][0] == " " && row[1][0] == "O" && row[2][0] == "O" &&
           counter == 0
           )
        {
            row[1][0] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
    }
    //------------------------------------------00, 01, 02 -------------------------------------------
    if(
       (row[0][2] == "O" && row[0][0] == "O") || (row[0][1] == "O" && row[0][0] == "O") || (row[0][1] == "O" && row[0][2] == "O")
       )
    {
        if(
           row[0][1] == " " && row[0][2] == "O" && row[0][0] == "O" && counter == 0
           )
        {
            row[0][1] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
        if(row[0][2] == " " && row[0][1] == "O" && row[0][0] == "O" &&
           counter == 0
           )
        {
            row[0][2] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
        if(row[0][0] == " " && row[0][1] == "O" && row[0][2] == "O" &&
           counter == 0
           )
        {
            row[0][0] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
    }
    //------------------------------------------20, 21, 22 -------------------------------------------
    if(
       (row[2][1] == "O" && row[2][2] == "O") || (row[2][0] == "O" && row[2][2] == "O" ) || (row[2][0] == "O" && row[2][1] == "O")
       )
    {
        if(
           row[2][0] == " " && row[2][1] == "O" && row[2][2] == "O" && counter == 0
           )
        {
            row[2][0] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
        if(
           row[2][1] == " " && row[2][0] == "O" && row[2][2] == "O" && counter == 0
           )
        {
            row[2][0] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
        if(
           (row[2][2] == " " && row[2][0] == "O" && row[2][1] == "O") && counter == 0
           )
        {
            row[2][2] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
    }
    //------------------------------------------02, 12, 22 -------------------------------------------
    if(
       (row[1][2] == "O" && row[2][2] == "O") || (row[0][2] == "O" && row[2][2] == "O") || (row[0][2] == "O" && row[1][2] == "O")
       )
    {
        if(
           row[0][2] == " " && row[1][2] == "O" && row[2][2] == "O" &&counter == 0
           )
        {
            row[0][2] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
        if(
           (row[1][2] == " " && row[0][2] == "O" && row[2][2] == "O") &&
           counter == 0
           )
        {
            row[1][2] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
        if(
           (row[2][2] == " " && row[0][2] == "O" && row[1][2] == "O") &&
           counter == 0
           )
        {
            row[2][2] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
    }
    //------------------------------------------00, 11, 22 -------------------------------------------
    if(
       (row[1][1] == "O" && row[2][2] == "O") || (row[0][0] == "O" && row[2][2] == "O") || (row[1][1] == "O" && row[0][0] == "O")
       )
    {
        if(
           row[0][0] == " " && row[1][1] == "O" && row[2][2] == "O" && counter == 0
           )
        {
            row[0][0] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
        if(
           (row[1][1] == " " && row[0][0] == "O" && row[2][2] == "O") &&
           counter == 0
           )
        {
            row[0][0] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
        if(
           (row[2][2] == " " && row[1][1] == "O" && row[0][0] == "O") &&
           counter == 0
           )
        {
            row[0][0] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
    }
    //------------------------------------------02, 11, 20 -------------------------------------------
    if(
       (row[1][1] == "O" && row[2][0] == "O") || (row[0][2] == "O" && row[2][0] == "O") || (row[1][1] == "O" && row[0][2] == "O")
       )
    {
        if(
           row[0][2] == " " && row[1][1] == "O" && row[2][0] == "O" && counter == 0
           )
        {
            row[0][2] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
        if(
           (row[1][1] == " " && row[0][2] == "O" && row[2][0] == "O") &&
           counter == 0
           )
        {
            row[1][1] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
        if(
           (row[2][0] == " " && row[1][1] == "O" && row[0][2] == "O") &&
           counter == 0
           )
        {
            row[2][0] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
    }
    //------------------------------------------10, 11, 12 -------------------------------------------
    if(
       (row[1][1] == "O" && row[1][2] == "O") || (row[1][0] == "O" && row[1][2] == "O") || (row[1][1] == "O" && row[1][0] == "O")
       )
    {
        if(
           row[1][0] == " " && row[1][1] == "O" && row[1][2] == "O" && counter == 0
           )
        {
            row[1][0] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
        if(
           (row[1][1] == " " && row[1][0] == "O" && row[1][2] == "O") &&
           counter == 0
           )
        {
            row[1][1] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
        if(
           (row[1][2] == " " && row[1][1] == "O" && row[1][0] == "O") &&
           counter == 0
           )
        {
            row[1][2] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
    }
    //------------------------------------------01, 11, 21 -------------------------------------------
    if(
       (row[1][1] == "O" && row[2][1] == "O") || (row[0][1] == "O" && row[2][1] == "O") || (row[1][1] == "O" && row[0][1] == "O")
       )
    {
        if(
           row[0][1] == " " && row[1][1] == "O" && row[2][1] == "O" && counter == 0
           )
        {
            row[0][1] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
        if(
           row[1][1] == " " && row[0][1] == "O" && row[2][1] == "O" && counter == 0
           )
        {
            row[1][1] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
        if(
           row[2][1] == " " && row[1][1] == "O" && row[0][1] == "O" && counter == 0
           )
        {
            row[2][1] = "O";
            print();
            cout << "\n\nComputer Wins\n\n\n";
            exit(0);
        }
    }
}

void tic :: check_tie()
{
        if(row[0][0] == row[2][0] && row[2][0] == row[1][2])
        {
            if(row[1][0] == row[1][1])
            {
                cout << "\n\nTIE\n\n\n";
                exit(0);
            }
        }
        
        if(row[0][0] == row[0][2] && row[0][2] == row[2][1])
        {
            if(row[0][1] == row[1][1])
            {
                cout << "\n\nTIE\n\n\n";
                exit(0);
            }
        }
        
        if(row[0][2] == row[2][2] && row[2][2] == row[1][0])
        {
            if(row[1][1] == row[1][2])
            {
                cout << "\n\nTIE\n\n\n";
                exit(0);
            }
        }
        
        if(row[2][0] == row[2][2] && row[2][2] == row[0][1])
        {
            if(row[1][1] == row[2][1])
            {
                cout << "\n\nTIE\n\n\n";
                exit(0);
            }
        }
        
}

void tic :: forcedmove()
{
    if(row[1][1] == "X")
    {
        row[0][0] = "O";
        {
            for(int j = 1; j <= 4; j++)
            {
                counter = 0;
                print();
                check_tie();
                player_input();
                
                computerwins();
                
                if(row[0][1] == "X" && row[2][1] == " " && b[0] == 0 && counter == 0)
                {
                    row[2][1] = "O";
                    b[0]++;
                    counter = 1;
                    continue;
                }
                if(row[0][2] == "X" && row[2][0] == " " && b[1] == 0 && counter == 0)
                {
                    row[2][0] = "O";
                    b[1]++;
                    counter = 1;
                    continue;
                }
                if(row[1][2] == "X" && row[1][0] == " " && b[2] == 0 && counter == 0)
                {
                    row[1][0] = "O";
                    b[2]++;
                    counter = 1;
                    continue;
                }
                if(row[2][2] == "X" && row[2][0] == " " && b[3] == 0 && counter == 0)
                {
                    row[2][0] = "O";
                    b[3]++;
                    counter = 1;
                    continue;
                }
                if(row[2][1] == "X" && row[0][1] == " " && b[4] == 0 && counter == 0)
                {
                    row[0][1] = "O";
                    b[4]++;
                    counter = 1;
                    continue;
                }
                if(row[2][0] == "X" && row[0][2] == " " && b[5] == 0 && counter == 0)
                {
                    row[0][2] = "O";
                    b[5]++;
                    counter = 1;
                    continue;
                }
                if(row[1][0] == "X" && row[1][2] == " " && b[6] == 0 && counter == 0)
                {
                    row[1][2] = "O";
                    b[6]++;
                    counter = 1;
                    continue;
                }
                
            }
            count = 1;
        }
    }
    else
    if(
       (row[0][0] == "X" || row[0][2] == "X" || row[2][0] == "X" || row[2][2] == "X")
       && count == 0
       )
    {
        middle_O = true;
        row[1][1] = "O";
        for(int i = 1; i <= 4; i++)
        {
            counter = 0;
            print();
            check_tie();
            player_input();
            
            computerwins();
            
            //-------------------------------00, 10, 20------------------------------//
            if(row[2][0] == " " && row[0][0] == "X" && row[1][0] == "X" && counter == 0)
            {
                row[2][0] = "O";
                counter = 1;
                continue;
            }
            if(row[1][0] == " " && row[2][0] == "X" && row[0][0] == "X" && counter == 0)
            {
                row[1][0] = "O";
                counter = 1;
                continue;
            }
            if(row[2][0] == " " && row[1][0] == "X" && row[0][0] == "X" && counter == 0)
            {
                row[2][0] = "O";
                counter = 1;
                continue;
            }
            //-------------------------------00, 01, 02------------------------------//
            if(row[0][0] == " " && row[0][1] == "X" && row[0][2] == "X" && counter == 0)
            {
                row[0][0] = "O";
                counter = 1;
                continue;
            }
            if(row[0][1] == " " && row[0][0] == "X" && row[0][2] == "X" && counter == 0)
            {
                row[0][1] = "O";
                counter = 1;
                continue;
            }
            if(row[0][2] == " " && row[0][0] == "X" && row[0][1] == "X" && counter == 0)
            {
                row[0][2] = "O";
                counter = 1;
                continue;
            }
            //-------------------------------02, 12, 22------------------------------//
            if(row[0][2] == " " && row[1][2] == "X" && row[2][2] == "X" && counter == 0)
            {
                row[0][2] = "O";
                counter = 1;
                continue;
            }
            if(row[1][2] == " " && row[0][2] == "X" && row[2][2] == "X" && counter == 0)
            {
                row[1][2] = "O";
                counter = 1;
                continue;
            }
            if(row[2][2] == " " && row[1][2] == "X" && row[0][2] == "X" && counter == 0)
            {
                row[2][2] = "O";
                counter = 1;
                continue;
            }
            //-------------------------------20, 21, 22------------------------------//
            if(row[2][0] == " " && row[2][1] == "X" && row[2][2] == "X" && counter == 0)
            {
                row[2][0] = "O";
                counter = 1;
                continue;
            }
            if(row[2][1] == " " && row[2][0] == "X" && row[2][2] == "X" && counter == 0)
            {
                row[2][1] = "O";
                counter = 1;
                continue;
            }
            if(row[2][2] == " " && row[2][1] == "X" && row[2][0] == "X" && counter == 0)
            {
                row[2][2] = "O";
                counter = 1;
                continue;
            }
        }
        count = 1;
        if(row[0][1] == "X" || row[1][0] == "X" || row[1][2] == "X" || row[2][1] == "X")
        {
            middle_O = true;
            outloop = true;
            row[1][1] = "O";
            for(int i = 1; i <= 4; i++)
            {
                counter = 0;
                print();
                while(i>2)
                {
                    check_tie();
                }
                player_input();
                computerwins();
                
                //-------------------------------00, 10, 20------------------------------//
                if(row[2][0] == " " && row[0][0] == "X" && row[1][0] == "X" && counter == 0)
                {
                    row[2][0] = "O";
                    counter = 1;
                    continue;
                }
                if(row[1][0] == " " && row[2][0] == "X" && row[0][0] == "X" && counter == 0)
                {
                    row[1][0] = "O";
                    counter = 1;
                    continue;
                }
                if(row[2][0] == " " && row[1][0] == "X" && row[0][0] == "X" && counter == 0)
                {
                    row[2][0] = "O";
                    counter = 1;
                    continue;
                }
                //-------------------------------00, 01, 02------------------------------//
                if(row[0][0] == " " && row[0][1] == "X" && row[0][2] == "X" && counter == 0)
                {
                    row[0][0] = "O";
                    counter = 1;
                    continue;
                }
                if(row[0][1] == " " && row[0][0] == "X" && row[0][2] == "X" && counter == 0)
                {
                    row[0][1] = "O";
                    counter = 1;
                    continue;
                }
                if(row[0][2] == " " && row[0][0] == "X" && row[0][1] == "X" && counter == 0)
                {
                    row[0][2] = "O";
                    counter = 1;
                    continue;
                }
                //-------------------------------02, 12, 22------------------------------//
                if(row[0][2] == " " && row[1][2] == "X" && row[2][2] == "X" && counter == 0)
                {
                    row[0][2] = "O";
                    counter = 1;
                    continue;
                }
                if(row[1][2] == " " && row[0][2] == "X" && row[2][2] == "X" && counter == 0)
                {
                    row[1][2] = "O";
                    counter = 1;
                    continue;
                }
                if(row[2][2] == " " && row[1][2] == "X" && row[0][2] == "X" && counter == 0)
                {
                    row[2][2] = "O";
                    counter = 1;
                    continue;
                }
                //-------------------------------20, 21, 22------------------------------//
                if(row[2][0] == " " && row[2][1] == "X" && row[2][2] == "X" && counter == 0)
                {
                    row[2][0] = "O";
                    counter = 1;
                    continue;
                }
                if(row[2][1] == " " && row[2][0] == "X" && row[2][2] == "X" && counter == 0)
                {
                    row[2][1] = "O";
                    counter = 1;
                    continue;
                }
                if(row[2][2] == " " && row[2][1] == "X" && row[2][0] == "X" && counter == 0)
                {
                    row[2][2] = "O";
                    counter = 1;
                    continue;
                }
//                if(counter == 0)
//                {
//                    for(int j = 1; j <= 9; j++)
//                    {
//                        for(int k = 1; k <= j; k++)
//                        {
//                            if(row[j][k] == " ")
//                            {
//                                row[j][k] = "O";
//                                outloop = false;
//                            }
//
//                        }
//                    }
//                }
            }
        }
    }
    
    
    cout << "\n\nTIE\n\n\n";
}

int main()
{
    
    tic A;
    A.welcome();
    A.player_input();
    A.forcedmove();
    
    return 0;
}


/*
 void tic :: computerwins()
 {
     // -------------------------------------------if player is an idiot, machine wins -------------------------------------------
     
     
     //------------------------------------------00, 10, 20 -------------------------------------------
     if(
        row[1][0] == " " && row[2][0] == "O" && row[0][0] == "O" &&
        b[5] == 0 &&
        b[6] == 0 &&
        counter == 0
        )
     {
         row[1][0] = "O";
         print();
         cout << "\n\nComputer Wins\n\n\n";
         exit(0);
     }
     if(
        row[1][0] == " " && row[2][0] == "O" && row[0][0] == "O" &&
        b[5] == 0 &&
        b[6] == 0 &&
        counter == 0
        )
     {
         row[1][0] = "O";
         print();
         cout << "\n\nComputer Wins\n\n\n";
         exit(0);
     }
     if(
        row[0][0] == " " && row[1][0] == "O" && row[2][0] == "O" &&
        b[5] == 0 &&
        b[6] == 0 &&
        counter == 0
        )
     {
         row[1][0] = "O";
         print();
         cout << "\n\nComputer Wins\n\n\n";
         exit(0);
     }
     //------------------------------------------00, 01, 02 -------------------------------------------
     if(
        row[0][1] == " " && row[0][2] == "O" && row[0][0] == "O" &&
        b[0] == 0 &&
        b[1] == 0 &&
        counter == 0
        )
     {
         row[0][1] = "O";
         print();
         cout << "\n\nComputer Wins\n\n\n";
         exit(0);
     }
     if(row[0][2] == " " && row[0][1] == "O" && row[0][0] == "O" &&
        b[0] == 0 &&
        b[1] == 0 &&
        counter == 0
        )
     {
         row[0][2] = "O";
         print();
         cout << "\n\nComputer Wins\n\n\n";
         exit(0);
     }
     if(row[0][0] == " " && row[0][1] == "O" && row[0][2] == "O" &&
        b[0] == 0 &&
        b[1] == 0 &&
        counter == 0
        )
     {
         row[0][0] = "O";
         print();
         cout << "\n\nComputer Wins\n\n\n";
         exit(0);
     }
     //------------------------------------------20, 21, 22 -------------------------------------------
     if(
        (
         (row[2][0] == " " && row[2][1] == "O" && row[2][2] == "O")||
         (row[2][0] == " " && row[2][2] == "O" && row[2][1] == "O")
         ) &&
        b[5] == 0 &&
        b[4] == 0 &&
        b[3] == 0 &&
        counter == 0
        )
     {
         row[2][0] = "O";
         print();
         cout << "\n\nComputer Wins\n\n\n";
         exit(0);
     }
     if(
        (
         (row[2][1] == " " && row[2][0] == "O" && row[2][2] == "O")||
         (row[2][1] == " " && row[2][2] == "O" && row[2][0] == "O")
         ) &&
        b[5] == 0 &&
        b[4] == 0 &&
        b[3] == 0 &&
        counter == 0
        )
     {
         row[2][0] = "O";
         print();
         cout << "\n\nComputer Wins\n\n\n";
         exit(0);
     }
     if(
        (
         (row[2][2] == " " && row[2][0] == "O" && row[2][1] == "O")||
         (row[2][2] == " " && row[2][1] == "O" && row[2][0] == "O")
         ) &&
        b[5] == 0 &&
        b[4] == 0 &&
        b[3] == 0 &&
        counter == 0
        )
     {
         row[2][2] = "O";
         print();
         cout << "\n\nComputer Wins\n\n\n";
         exit(0);
     }
     //------------------------------------------02, 12, 22 -------------------------------------------
     if(
        (
         (row[0][2] == " " && row[1][2] == "O" && row[2][2] == "O")||
         (row[0][2] == " " && row[2][2] == "O" && row[1][2] == "O")
         ) &&
        b[1] == 0 &&
        b[2] == 0 &&
        b[3] == 0 &&
        counter == 0
        )
     {
         row[0][2] = "O";
         print();
         cout << "\n\nComputer Wins\n\n\n";
         exit(0);
     }
     if(
        (
         (row[1][2] == " " && row[0][2] == "O" && row[2][2] == "O")||
         (row[1][2] == " " && row[2][2] == "O" && row[0][2] == "O")
         ) &&
        b[1] == 0 &&
        b[2] == 0 &&
        b[3] == 0 &&
        counter == 0
        )
     {
         row[1][2] = "O";
         print();
         cout << "\n\nComputer Wins\n\n\n";
         exit(0);
     }
     if(
        (
         (row[2][2] == " " && row[0][2] == "O" && row[1][2] == "O")||
         (row[2][2] == " " && row[1][2] == "O" && row[0][2] == "O")
         ) &&
        b[1] == 0 &&
        b[2] == 0 &&
        b[3] == 0 &&
        counter == 0
        )
     {
         row[2][2] = "O";
         print();
         cout << "\n\nComputer Wins\n\n\n";
         exit(0);
     }
 }

 */
