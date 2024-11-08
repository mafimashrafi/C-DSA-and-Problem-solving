#include<iostream>
using namespace std;

int main(){
    int row;
    int col;
    cout << "How many row you want: ";
    cin >> row;
    cout << "How many column you want: ";
    cin >> col;

    int i = 0;
    while(i<row){
        int j = 0;
        while(j<col-i-1){
            cout << " " ;
            j = j + 1;
        }

        int k = 0;
        while(k<=i){
            cout << "$";
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }
}