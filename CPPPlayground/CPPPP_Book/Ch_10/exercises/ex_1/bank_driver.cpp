#include <iostream>
#include "bank.h"

int main(void)
{
    /* I am using the extra brackets for the destructor */
    {
        Bank *no_user = new Bank();
        Bank *new_user = new Bank("shane", 123213, 420.69);

        no_user->show();
        new_user->show();
        new_user->deposit(123213, 50.23);
        new_user->show();
        new_user->withdraw(123213, 470.91);
        new_user->show();

        return 0;
    }
}