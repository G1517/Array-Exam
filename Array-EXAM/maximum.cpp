#include<iostream>
using namespace std;

int main()
{
    int size , i , maximum = 0 ;

    cout << "Enter The Size Of The Array : ";
    cin >> size;

    int arr[size];
   

    for(i = 1 ; i <= size ; i++){

        cout << "Enter The Number For ["<< i <<"] Position : ";
        cin >> arr[i];

        if(maximum < arr[i])
        {
            maximum = arr[i];
        }
    }

    cout << "The Maximun Number Of The Array Is : " << maximum;
}