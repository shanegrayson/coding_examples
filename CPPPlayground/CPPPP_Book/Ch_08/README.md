# Chapter 8: Questions and Answers
Answer to review questions from C++ Primer Plus

**MA** -> My Answers without refering to the back of the book for an answer.

**BA** -> Book's answer to the review question.

## Question 1: 
What kinds of functions are good candidates for inline status?

**MA**:



**BA**:



## Question 2: 
Suppose the song() function has this prototype:

`void song(const char * name, int times);`

1. How would you modify the prototype so that the default value for *times* it 1?
2. What changes would you make in the function definition?
3. Can you provide a default value of `"O, My Papa"` for *name*?

**MA**:


**BA**:



## Question 3: 
Write overloaded versions of iquote(), a function that displays its argument enclosed in double quotation marks. Write three versions: one for `int` argument, `double`, and `string`.

**MA**:



**BA**:



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

1. Write a function that has a reference to a box structure as it formal argument and displays the value of each memeber.
2. Write a function that has a reference to a `box` structure as its formal argument and sets the `volume` member to the product of the other three dimensions.

**MA**:



**BA**:



## Question 5: 
What changes would need be made to Listing 7.15 so that the function `fill()` and `show()` use reference paramters?

**MA**:



**BA**:



## Question 6: 
The following are some desired effects. Indicate wherther each can be accomplished with default arguments, function overloading, both, or neither. Provide appropriate prototypes.

1. `mass(density, volume)` returns the mass of an object having a density of `density` and a volume of `volume`, whereas `mass(density)` returns the mass having a `density` and a volume of 1.0 cubic meters. All quantities are type `double`
2. `repeat(10, "I'm Okay")` displays the indicated string 10 times, and `repeate("But you're kind of stupid")` displays displays the indicated string 5 times.
3. `average(3, 6)` returns the `int` average of two `int` arguments and `average(3.0, 6.0)` returns the `double` average of two `double` values.
4. `mangle("I'm glad to meet you")` returns the character I or a pointer to the string "I'm mad to gleet you", depending on whether you assign the return value to a `char` variable to a `char *` variable.

**MA**:



**BA**:



## Question 7: 
Write a fucntion template that returns the larger of its two arguments.

**MA**:



**BA**:



## Question 8: 
Given the template of Chapter Review Q7 and the `box` structure of Chpater Review Q4, provide a template specialization that takes two `box` arguments and returns the one with the large volume.

**MA**:



**BA**:



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



**BA**:




