#include<iostream>
using namespace std;

void arrayPrint(int arr[], int size){

     for(int i=0; i<size; i++){
        cout << arr[i] << endl;
     }
}

void chArrayPrint(char arr[], int size){

    for (int i=0; i<size; i++){
        cout <<arr[i];
    }
    cout << endl;
}

// void arrayInput(int arr[], int size){

// //     for(int i=0; i<size; i++){
// //         cin >> arr[i];

// //     }
// //     arrayPrint(arr);
// }

int main(){

    int number[15] = {4, 5, 6};
    char name[8] = {'M','A','S','H','R','A','F','I'};
    chArrayPrint(name, 8);

    int size = sizeof(number)/sizeof(int);
    cout << "Size of array : "<< size << endl<<endl;

    arrayPrint(number, 15);

}