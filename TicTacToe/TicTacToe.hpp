#include <iostream>
#include <string>

using namespace std;

class TicTacToe
{
  string user1,user2;
  char board[4][4];
  
  public:
    TicTacToe();
    void setUserName(string name1, string name2);
    void setBoard();
   
    int checkWinner(char c);
    int checkRow(char c);
    int checkColumn(char c);
    int checkDiagonal(char c);
    
    void printBoard();
};

TicTacToe::TicTacToe()
{
    user1 = "Unknown" ;
    user2 = "Unknown" ;
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            board[i][j] = '-';
}

void TicTacToe::setUserName(string name1, string name2)
{
    user1 = name1;
    user2 = name2;
}

void TicTacToe::setBoard()
{
    int pos = 0;
    for(int i=0; i<16; i++)
    {
        if (i%2==0)
        {
            cout<<user1<<" enter the grid position (1-16) \n";
            cin>>pos;
            --pos;
            board[pos/4][pos%4] = 'x';
            if (checkWinner('x'))
            {
                printBoard();
                cout<<user1<<" is the winner"<<endl;
                break;
            }

        }
        else
        {
            cout<<user2<<" enter the grid position (1-16) \n";
            cin>>pos;
            --pos;
            board[pos/4][pos%4] = 'o';
            if (checkWinner('o'))
            {
                printBoard();
                cout<<user2<<" is the Winner"<<endl;
                break;
            } 
        }
    }
    if (checkWinner('x') == 0 && checkWinner('o') == 0)
    {
        printBoard();
        cout<<"Game is tied"<<endl;
    }
}

void TicTacToe::printBoard()
{   
    cout<<"\n";
    cout<<"User 1: "<<user1<<endl;
    cout<<"User 2: "<<user2<<endl;
    cout<<"\n";
    for(int i=0; i<4; i++)
        {
            for (int j=0; j<4; j++)
                cout<<board[i][j]<<"\t";
            cout<<"\n";
        }
    cout<<"\n";    
}

int TicTacToe::checkRow(char c)
{
    int count;
    for(int i=0; i<4; i++)
    {   count = 0;
        for(int j=0; j<4; j++)
        {
            if (board[i][j] == c)
                count++;
        }
        if (count == 4)
        {
            cout<<"Same Row"<<endl;
            return 1;
        }
    }
    return 0;
}

int TicTacToe::checkColumn(char c)
{
    int count;
    for(int i=0; i<4; i++)
    {   count = 0;
        for(int j=0; j<4; j++)
        {
            if (board[j][i] == c)
                count++;
        }
        if (count == 4)
        {
            cout<<"Same Column"<<endl;
            return 1;
        }
    }
    return 0;
}

int TicTacToe::checkDiagonal(char c)
{
    int count1 = 0, count2 = 0;
    for(int i=0; i<4; i++)
    { 
        for(int j=0; j<4; j++)
        {
            if (i==j)
            {
                if (board[i][j] == c)
                    count1++;
            }
            else if (i+j == 3)
            {
                if (board[i][j] == c)
                    count2++;
            }
        }
    }

if (count1 == 4 || count2 == 4)
{
    cout<<"Same Diagonal"<<endl;
    return 1;
}

else
    return 0;
}

int TicTacToe::checkWinner(char c)
{
    if (checkRow(c) || checkColumn(c) || checkDiagonal(c))
        return 1;
    else
        return 0;
}