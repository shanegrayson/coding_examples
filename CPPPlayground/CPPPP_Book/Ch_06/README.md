# Chapter 6: Questions and Answers
Answer to review questions from C++ Primer Plus

**MA** -> My Answers without refering to the back of the book for an answer.

**BA** -> Book's answer to the review question.

## Question 1: 
Consider the following code fragments:

```
//version 1
while(cin.get(ch))
{
    if (ch == ' ')
        spaces++;
    if (ch == '\n')
        newlines++;
}
```

```
//version 2
while (cin.get(ch))
{
    if (ch == ' ')
        spaces++;
    else if (ch == '\n')
        newlines++;
}
```

What advantages does v2 have over v1?

**MA**:



**BA**:




## Question 2: 
In listing 6.2 what is the effect of replacing ++ch with ch+1?

**MA**:



**BA**:




## Question 3: 
Carefully consider the following program:

```
#include <iostream>
using namespace std;

int main(void)
{
    char ch;
    int ct1, ct2;
    ct1 = ct2 = 0;

    while ((ch = cin.get()) != '$')
    {
        cout << ch;
        ct1++;
        if (ch = '$')
            ct2++;
        cout << ch;
    }

    cout << "ct1= " << ct1 << ", ct2 = " << ct2 << "\n";

    return 0;
}
```

Suppose you provide the following input, pressing enter key at the end of each line:

```
Hi!
Send $10 or $20 now!
```

What is the output? (Recall that input is buffered.)

**MA**:



**BA**:




## Question 4: 
Construct logical expressions to represent the following conditions:

1. `weight` is greater than or equal to 115 but less than 125
2. `ch` is `q` or `Q`
3. `x` is even but is not 26
4. `x` is even but is not a multiple of 26
5. `donation` is in the range 1,000-2,000 or `guest` is 1
6. `ch` is a lowercase eltter or an uppercase letter. (Assume, as is true for ASCII that lowercase letters are coded sequentially and that uppercase letters are coded sequentially but that there is a gap in the between uppercase and lowercase.)

**MA**:



**BA**:




## Question 5: 
In english the statement "I will not speak" means the same as "I will speak" in C++, is `!!x` the same as `x`?

**MA**:



**BA**:




## Question 6: 
Construct a conditional expression that is equal to the absolute value of a variable. That is, if a var `x` is positive, the value of the expression is just `x`, but if `x` negative, the value of the expression is `-x`, which is positive.

**MA**:



**BA**:




## Question 7: 
Rewrite the following fragment using a switch:

```
if (ch == 'A')
    a_grade++;
else if (ch == 'B')
    b_grade++;
else if (ch == 'C')
    c_grade++;
else if (ch == 'D')
    d_grade++;
else
    f_grade++
```

**MA**:



**BA**:




## Question 8: 
In listing 6.10 what advantage would there be in using character labels, such as `a` and `c`, instead of numbers for the menu choices and switch cases? (Hint: Think about what happens if the user types `q` in either case and what happens if the user types `5` in either case.)

**MA**:



**BA**:




## Question 9: 
Consider the following code fragment:

```
int line = 0;
char ch;
while (cin.get(ch))
{
    if (ch == 'Q')
        break;
    if (ch != '\n')
        continue;
    line++;
}
```

Re-write this code without using `break` or `continue`.

**MA**:



**BA**:




