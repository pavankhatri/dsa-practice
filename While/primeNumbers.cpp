#include<iostream>
using namespace std;

int main(){
    int i = 2;
    int number;

    cout << "Enter Number \n";
    cin >> number;

    while (i < number)
    {
        if(number%i != 0){
            cout << "Not Prime for " << i << endl;
        }else{
            cout << "Prime for " << i << endl;
        }
        i++;
    }
    
}