/*
 * Chapter 7: Exercise 3:
 * Box structure
 */

#include <iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display(box name);
void sets(box * name);

int main(void)
{
    box box1;
    box *pb = &box1;

    cout << "Maker's name: ";
    cin.get(box1.maker, 40);

    cout << "Height of box: ";
    cin >> box1.height;

    cout << "Width of box: ";
    cin >> box1.width;

    cout << "length of box: ";
    cin >> box1.length;

    cout << "volume of box: ";
    cin >> box1.volume;

    display(box1);

    sets(pb);

    return 0;
}

//pass by value
void display(box name)
{
    cout << "Maker: " << name.maker << endl;
    cout << "Height: " << name.height << endl;
    cout << "Width: " << name.width << endl;
    cout << "Length: " << name.length << endl;
    cout << "Volume: " << name.volume << endl;
}

//pass by address
void sets(box * name)
{
    cout << "Resetting Box1's data..." << endl;

    /* 
     * Choose to set the first element to NULL
     * that way when the outout wouldnt print anything
     * Could also do a for loop and replace all values
     * with blanks, but I like this method.
     */ 
    name->maker[0] = '\0';
    name->height = 0;
    name->width = 0;
    name->length = 0;
    name->volume = 0;

    cout << "Maker: " << name->maker << endl;
    cout << "Height: " << name->height << endl;
    cout << "Width: " << name->width << endl;
    cout << "Length: " << name->length << endl;
    cout << "Volume: " << name->volume << endl;

    cout << "New Maker: ";
    cin.get();
    cin.get(name->maker, 40);

    cout << "Maker Again: " << name->maker << endl;
}

