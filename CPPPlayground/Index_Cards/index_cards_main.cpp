#include "index_cards.h"

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    //Using TDD or Test Driven Development
    int deckSize;
    std::string userQ, userA;

    system("CLS"); //used to clear CLI
    cout << "Welcome to Shane's Flash Card Application!" << endl;
    cout << "How many card in the deck?" << endl;
    cin >> deckSize;
    cin.get();

    Card card[deckSize];
    
    int i = 0;
    while (i < deckSize)
    {
        cout << "Question: ";
        getline(cin, userQ);
        card[i].setQuestion(userQ);

        cout << "Answer: ";
        getline(cin, userA);
        card[i].setAnswer(userA);
        i++;
    }

    int userInput = 0;
    int flip = 0;
    while (userInput != -1)
    {
        system("CLS"); //used to clear CLI
        cout << "Which card would you like to see?" << endl;
        cin >> userInput;
        cin.get();

        if (userInput > deckSize || userInput < 1)
            cout << "Nice try!" << endl;
        else
        {
            card[userInput - 1].showQuestion();
            cout << "Flip Card? '1' to flip, anything else to pass...";
            cin >> flip;
            if (flip == 1)
            {
                card[userInput - 1].showAnswer();
            }
        }
        userInput = 0;
        cin.get();
        cout << "Press Enter to continue or -1 to quit...";
        cin >> userInput;
        cin.ignore();
    }

    return 0;
}