#include<iostream>
using namespace std;
int main(){
    int a = 0;
    int b = 1;
    int n;

    cout << "Enter how many pibonacci you want (more then 2): ";
    cin >> n;

    cout << a <<endl;
    cout << b <<endl;

    for (int i =0; i<n; i++){
        int x = a + b;
        cout << x <<endl;
        a = b;
        b = x;
    }
}