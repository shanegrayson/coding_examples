#include <iostream>
#include <climits>

#define ZERO 0

int main(void)
{
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited." << std::endl;
    std::cout << "Now, add $1 to each account." << std::endl;

    sam = sam + 1;
    sue = sue + 1;

    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited.\nPoor Sam!" << std::endl;

    sue = sam = ZERO;

    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited." << std::endl;
    std::cout << "Now, take away $1 from each account" << std::endl;

    sue -= 1;
    sam -= 1;

    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited." << std::endl << "Lucky Sue!" << std::endl;

    return ZERO;
}
