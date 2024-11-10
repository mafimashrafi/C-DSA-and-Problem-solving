#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number to test: ";
    cin >> n;

    bool flag = 1;

    for (int i=2; i<n; i++){
        if (n%i==0){
            cout << n << " is not a prime number";
            flag = 0;
            break;
        }
        
    }
    if (flag == 1){
        cout << n << " is a prime number";
    }
}