#include <iostream>
#include <string>
#include<math.h>
using namespace std;

// Function to convert a positive decimal number to binary
int onescomp(int n){
    int ans = 1;
    int i = 0;

    while(n!=0){
        int bit = n&1;
        ans = (((bit ^ 1)*pow(10, i))+ans);

        n = n>>1;
        i++;
    }
    return ans;
}
string decimalToBinary(int n) {
    string binary = "";
    // while (n > 0) {
    //     binary = to_string(n % 2) + binary; // Prepend the remainder (0 or 1)
    //     n /= 2; // Divide by 2
    int ans = 1;
    int i = 0;
    while (n!=0){
        int bit = n&1;

        ans = ((bit*pow(10, i))+ans);

        n = n>>1;
        i++;
    }
    binary = to_string(ans);
    int ans1 = onescomp(ans);
    binary = to_string(ans1);
    return binary;
}

// Function to convert a negative decimal number to binary using two's complement
string negativeDecimalToBinary(int n) {
    // Step 1: Ignore the negative sign
    n = n * (-1); // Make n positive

    // Step 2: Convert the absolute value to binary
    string binary = decimalToBinary(n);



    // Step 3: Pad the binary string to 8 bits (or any desired bit length)
    while (binary.length() < 8) { //.length gives lenth of an string
        binary = "1" + binary; // Pad with leading zeros so that 5 er binary 3 ta digit baki 5 ta digit 0 diye 8 ta korbe
    }
    

    // Step 5: Add 1 to the one's complement to get the two's complement
    string twosComplement = "";
    int carry = 1; // Start with the carry of 1 for addition
    for (int i = binary.length() - 1; i >= 0; i--) {
        int sum = (binary[i] - '0') + carry; // Convert char to int and add carry
        if (sum == 2) {
            twosComplement = '0' + twosComplement; // 2 becomes 0 with carry 1
            carry = 1;
        } else if (sum == 1) {
            twosComplement = '1' + twosComplement; // 1 becomes 1 with no carry
            carry = 0;
        } else {
            twosComplement = '0' + twosComplement; // 0 remains 0 with no carry
            carry = 0;
        }
    }

    // If there's still a carry left, we can ignore it for 8-bit representation
    return twosComplement;
}

int main() {
    int negativeNumber = -5; // Example negative number
    string binaryRepresentation = negativeDecimalToBinary(negativeNumber);
    
    cout << "The binary representation of " << negativeNumber << " is: " << binaryRepresentation << endl;
    
    return 0;
}