#include "ffxiv_header.h"

/*
 * Gameplan: We are going to pretend we have BiS except for our Helmet.
 * We are going to then find the perfect helmet for out build
 */
int
main(void)
{
    using std::cout;
    using std::endl;

    Helm *Best = new Helm();
    Helm *EDGF = new Helm("Eden Grace Helm of Fending", 303, 324, 0, 185, 0, 0, 264, 0, 0, savage_aim, quick_arm);
    Helm *ADSF = new Helm("Augnemnted Deepshadow Helm of Fending", 303, 324, 264, 0, 0, 185, 0, 0, 0, savage_aim, quick_arm);
    Helm *DSF = new Helm("Deepshadow Helm of Fending", 287, 302, 256, 0, 0, 179, 0, 0, 0, savage_aim, quick_arm);
    Helm *Y51F = new Helm("YoRHa Type-51 Headband of Fending", 287, 302, 179, 256, 0, 0, 0, 0, 0, savage_aim, quick_arm);

    Helm *Head[4] = { Y51F, ADSF, EDGF, DSF };

    *Best = *Head[0];
    for (int i = 0; i < 4; i++)
        *Best = Compare(*Best, *Head[i]);

    cout << "\n\nThe best is...\n\n";
    Best->Show();

    for (int i = 0; i < 4; i++)
        Head[i]->~Helm();

    return 0;
}