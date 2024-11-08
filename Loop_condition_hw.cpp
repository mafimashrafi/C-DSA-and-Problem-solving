#include<iostream>
using namespace std;

int main(){
    int a, b;

    cout << "Enter a value for a: "<< endl;
    cin >> a;

    cout << "Enter a value for b: "<< endl;
    cin >> b;
    

    int sum = 0 ;
    while (a<=b){

        if (a%2==0){
            cout << a << endl;
            sum = sum + a;
        }

        a = a + 1 ;
    }

    cout << "Sum: " << sum << endl;
}