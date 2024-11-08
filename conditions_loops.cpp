#include<iostream>
using namespace std;

int main() {
    int a;
    int b;
    
    //cout<<"Give a Number: ";
    char ch;
    //ch = cin.get();
    cin>>a >> b;
    
    //cout << "Your given : " << b << endl;

    /*if (a>b) {
        cout << "a is bigger" << endl;
    }
    else if(a==b){
        cout << "Both are same" << endl;
    }
    else{
        cout << "b is Bigger" << endl;
    }



    cout << ch << " is your given" << endl ;

    if (ch>'a' && ch<'z'){
        cout << "Small aphabet" << endl ;
    }
    else if (ch>'A' || ch<'M'){
        cout << "Capital Latter" << endl ;
    }
    else if (ch>0 || ch<9){
        cout << "Integer" << endl;
    }
    else{
        cout << "Unkwon" ;
    }*/

    while(a<=b){

        cout << a << endl ;
        a = a+1;
        
    }

}