# Chapter 7: Questions and Answers
Answer to review questions from C++ Primer Plus

**MA** -> My Answers without refering to the back of the book for an answer.

**BA** -> Book's answer to the review question.

## Question 1: 
What are the three steps in using a function?

**MA**:

1. Make sure to have a prototype for the functions in the program.
2. Make sure that the return type matches the type it is defined as.
3. Make sure the parameters in the argument list match the parameters types stated in the 

**BA**:

The three steps are: defining the function, providing the prototype, and calling the function.

## Question 2: 
Construct function prototypes that match the following descriptions:

1. `igor()` takes no arguments and has no return value,
2. `tofu()` takes an `int` argument and returns a `float`,
3. `mpg()` takes two type `double` arguments and returns a `double`,
4. `summation()` takes the name of a `long` array and an array size as values and returns a `double` value,
5. `doctor()` takes a `string` argument (the string is not to be modified) and returns a `double` value,
6. `ofcourse()` takes a `boss` structure as an argument and returns nothing,
7. `plot()` takes a pointer to a `map` structure as an argument and returns a `string`.

**MA**:

1. `void igor(void);` 
2. `flaot tofu(float t);` (just read the question wrong.)
3. `double mpg(double miles, double gallons);`
4. `double summation(long * arr, int size);` or `long ar[]` or `long []` (wrote the question down wrong.)
5. `double doctor(const string * str);` or `double doctor(const char * str);` (I think it is the later.)
6. `void ofcourse(const boss * pBoss);` (this is probably the same thing since I am not changing the values.)
7. `char * plot(const map * pMap);` (No constant? Guess changing stuff would be okay...)

**BA**:

1. `void igor(void);`
2. `float tofu(int n);`
3. `double mpg(double miles, double gallons);`
4. `long summation(long harray[], int size);`
5. `double doctor(const char * str);`
6. `void ofcourse(boss dude);`
7. `char * plot(map *pmap);`

## Question 3: 
Write a function that takes 3 arguments: the name of an `int` array, the array size, and an `int` value. Have the function set each element of the array to the `int` value.

**MA**:

```
void func3(int * arr, int size, int value)
{
    //I thought size-1 becasue of going out of bounds on the array index, but
    //this would've stayed due to the '<'
    for (int i = 0; i < size-1; i++)
        arr+i = value;
}
```

**BA**:

```
void set_arr(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
        arr[i] = value;
}
```

## Question 4: 
Write a function that takes three arguments: a pointer to the first element of a range in an array, a pointer to the element following the end fo a range in an array, and an `int` value. Have the function set each element of the array to the `int` value.

**MA**:

```
void func4(int * begin, int * end, int value)
{
    //I wonder if you can incrament with this being a const? Should be able to.
    const int * pt;
    for (pt = begin; pt != end; pt++)
        *pt = value; //(Is there a difference between where the dereferencer is?)
}
```

**BA**:

```
void set_array(int * begin, int * end, int value)
{
    for (int * pt = begin; pt != end; pt++)
        pt* = value;
}
```

## Question 5: 
Write a function that takes a `double` array name and array size as arguments and return the largest value in that array. Note: this function shouldnt alter the contents of the array.

**MA**:

```
//The problem didn't say anything about error checking.
double func5(const double * arr, int size)
{
    double largest = *arr+0;
    
    for (int i = 1; i < size; i++)
        if (arr+i > largest)
            largest = *arr+i;

    return largest;
}
```

**BA**:

```
double biggest(const double foot[], int size)
{
    double max;
    if (size < 1)
    {
        cout << "Invalid array size of " << size << endl;
        cout << "Return a value of 0." << endl;
    }
    else
    {
        max = foot[0];
        for (int i = 1; i < size; i++)
            if (foot[i] > max)
                max = foot[i];
        return max;
    }
}
```

## Question 6: 
Why don't you use the const qualifier for fucntion arguments that are one of the fundamental types?

**MA**:

I assume they are talking about functions such as `double funcx(int x)` versus `double funcx(const int x)`. If I recall right, when passing a function like this it creates it own instance of the variable found in the argument. So, like, the `int x` is not the same `int x` value that you would find int he main code. You are only really using `const` to protect data that is being pointed to.

**BA**:

You use the `const` qualifier wit pointers to protect the original pointed-to data from being alrtered. When a program passes a fundamental type such as an `int` or a `double` it passes it by value so that the function works with a copy. Thus, the original data is alreayd protected.

## Question 7: 
What are the three forms a C-style string can take in a C++ program?

**MA**:

1. An array of `char`,
2. A quoted string constant/string literal,
3. A pointer-to-`char` set to the address of a string.

**BA**:

A string can be stored in a `char` array, it can be represented by a string constant in double quotation marks, and it can be represented by a pointer pointing to the first characeter of a string.

## Question 8: 
Write a function that has this prototype:

`int replace(char * str, char c1, char c2);`

Have the function replace every occurance of `c1` in the string `str` with `c2`, and have the function return the number of replacements it makes.

**MA**:

```
int replace(char * str, char c1, char c2)
{
    int count = 0;

    while(*str)
    {
        if (*str == c1)
        {
            count++;
            *str = c2;
        }

        str++;
    }

    return count;
}
```

**BA**:

```
int replace(char * str, chr c1, char c2)
{
    int count = 0;
    while (*str)
    {
        if (*str == c1)
        {
            *str = c2;
            count++;
        }
        str++;
    }
    return count;
}
```

## Question 9: 
What does the expression \*"pizza" mean? What about "taco"[2]?

**MA**:

Both of these look very wrong to me. I mean, if "pizza" and taco were stored as some characeter array or string. My best answer would be that the pointer is dereferencing "pizza" so it would be refering to the 'p' character, and same with "taco" refering to the 'c' character.

This question is weird. 

**BA**:

Because C++ interperates "pizza" as the address of its first element, applying the `*` operator yields the value of the first element, which is the character 'p'. Because C++ interperprets "taco" as the address of its first element, it interperates "taco"[2] as the value of the element two positions down the line, which is the character 'c'. In other words, the string constant acts the same as an array name.

## Question 10: 
C++ enables you to pass a structure by value, and it lets you pass the address of a structure. If `glitz` is a structure variable, how would you pass it by value? How would you pass its address? What are the trade offs of the two approaches?

**MA**:

Passing by value, you would just the structure as if it were a variable type, such as:

`void show_glitzy(glitz g1);`

To pass it y address you would lock it in with the `const` qualifier and and then point to the first byte of its location in memory, such as:

`void glitz_address(const glitz * g1);`

For passing by address you then would use the `->` arrow operator to retrieve the strcutures values.

You would also need to add `&` address operator to the value you are passing in the calling function, such as:

`glitz_address(&some_glitz);`

**BA**:

To pass it by value, you pust pass the structure name `glitz`. To pass it by address, you use the address operator `&` for `&glitz`. Passing by the value automatically protects the original data, but it takes time and memory. Passing by address save time and memory but doesn't protect the original data unless you use the `const` modifier for the function parameter. Also, passing by value means you can use ordinary structure member notation, but passing a pointer means you have to remember to use indirect membership operators.

## Question 11: 
The function `judge()` has a type `int` return value. As an argument, it takes the address of a function. The function whose address is passed, in turn, takes a pointer to a `const char` as an argument and returns an `int`. Write the function prototypes.

**MA**:

```
int judge(int &funct);
int funct(const char * str);
```

I did this wrong, so what is the right thinking behind it? Obviously, the `int judge(` part of the function was easy to get, but what I miss understoond was the "as an arg taes address of funct who address is passed takes a pointer to a const char". This was the examples where you could pass a function with different names but the same return type and arg type.

*NOTE*: This section starts at 361 and would be a good read before heading to the Exercise problems.

**BA**:

```
int judge(int (*pf)(const char *));
```

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

1. Do:
```
void display_applicant(applicant person1)
{
    cout << "Name: " << person1.name << endl;
    cout << "Credit Rating: " << person1.credit_rating << endl;
    //Didn't notice that credit_rating was an array...
}
```

2. Do:
```
//LOL I way over thoguht this one...
void display_app_addr(applicant (*pa)(char *, int))
{
    cout << "Name: " << (*pa)->name << endl;
    cout << "Credit Rating: " << (*pa)->credit_rating << endl;
}
```

**BA**:

1. *NOTE*: That if `ap` is an applicant structure, then `ap.credit_ratings` is an array name and `ap.credit_ratings[i]` is an array element.

```
void display(applicant ap)
{
    cout << ap.name << endl;
    for (int i = 0; i < 3; i++)
        cout << ap.credit_rating[i] << endl;

}
```

2. *NOTE*: That if `pa` is a pointer to an applicant structure, then `pa->credit_ratings` is an array name, and `pa->credit_ratings[i]` is an array element.

```
void show(const applicant * pa)
{
    cout << pa->name << endl;
    for (int i = 0; i < 3; i++)
        cout << pa->credit_ratings[i] << endl;
}
```

## Question 13: 
Suppose the functions `f1()` and `f2()` have the following prototypes:

```
void f1(applicant * a);
const char * f2(const applicant * a1, const applicant * a2);
```

Declare `p1` as a pointer that points to `f1` and `p2 as a pointer to `f2`. Declare `ap` as an array of five pointers of the same type as `p1`, and declare `pa` as a pointer to an array of ten pointers of the same type as `p2`. Use `typedef` as an aid.

**MA**:

```
//So confused how the typedef gets the aliase...
typedef void f1(applicant * a) tdf1;
typedef const char * f2(const applicant * a1, const applicant * a2) tdf2;

tdf1 p1 = f1;
tdf2 p2 = f2;

tdf1 ap[5];
tdf2 pa[10];

/*
 * I was close, but I am going to re-read pages 361-371
 */
```

**BA**:

```
typedef void (*p_f1)(applicant *);
p_f1 p1 = f1;

typedef const char \* (\*p\_f2)(const applicant \*, const applicant \*);
p\_f2 p2 = f2;

p\_f1 ap[5];
p\_f2 (\*pa)[10];
```

