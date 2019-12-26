# Chapter 8: Questions and Answers
Answer to review questions from C++ Primer Plus

**MA** -> My Answers without refering to the back of the book for an answer.

**BA** -> Book's answer to the review question.

## Question 1: 
What kinds of functions are good candidates for inline status?

**MA**:
Code that has a short time of execution instead of time needed to handle the execution. If code execution time is short then this can save a large amount of time used by the non-non inline calls.


**BA**:
Short, nonrecursive functions that can fit in one line of code are good candidates for inline funcitons.


## Question 2: 
Suppose the song() function has this prototype:

`void song(const char * name, int times);`

1. How would you modify the prototype so that the default value for `times` it 1?
2. What changes would you make in the function definition?
3. Can you provide a default value of `"O, My Papa"` for *name*?


**MA**:

1. `void song(const char * name, int times = 1)`
2. You would have to remove the defualt value `int times`
3. Yes, you can set the defualt peramteter, only in the prototype though. 


**BA**:

1. `void song(const char * name, int times = 1)`
2. None. Only protoypes contain the default value.
3. Yes, provided that you retain the defualt value for `times`:
`void song(char * name = "O' My Papa", int times = 1);`


## Question 3: 
Write overloaded versions of iquote(), a function that displays its argument enclosed in double quotation marks. Write three versions: one for `int` argument, `double`, and `string`.

**MA**:
```
void iquote(int a, int b){cout << a << b;};
void iquote(double a, double b){cout << a << b;};
void iquote(string a, string b){cout << a << b;};
```
I obviously misunderstood what the question was asking


**BA**:
You can use either the string "\"" or the character "" to print a quotation mark. The following functions show both methods:

```
#include <iostream.h>
void iquote(int n) {cout << "\"" << n << "\"";}
void iquote(double x) {cout << '"' << x << '"';}
void iquote(const char * str) {cout << "\"" << str << "\"";}
```


## Question 4: 
The following is a structure template:

```
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
}
```

1. Write a function that has a reference to a `box` structure as it formal argument and displays the value of each memeber.
2. Write a function that has a reference to a `box` structure as its formal argument and sets the `volume` member to the product of the other three dimensions.

**MA**:

1. display each value

```
void display(const box & bx)
{
    using std::cout;
    cout << "Maker: " << bx.maker;
    cout << "Height: " << bx.height;
    cout << "Width: " << bx.width;
    cout << "Length: " << bx.length;
    cout << "Volume: " << bx.volume;
}
```

2. setting volume

```
box & display(const box & bx)
{
    bx.volume = bx.height * bx.width * bx.length;
    return bx.volume;
}
```

**BA**:

1. display wach value

```
void show_box(const box & constiner)
{
    cout << "Maker: " << contianer.maker;
    cout << "Height: " << container.height;
    cout << "Width: " << container.width;
    cout << "Length: " << container.length;
    cout << "Volume: " << container.volume;
}
```

2. setting volume

```
void set_volume(box & crate)
{
    crate.volume = crate.height * crate.width * crate.length;
}
```

## Question 5: 
What changes would need be made to Listing 7.15 so that the function `fill()` and `show()` use reference paramters?

**MA**:

```
void fill(std::array<double, Seasons> & pa)
{
    ...
    cin >> pa[i];
    ...
}
void show(const std::array<double, Seasons> & pa)
{
    ...
    total += (*da)[i];
    ...
}
```

**BA**:

First change the prototpyes to the following:
`void fill(std::array<double, Seasons> & pa)`
`void show(const std::array<double, Seasons> & pa)`
*Note*: that show should use const to protect the object,

Next, within main(), change the fill() call to this:
`fill(expensses);` and there is no change to show();

Next, the new fill() should look like this:
```
void fill(std::array<double, Seasons> & pa)
{
    ...
    cin >> pa[i];
    ...
}
```

The only change to show() is just the parameter list. 

## Question 6: 
The following are some desired effects. Indicate wherther each can be accomplished with default arguments, function overloading, both, or neither. Provide appropriate prototypes.

1. `mass(density, volume)` returns the mass of an object having a density of `density` and a volume of `volume`, whereas `mass(density)` returns the mass having a `density` and a volume of 1.0 cubic meters. All quantities are type `double`
2. `repeat(10, "I'm Okay")` displays the indicated string 10 times, and `repeate("But you're kind of stupid")` displays displays the indicated string 5 times.
3. `average(3, 6)` returns the `int` average of two `int` arguments and `average(3.0, 6.0)` returns the `double` average of two `double` values.
4. `mangle("I'm glad to meet you")` returns the character I or a pointer to the string "I'm mad to gleet you", depending on whether you assign the return value to a `char` variable to a `char *` variable.

**MA**:

1. both 
```
double mass(double density, double volume);
double mass(double density, double volume = 1.0);
```

2. both, assuming string useage since not taking an int for char * length
```
void repeat(int times, string str1);
viod repeat(int times = 5, string str1);
```

3. function overloading
```
int average(int x, int y);
double average(double x, double y);
```

4. neither. it needs to make the decision in the function.

**BA**:

1. This can be done using a default value for the second argumet
`double mass(double d, double v = 1.0);`

can also use overloading:
```
double mass(double d, double v);
double mass(double d);
```

2. You can't use default for the repeat value because you have to provide default values from right to left. You can use overloading.
```
void repeat(int times, const char * str);
void repeat(const char * str);
```

3. You can use function overloading
```
int average(int a, int b);
double average(double a, double b);
```

4. You can't do this because both versions would have the same signature.

## Question 7: 
Write a fucntion template that returns the larger of its two arguments.

**MA**:

```
template <class T>
T larger(T a, T b)
{
    return a > b ? a : b;
}
```

**BA**:

template <class T>
T max(T t1, T t2)
{
    return t1 > t2 ? t1 : t2;
}

## Question 8: 
Given the template of Chapter Review Q7 and the `box` structure of Chpater Review Q4, provide a template specialization that takes two `box` arguments and returns the one with the large volume.

**MA**:

```
template <typename T>
T max(T &a, T &b);
...
template <>
box max<box>(box &b1, box &b2);
...
template <>
box max<box>(box &b1, box &b2)
{
    //Needed to just return b1 or b2 structs
    return b1.volume > b2.volume ? b1.volume : b2.volume;
}
```

**BA**:

```
template<> box max(box b1, box b2)
{
     return b1.volume > b2.volume ? b1 : b2;   
}
```

## Question 9: 
What types are assigned to `v1`, `v2`, `v3`, `v4`, and `v5` in the following code (assuming the code is part of a complete program)?

```
...
float m = 5.5f;
float & rm = m;
decltype(m) v1 = m;
decltype(rm) v2 = m;
decltype((m)) v3 = m;
decltype(g(100)) v4;
decltype(2.0 * m) v5;
```

**MA**:

1. v1 is type float
2. v2 is type float &
3. v3 is type float
4. v4 is type int
5. v5 is type float

**BA**:

1. float
2. float &
3. float &
4. int
5. double
