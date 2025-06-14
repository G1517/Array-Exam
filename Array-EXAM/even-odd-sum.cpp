#include<iostream>
using namespace std;

int main()
{
    int startNum , endNum , i , size , evenSum = 0 , oddSum = 0;

    cout << "Enter The Starting Number : ";
    cin >> startNum;

    cout << "Enter The Ending Number : ";
    cin >> endNum;

    size = endNum - startNum;
    if(size <= 0)
    {
        cout << "Please Enter Valid Numbers.";
        return 0;
    }

    int arrOdd[size] , arrEven[size];

    for(i = startNum ; i <= endNum ; i++){

        if(i % 2 == 0)
        {
            arrEven[i];
            evenSum = evenSum + i;
        }

        else
        {
            arrOdd[i];
            oddSum = oddSum + i;
        }
    }

    cout << "The Sum Of All Even Numbers Is : " << evenSum << endl;
    cout << "The Sum Of All Odd Numbers Is : " << oddSum << endl;
}