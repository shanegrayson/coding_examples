/*
 * Chapter 3: floatnum.cpp - pg. 95
 * This program did not compile correctly when
 * I removed the "using namespace std"
 * something to do with the setf() method I guess
 */
#include <iostream>

int main(void)
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield); //fixed point

    float tub = 10.0 / 3.0;     //Good to about 3 places
    double mint = 10.0 / 3.0;   //Good to about 15 plafes
    const float million = 1.0e6;

    cout << "a tub = " << tub;
    cout << ",\na million tubs = " << million * tub;
    cout << ",\nand 10 million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "Mint = " << mint << " and a million mints = ";
    cout << million * mint << endl;

    return 0;
}
