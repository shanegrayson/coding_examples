#ifndef INDEX_CARDS_H_
#define INDEX_CARDS_H_

#include <iostream>
#include <fstream>
#include <string>

class Card
{
private:
    std::string question;
    std::string answer;

public:
    Card();
    Card(std::string q, std::string a);
    ~Card();
    void setQuestion(std::string q);
    void setAnswer(std::string q);
    void showAnswer();
    void showQuestion();
};

#endif