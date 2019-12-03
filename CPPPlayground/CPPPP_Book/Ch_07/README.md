# Chapter 7: Questions and Answers
Answer to review questions from C++ Primer Plus

**MA** -> My Answers without refering to the back of the book for an answer.

**BA** -> Book's answer to the review question.

## Question 1: 
What are the three steps in using a function?

**MA**:



**BA**:



## Question 2: 
Construct function prototypes that match the following descriptions:

1. `igot()` takes no arguments and has no return value,
2. `tofu()` takes an `int` argument and returns a `float`,
3. `mpg()` takes two type `double` arguments and returns a `double`,
4. `summation()` takes the name of a `long` array and an array size as values and returns a `double` value,
5. `doctor()` takes a `string` argument (the string is not to modified) and returns a `double` value,
6. `ofcourse()` takes a `boss` structure as an argument and returns nothing,
7. `plot()` takes a pointer to a `map` structure as an argument and returns a `string`.

**MA**:



**BA**:



## Question 3: 
Write a function that takes 3 arguments: the name of an `int` array, the array size, and an `int` value. Have the function set each element of the array to the `int` value.

**MA**:



**BA**:



## Question 4: 
Write a function that takes three arguments: a pointer to the first element of a range in  an array, a pointer to the element following the end fo a range in an array, and an `int` value. Have the function set each element of the array to the `int` value.

**MA**:



**BA**:



## Question 5: 
Write a functiont that takes a `double` array name and array size as arguments and return the largest value in that array. Note: this function shouldnt alter the contents of the array.

**MA**:



**BA**:



## Question 6: 
Why don't you use the const qualifier for fucntion arguments that are one of the fundamental types?

**MA**:



**BA**:



## Question 7: 
What are the three forms a C-style string can take in a C++ program?

**MA**:



**BA**:



## Question 8: 
Write a function that has this prototype:

`int replace(char * str, char c1, char c2);`

Have the function replace every occurance of `c1` in the string `str` with `c2`, and have the function return the number of replacements it makes.

**MA**:



**BA**:



## Question 9: 
What does the expression \*"pizza" mean? What about "taco"[2]?

**MA**:



**BA**:



## Question 10: 
C++ enables you to pass a structure by value, and it lets you pass the address of a structure. If `glitz` si a structure variable, how would you pass it by value? How would you pass its address? What are the trade offs of the two approaches?

**MA**:



**BA**:



## Question 11: 
The function `judge()` has a type `int` return value. As an argument, it takes the address of a function. The function whose address is passed, in turn, takes a pointer to a `const char` as an argument and returns an `int`. Write the functoin prototype.

**MA**:



**BA**:



## Question 12: 
Suppose we have the following structure declaration:

```
struct applicant
{
    char name[30];
    int credit_rating[3];
};
```

1. Write a function that takes an `applicant` structure as an argument and displays its contents.
2. Write a function that takes the address of an `applicant` structure as an argument and displays the contents of the pointed-to structure.

**MA**:



**BA**:



## Question 13: 
Suppose the functions `f1()` and `f2()` have the following prototypes:

```
void f1(applicant * a);
const char * f2(const applicant * a1, const applicant * a2);
```

Declare `p1` as a pointer that points to `f1` abd `p2 as a pointer to `f2`. Declare `ap` as an array of five pointers of the same type as `p1`, and declare `pa` as a pointer to an array of ten pointers of the same type as `p2`. Use `typedef` as an aid.

**MA**:



**BA**:




