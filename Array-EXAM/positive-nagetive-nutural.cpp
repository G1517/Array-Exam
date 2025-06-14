#include<iostream>
using namespace std;

int main()
{
    int size , i , countPositive = 0 , countNagative = 0 , countNutural = 0;

    cout << "Enter The Size Of The Array : ";
    cin >> size;

    int arr[size];
   

    for(i = 1 ; i <= size ; i++)
    {
        cout << "Enter The Number For ["<< i <<"] Position : ";
        cin >> arr[i];

        
        if(arr[i] == 0)
        {
            cout << arr[i] << " This Value Is Nutral\n" << endl;   
            countNutural++; 
        }

        else if(arr[i] < 0)
        {
            cout << arr[i] << " This Value Is Nagetive\n" << endl;
            countNagative++;
        }

        else
        {
             cout << arr[i] << " This Value Is Positive\n" << endl;
             countPositive++;
        }
    }

    cout << "The Total Nutural Number Is : " << countNutural << endl;
    cout << "The Total Nagetive Number Is : " << countNagative << endl;
    cout << "The Total Positive Number Is : " << countPositive << endl;
}