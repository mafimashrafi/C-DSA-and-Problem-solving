#include<iostream>
using namespace std;

int main(){
    int a;
    int row;

    cout << "Enter a value: ";
    cin >> a;

    cout << "How many row do you want: ";
    cin >> row;

    if(row>a){
        cout<< "Row is bigger then value."<< endl;
        cout<< "Give a smaller row number, please : ";
        cin >> row;
    }

    int i = 0;
    int j = 1;

    while( i < row){

        int k = 0;
        int x = a/row ; 

        while(k<(a/row)){
            cout << j << " " ;

            j = j + 1 ;
            k = k + 1;
        }

        cout << endl;
        i = i + 1;
    }

}