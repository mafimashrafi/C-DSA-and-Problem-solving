#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "How many row you want: ";
    cin >> row;


    int i = 0;
    while(i<row){
        int j = 0;
        while(j<row-i-1){
            cout << " " ;
            j = j + 1;
        }

        int k = 0;
        while(k<=i){
            cout << k + 1;
            k = k + 1;
        }

        int x = i;
        while(x){
            cout << x ;
            x = x - 1;
        }
        cout << endl;
        i = i + 1;
    }
}