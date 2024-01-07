#include<iostream>
using namespace std;

int main(){
    int fahrenheit;

    cout << "Please Enter fahrenheit value \n";
    cin >> fahrenheit;

    int celsius;

    celsius = ( fahrenheit - 32 ) * 5/9;

    cout << "celsius value : " << celsius << endl;
}