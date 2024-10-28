#include<iostream>
#include<iomanip>
using namespace std;
int fill(int **ptr,int row_size,int column_size);
int print(int **ptr,int row_size,int column_size);
int main()
{
    int **board;       //firstly we initialize the double poiunter to point the array in dynamic memory
    int row;
    int column;
    cout<<"Enter the Row Size :";
    cin>>row;
    cout<<"Enter the Column Size: ";
    cin>>column;
    board = new int*[row];
    for (int i=0;i<row;i++)
    {
        board[i] = new int [column];
    }
    //now time for Function call
    fill(board,row,column);
    cout<<"Next Line :";setw(5);cout<<endl;
    print(board,row,column);
}
int fill(int **ptr,int row_size,int column_size)
{
    for (int row=0;row<row_size;row++)
    {
        for (int column=0;column<column_size;column++)
        {
            cin>>ptr[row][column];
        }
    }
}
int print(int **ptr,int row_size,int column_size)
{
     for (int row=0;row<row_size;row++)
    {
        for (int column=0;column<column_size;column++)
        {
            cout<<ptr[row][column]<<"                ";
        }cout<<endl;
    }
}