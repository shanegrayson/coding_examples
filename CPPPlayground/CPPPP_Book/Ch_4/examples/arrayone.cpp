/*
 * Chapter 4: arrayone.cpp - pg 117-118
 * Small arrays of integers.
 */

#include <iostream>
#include <cstring>

int main(void)
{
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;
    
    int yamscost[3] = { 20, 30, 5 };

    std::cout << "Total yams = " << yams[0] + yams[1] + yams[2] << std::endl;
    std::cout << "The package with yams " << yams[1] << " costs " << yamscost[1]
        << " cents per yams." << std::endl;

    int total = yams[0] * yamscost[0] + yams[1] * yamscost[1];
    total += yams[2] * yamscost[2];

    std::cout << "The total yam expenses is " << total << " cents." << std::endl;

    std::cout << "The sizeof yams is " << sizeof yams << " in bytes.\n";
    std::cout << "Size of one element is " << sizeof yams[0] << " in bytes.\n";

    std::cout << "Here is a way to find out how many elements are in an array:\n";
    std::cout << "First, make an array:\nSuch as: int a[6] = { 1,1,1,1,1,1 }\n";

    int a[6] = { 1,1,1,1,1,1 };

    std::cout << "Then do sizeof an element of the array, then sizeof the array.\n";
    std::cout << "Such as sizeof(a[0]) and sizrof(a).\n";

    int size_of_array_ele = sizeof(a[0]);
    int size_of_array = sizeof(a);

    std::cout << "Now divide the two values.\n";

    int ele_in_array = size_of_array / size_of_array_ele;

    std::cout << "The size of an array element is " << size_of_array_ele << std::endl;
    std::cout << "The size of the array is " << size_of_array << std::endl;
    std::cout << "Elements in an array are : " << ele_in_array << std::endl;

    std::cout << "Now letd try sizeof(a) / sizeof(a[0]): " << sizeof(a) / sizeof(a[0])
        << std::endl;

    return 0;
}
