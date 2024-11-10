#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a value for n: ";
    cin >> n;
    cout << "Counting from 1 to n: "<< endl;
    for (int i =1; i<=n; i++){
        cout << i << endl;
    }

    // we can also do this
    int j = 0;
    for(; j<n;){
        cout << j <<endl;
        j++;
    }
    
    int k = 1;
    int m = n;
    for(; ;){
        if(k<m){
            cout << k+5 << endl;
        }
        else{
            break;
        }
        k++;
    }
}