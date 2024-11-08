#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter how many row you want: ";
    cin >> row;

    int col;
    cout << "Enter how many columns you want: ";
    cin >> col;

    int i = 0;
    while(i<row){
        char ch = 'A' + i; // using the benifite of type casting

        int j = 0;
        while(j<col){
            cout << ch << " ";

            j = j + 1;
        }
        cout << endl;
        i = i+1;
    }
}