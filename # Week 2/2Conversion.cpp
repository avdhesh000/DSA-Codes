// Binary to Decimal Conversion and vice-versa
#include<iostream>
using namespace std;

void BinarytoDecimal(int BinaryNumber) {
    int n = BinaryNumber;
    int DecNum=0;
    int pow = 1;   // 2^0 = 1 after update 2^1 = 2 and etc
    int LastDigit;

    while(n > 0) {
        LastDigit = n % 10;
        DecNum = DecNum + LastDigit * pow;
        pow = pow * 2;
        n = n / 10;
    }
    cout<<"Decimal of "<<BinaryNumber<<" = "<<DecNum<<endl;
}

void DecimaltoBinary(int DecimalNumber) {
    int n =  DecimalNumber;
    int BinNum=0;
    int pow = 1;   // 10^0 = 1;
    int LastDigit;

    while(n > 0) {
        LastDigit = n % 2;
        BinNum = BinNum + LastDigit * pow;
        pow = pow * 10;   // 10*1 = 10:  10*10=100:....
        n = n / 2;
    }
    cout<<"Binary of "<<DecimalNumber<< " = "<<BinNum<<endl;
}

int main() {
    BinarytoDecimal(111);
    BinarytoDecimal(10000);

    DecimaltoBinary(7);
    DecimaltoBinary(16);
    return 0;
}



