#include<iostream>
using namespace std;

int main(){

    int a;
    cout << "Enter a Value more then 3 and less then 10: "<< endl;
    cin >> a;

    int i = 0;

    while(i<a){


        int j = 0;
        while(j<a){
            cout << i+1;

            j = j + 1;
        }

        cout << endl;
        i = i+ 1;

    }

}