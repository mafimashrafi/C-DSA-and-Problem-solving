#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a value: ";
    cin >> a;

    int i = 0;
    while(i<a){
        int j = 1;
        while (j<=4){

            if (j<4){cout << j << "->";}
            else{cout<< j << endl;}

            j = j + 1;
        }

        i = i + 1;
    }
}