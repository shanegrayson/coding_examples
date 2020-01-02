# Chapter 9: Questions and Answers
Answer to review questions from C++ Primer Plus

**MA** -> My Answers without refering to the back of the book for an answer.

**BA** -> Book's answer to the review question.

## Question 1: 
What storage scheme would you use for the following situations?

1. `homer` is a formal argument (parameter) to a function.
2. The `secret` variable is to be shared by two files
3. The `topsecret` variable is to be shared by the funciton in one file but hidden from other files
4. `beencalled` keeps track of how many times the function containing it has been called.

**MA**:

1. Stuff
2. Stuff
3. Stuff
4. Stuff

**BA**:

1. Stuff
2. Stuff
3. Stuff
4. Stuff

## Question 2: 
Describe the difference between a `using` declaration and a `using` directive:

**MA**:

Stuff

**BA**:

Stuff

## Question 3: 
Rewrite the following so that it doesn't use `using` declarations or `using` directives:

```
#include <iostream>
using namespace std;

int main(void)
{
    double x;
    
    cout << "Enter value: ";
    while (! (cin >> x))
    {
        cout << "Bad input: Please entere a number: ";
        cin.clear();
        while (cin.get() != '\n')
            continue;
    }
    cout << "Value = " << x << endl;

    return 0;
}
```

**MA**:



**BA**:



## Question 4: 
Rewrite the following so that it uses `using` declarations but not `using` directives:

```
#include <iostream>
using namespace std;

int main(void)
{
    double x;
    
    cout << "Enter value: ";
    while (! (cin >> x))
    {
        cout << "Bad input: Please entere a number: ";
        cin.clear();
        while (cin.get() != '\n')
            continue;
    }
    cout << "Value = " << x << endl;

    return 0;
}
```

**MA**:



**BA**:



## Question 5: 
Suppose you want the average(3, 6) function to return an int average of the two int arguments when it is called in one file, and you want it to return a double average of the two int arguments when it is called in the a second file in the same program. How could you set this up?

**MA**:



**BA**:



## Question 6: 
What does the following two file program display?

*file1.cpp*
```
#include <iostream>
using namespace std;
void other();
void another();

int x = 10;
int y;

int main(void)
{
    cout << x << endl;
    {
        int x = 4;
        cout << x << endl;
        cout << y << endl;
    }
    outher();
    another();

    return 0;
}

void other(void)
{
    int y = 1;
    cout << "Other: " << x << ", " << y << endl;
}
```

*file2.cpp*
```
#include <iostream>
using namespace std;
extern int x;

namespace
{
    int y = -4;
}

void another(void)
{
    cout << "another(): " << x << ", " << y << endl;
}
```

**MA**:



**BA**:



## Question 7: 
What will the following program display?

```
#include <iostream>
using namespace std;

void other(void);

namespace n1
{
    int x = 1;
}

namespace n2
{
    int x = 2;
}

int main(void)
{
    using namespace n1;
    cout << x << endl;
    {
        int x = 4;
        cout << x << ", " << n1::x << ", " << n2::c << endl;
    }

    using n2::x;
    cout << x << endl;
    other();

    return 0;
}

void other()
{
    using namespace n2;

    cout << x << endl;
    {
        int x = 4;
        cout << x << ", " << n1::x << ", " << n2::x << endl;
    }
    using n2::x;
    cout << x << endl;
}
```

**MA**:



**BA**:




