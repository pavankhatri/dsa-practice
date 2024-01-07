#include<iostream>
using namespace std;

int main(){

    int row;
    cout << "Please Enter value of n \n";
    cin >> row;
    int i = 1;

    while (i <= row)
    {
        int j = 1;
        while (j <= row)
        {
            cout << i; // if you need to print * then only replace with i 
            j++;
        }
        cout<<endl;
        i++;
    }
    
}