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

What advantages does v2 have over v1 if any?

**MA**:
Outside of possibly saving some compiler time... actually, I don't think v2 woukld save any compielr time compared to v1. The v2 is essentiall this:

```
if
else
    if
```

They do the same thing with posibly no compielr draw backs. So I dont think there is essentially any draw backs from one or the other, other than the fact that v2 looks worse

**BA**:

Both versions give the same answers, but the `if else` version is more efficient. Consider what happens, for example, when `ch` is a space. V1, after incrementing spaces, tests whether the character is a newline. This wastes time because the program has already established that `ch` is a space and hence could not be a new line. V2, in the situation, skips the new line.

## Question 2: 
In listing 6.2 what is the effect of replacing ++ch with ch+1?

**MA**:

This should print the character first before updating the value at `ch`.

**BA**:

Both `++ch` and `ch + 1` have the same numerical value, but `++ch` is type `char` and prints a character, while `ch + 1`, because it adds a `char` and `int`, is type `int` and prints a number

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

    cout << "ct1 = " << ct1 << ", ct2 = " << ct2 << "\n";

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

`ct1 = 7, ct2 = 1`

Doh!

**BA**:

Because the program uses `ch = '$'` instead of `ch == '$'`, the combined input and output looks like this:

```
Hi!
H$i$!$
$Send $10 or $20 now!
S$e$n$d$ $ct1 = 9, ct2 = 9
```

## Question 4: 
Construct logical expressions to represent the following conditions:

1. `weight` is greater than or equal to 115 but less than 125
2. `ch` is `q` or `Q`
3. `x` is even but is not 26
4. `x` is even but is not a multiple of 26
5. `donation` is in the range 1,000-2,000 or `guest` is 1
6. `ch` is a lowercase eltter or an uppercase letter. (Assume, as is true for ASCII that lowercase letters are coded sequentially and that uppercase letters are coded sequentially but that there is a gap in the between uppercase and lowercase.)

**MA**:

1. `weight >= 155 && weight < 125`
2. `ch == 'q' || ch == 'Q'`
3. `x != 26 && x == (x %= 2)`
4. `x != (x %= 26) && x == (x %= 2)`
5. `donation >= 1000 && donation <= 2000 || geust == 1`
6. `ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'` (forgot precedence rule!)

**BA**:

1. `weight >= 115 && weight < 125`
2. `ch == 'q' || ch == 'Q'`
3. `x % 2 == 0 && x != 26`
4. `x % 2 == 0 && !(x % 26 == 0)`
5. `donation >= 1000 && donation <= 2000 || guest == 1`
6. `(ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')`

## Question 5: 
In english the statement "I will not speak" means the same as "I will speak" in C++, is `!!x` the same as `x`?

**MA**:

Yes. This follows the same precedence that you would find in descrete mathematics. 

**BA**:

Not necessarily. For example if `x` is `12`, then not `x` is `0`, and `!x` is `1`. However, if `x` is a bool, then `!!x` is `x`.

## Question 6: 
Construct a conditional expression that is equal to the absolute value of a variable. That is, if a var `x` is positive, the value of the expression is just `x`, but if `x` negative, the value of the expression is `-x`, which is positive.

**MA**:

```
if (x < 0) cout << '-' << x;
else cout << x;
```

I didn't see that it was asking for a terinary. Semi-looked at answer.

```
int x;
x < 0 ? cout << "-" << x : cout << x;
```

I thoguht we were trying to print it, not jsut assigning the value.

**BA**:

`(x < 0) ? -x : x;`

or

`(x >= 0) ? x : -x;`

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

```
switch (ch) = 
{
    case 'A': a_grade++; break;
    case 'B': b_grade++; break;
    case 'C': c_grade++; break;
    case 'D': d_grade++; break;
    default: f_grade++; break;
}
```

**BA**:

```
switch (ch) = 
{
    case 'A': a_grade++; break;
    case 'B': b_grade++; break;
    case 'C': c_grade++; break;
    case 'D': d_grade++; break;
    default: f_grade++; break;
}
```

## Question 8: 
In listing 6.10 what advantage would there be in using character labels, such as `a` and `c`, instead of numbers for the menu choices and switch cases? (Hint: Think about what happens if the user types `q` in either case and what happens if the user types `5` in either case.)

**MA**:

Well, first you could swap `choice` data type with `char` which would save space in memory for each calling. I am assuming that you swap `choice != 5` with `choice != 'q', which wouldn't change any thing noticable. If they hit 5 with this choice, then the program would just spit out that `it is not a choice`.

**BA**:

If you use int labels and the user types a nonint such as **q**, the program hangs because int input cant process a char. But if you use char lavels and the use types an int such as **5**, the char input will process 5 as a character. Then the default part of the switch can suggest entering another char.

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

```
int line = 0;
char ch;
while (cin.get(ch) != 'Q')
{
    if (ch == '\n')
        line++;
}
```

**BA**:

Here is one version:

```
int line = 0;
char ch;
while (cin.get(ch) && ch != `Q`)
{
    if (ch == '\n')
        line++;
}
```

