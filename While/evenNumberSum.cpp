#include<iostream>
using namespace std;

int main() {
    int n;
    int  i = 0;
    int sum = 0;
    cout << "Enter Value of n \n" ;
    cin >> n;
    while (i<=n)
    {
        if(i%2 == 0){
            sum = sum + i;
        }
        i++;
    }
    cout << sum << endl;
}