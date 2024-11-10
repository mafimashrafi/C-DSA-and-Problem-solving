#include<iostream>
using namespace std;

int main(){

    int a = 4;
    int b = 6;

    cout<<"a and b: ";
    cout<< (a&b) << endl;
    
    cout<<"a or b; ";
    cout<< (a|b) <<endl;

    cout << "a not: " << (~a) << endl;
    cout << "a x-or b: "<<(a^b)<< endl;

    cout << (17>>1) << endl;
    cout << (8>>2) << endl;
    cout << (19<<1) << endl;
    cout << (21<<2);

}