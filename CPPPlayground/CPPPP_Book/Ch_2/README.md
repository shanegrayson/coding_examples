# Chapter 2: Questions and Answers
Answer to review questions from C++ Primer Plus

**MA** -> My Answers without refering to the back of the book for an answer.

**BA** -> Book's answer to the review question.

## Question 1: 

What are the modules of the C++ Programming language called?

**MA**: 

Functions

**BA**: 

They are called functions

## Questions 2: 

What does the following Preprocessor Directive do?

```
#include <iostream>
```

**MA**: 

This brings in the istream and ostream header files.

**BA**: 

It causes the contents of the iostream file to be substituted for this directive before final compilation.

## Questions 3:

What does the following statement do?

```
using namespace std
```

**MA**: 

Determing on where it is placed it lets you use the namespace std (which i dont recall the book mentioning what it is called) thought the scope of which it is declared.

**BA**:

It makes definitions made in the std namespace available to a program.

## Questions 4:

What statement would you use to print the phrase "Hello, World" and then start a new line?

**MA**:

```
std::cout << "Hello, World" << std::endl;

\\or

std::cout << "Hellow, World\n";
```

**BA**:

```
std::cout << "Hello, World" << std::endl;

\\or

std::cout << "Hellow, World\n";
```

## Questions 5:

What statement would you use to create an integer variable with the name `cheese`?

**MA**:

```
int cheese;
```

**BA**:

```
int cheese;
```

## Questions 6:

What statement would you use to assign the value 32to the variable `cheese`

**MA**:

```
cheese = 32;
```

**BA**:

```
cheeses = 32;
```

## Questions 7:

What statement would you use to read a value from keyboard input into the variable `cheese`?

**MA**:

```
std::cin >> cheese;
```

**BA**:

```
cin >> cheeses;
```

## Questions 8:

What statement would you use to print "We have X varieties of cheese," where the current value of the `cheese` variable replaces X.

**MA**:

```
std::cout << "We have " << cheese << " varieties of cheese << std::endl;
```

**BA**:

```
cout << "We have " << cheeses << " varieties of cheese\n";
```

## Questions 9:

What dot he following function prototypes tell you about the functions?

```
int froop(double t);
void rattle(int n);
int prune(void);
```

**MA**:

`int froop(double t)` is taking in a double variable type and returning an int type to the function caller.

`void rattle(int n)` is taking in an integer variable type but does not return anything.

`int prune(int)` is taking in an integer variable type and returning an integer type to the calling function.

**BA**:

The fucntion `froop()`expects to be called with on argument, which will be the type `double`, and that the function will return a type `int` value. For instance, it could be used as follows:

```
int gval = froop(3.14);
```

The funtion `rattle()` has no return value and expect an int argument. For isntance, it could be used as follows:

```
rattle(37);
```

The function `prune()` returns an `int` and expects to be used without an argument. For instance, it could used as follows:

```
int residue = prune();
```

## Questions 10:

When do you not have to use the keyword return when you define a function?

**MA**:

When the function return type is `void`. But, if I recall correctly, sometimes the C++ Compiler you are using might assume a return type of 0 is one is not stated.

**BA**:

You dont have to use `return` in a function when the function has the return type `void`. However, you can use it if you don't give a return value:

```
return;
```

## Question 11:

Suppose your main() has the following line:

```
cout << "Please enter your PIN:";
```

And suppose the compiler complains that cout is an unknownidentifier. What is the likely cause of this complain, and what are the three ways to fix the problem?

**MA**:

1. You could add `std` name space to the cout, like so: `std::cout`,
2. You could add the `using namespace std` to the local or global levels, or
3. Not sure of the third way.

**BA**:

Book does not give an answer.
