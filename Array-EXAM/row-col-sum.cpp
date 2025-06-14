#include<iostream>
using namespace std;

int main()
{
    int row , col , i , j , rowSum = 0, colSum = 0, rowNum , colNum;

    cout << "Enter The Size Of The Row : ";
    cin >> row;

    cout << "Enter The Size Of The Col : ";
    cin >> col;

    int arr[row][col];
   

    for(i = 1 ; i <= row ; i++)
    {
       for(j = 1 ; j <= col ; j++)
        {
           cout << "Enter The Number For ["<< i <<"]["<< j <<"] Position : ";
           cin >> arr[i][j];
        }
    }

     for(i = 1 ; i <= row ; i++)
    {
       for(j = 1 ; j <= col ; j++)
        {
           cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter The Row You Want To Sum : ";
    cin >> rowNum;

    for(i = rowNum ; i <= rowNum ; i++)
    {
       for(j = 1 ; j <= col ; j++)
        {
           rowSum = rowSum + arr[i][j];
        }
        cout << endl;
    }

    cout << "The Sum Of The " << rowNum << " is : " << rowSum << endl ;

    cout << "Enter The Col Number You Want To Sum : ";
    cin >> colNum;

    for(i = 1 ; i <= row ; i++)
    {
       for(j = colNum ; j <= colNum ; j++)
        {
           colSum = colSum + arr[i][j];
        }
        cout << endl;
    }

    cout << "The Sum Of The " << colNum << " is : " << colSum;
}