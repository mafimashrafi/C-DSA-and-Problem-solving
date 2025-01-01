#include<iostream>
using namespace std;

int getMax(int arr[], int size){
    int max = INT8_MIN;

    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int size){
    int min = INT8_MAX;

    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}


int main(){
    int size;
    cin >> size;
    
    int number[10];

    for(int i=0; i<size; i++){
    cin >> number[i];
    }

    cout << "Max number of this array is "<< getMax(number, size)<< endl;
    cout << "Min number of this array is "<< getMin(number, size)<< endl;
}