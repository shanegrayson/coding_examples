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

1. Automatic storage duration. Let compiler decided.
2. Static storage durations. File1 would just have it defined globally while file2 would have `extern`
3. Static storage duration. Would use `static` linkage
4. Static storgae duration. Would us `static` variable to keep track.

**BA**:

1. `homer` is automatically an automatic variable.
2. `secret` should be defined as an external variable in one file then `externed` in the other file.
3. `topsecret` cou8ld be defined as a static variable with interal linkage bt prefacing the external definition with the keyword static. Or it could be defined in an unnamed namespace.
4. `beencalcled` should be defined as a local static varaible by prefacing the declaration with the keyword static.

## Question 2: 
Describe the difference between a `using` declaration and a `using` directive:

**MA**:

1. `using` declaration lets you make particular identifiers available. For example: `using std::cout;`
2. `using` directive makes the entire namespace accessible. For example: `using namespace std;`

**BA**:

A using declaration makes available a single name from a namespace, and it has scope corresponding to the declartive region in which the using declaration occurs. A using directive makes available all the names in the namespace. When you use a using directive, it is as if you have declaredc hte names in the smallest declartive region containing both the using declaration and the namespace itself.

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

```
#include <iostream>
//using namespace std;

int main(void)
{
    double x;
    
    std::cout << "Enter value: ";
    while (! (std::cin >> x))
    {
        std::cout << "Bad input: Please entere a number: ";
        std::cin.clear();
        while (std::cin.get() != '\n')
            continue;
    }
    std::cout << "Value = " << x << std::endl;

    return 0;
}
```

**BA**:

```
#include <iostream>
int main(void)
{
    double x;
    
    std::cout << "Enter value: ";
    while (! (std::cin >> x))
    {
        std::cout << "Bad input: Please entere a number: ";
        std::cin.clear();
        while (std::cin.get() != '\n')
            continue;
    }
    std::cout << "Value = " << x << std::endl;

    return 0;
}
```

## Question 4: 
Rewrite the following so that it uses `using` declarations but not `using` directives:

```
#include <iostream>
//using namespace std;

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

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

```
#include <iostream>
//using namespace std;

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

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

**BA**:

```
#include <iostream>
int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;
    
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

## Question 5: 
Suppose you want the average(3, 6) function to return an int average of the two int arguments when it is called in one file, and you want it to return a double average of the two int arguments when it is called in the second file in the same program. How could you set this up?

**MA**:

Do not have the prototype in the header file, instead have the prototypes seperatly defined in each file, except have them prefaced with `static` to give them internal linkage to their own file, and have one return `int` and the other `double`.

**BA**:

You can have sepertate static definitions in each file. Or, each file can define the appropriate function in an unnamed namespace.

*file1.cpp*
```
namesapce
{
    int average(int x, int y)
}
```

*file2.cpp*
```
namesapce
{
    double average(int x, int y)
}
```

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
    other();
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

```
10
4
Other: 10, 1
another(): 10, -4
```
Forgot that y has a value automatically instatiated.

**BA**:

```
10
4
0
Other: 10, 1
another(): 10, -4
```

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

```
1
4, 1, 2
2
2
4, 1, 2
2
```

**BA**:

```
1
4, 1, 2
2
2
4, 1, 2
2
```