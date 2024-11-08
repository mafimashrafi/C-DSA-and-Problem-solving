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
    char ch = 'A'; // using the benifite of type casting
    while(i<row){
        int j = 0;
        while(j<col){
            char ch1 = ch + j;
            cout << ch1 << " ";

            j = j + 1;
        }
        cout << endl;
        ch = ch + j; // modify added value to manupolate
        i = i + 1;
    }
}