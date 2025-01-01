#include<iostream>
using namespace std;

int arrayReverse(int arr[], int size, int s2){
    if(size == 0){
        cout <<"Reverse of the given array [2,5,7,9]:"<<" ";
        for(int i=0; i<s2; i++){
            cout << arr[i] <<" ";
        }
        cout<<endl;
    }
    int shortenSize = size-1;
    for(int i = 0; i<shortenSize; i++){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }

    arrayReverse(arr, shortenSize, 4);
}

int main(){
    int num[4]={2, 5, 7, 9};
    int size = 4;

    int halfSize = 4/2;

    // for(int i=1; i<2; i++){
    //     int temp = num[i-1];
    //     num[i-1] = num[size-i];
    //     num[size-i] = temp;
    // }

    //using pointer
    int start = 0;
    int end = size-1;
    for(int i=0; i<halfSize; i++){
        int temp=num[start];
        cout <<temp<<endl;
        num[start] = num[end];
        num[end] = temp;
        start++;
        end--;
        
    }

    arrayReverse(num, 4, 4);
}