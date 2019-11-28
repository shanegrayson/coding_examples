/*
 * Chapter 6: Exercise 8 - pg 303
 * Read from file
 */

#include <iostream>
#include <fstream>
#include <cstdlib>

int main(void)
{
    using namespace std;

    ifstream inFile;
    char filename[] = "text_file.txt";
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Error with trying to openfile.\n";
        exit(EXIT_FAILURE);
    }

    cout << "Read character in file: " << filename << endl;
    
    char ch;
    int ch_count = 0;
    inFile >> ch;
    while (inFile.good()) 
    {
        ++ch_count;
        inFile >> ch;
    }

    if (inFile.eof())
        cout << "Reached end of file\n";
    else if (inFile.fail())
        cout << "An mismatch has occured\n";
    else
        cout << "Unknown Error\n";

    if (ch_count == 0)
        cout << "No data was processed...\n";
    else
        cout << "Total characters in the file: " << ch_count << endl;

    return 0;
}
