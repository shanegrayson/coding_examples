#include "index_cards.h"

Card::Card()
{
    this->question = "Blank";
    this->answer = "Blank";
}

Card::Card(std::string q, std::string a)
{
    this->question = q;
    this->answer = a;
}

Card::~Card()
{

}

void Card::setQuestion(std::string q)
{
    this->question = q;
}

void Card::setAnswer(std::string a)
{
    this->answer = a;
}

void Card::showQuestion()
{
    std::cout << "Question: " << this->question << std::endl;
}

void Card::showAnswer()
{
    std::cout << "Answer: " << this->answer << std::endl;
}