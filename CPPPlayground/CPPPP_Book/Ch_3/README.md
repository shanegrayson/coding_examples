# Chapter 3: Questions and Answers
Answer to review questions from C++ Primer Plus

**MA** -> My Answers without refering to the back of the book for an answer.

**BA** -> Book's answer to the review question.

## Question 1: 
Why does C++ have more than one integer type?

**MA**:

I am making the assumption that the books is talking about signed and unsigned values and possibly how integers can be different on different machiens (such as 16 bits on one system and 32 bits on another).

C++ has more than one integer type to represent values. They differ in amount of meemory used and whether or not the value is signed or unsigned. The value sizes are usually followed:

- short: 16 bits. (2 bytes)
- int: at least as bit as short. (4 bytes)
- long: int is at least 32 bits. (4 bytes)
- long long: int is at least 64 bits. (8 bytes)

**BA**: 

Having more than one integer type let's you choose the typethat is best suited to a particular need. For example, you could use short to conserve space or long to guarentee storage capacity or to find that a particular type speeds up a particular calculation.

## Questions 2:
Declare Variables matching the following descriptions:
1. A `short` integer with the value 80
2. An `unsigned int` integer with the value of 42,110
3. An integer with the value of 3,000,000,000

**MA**:

1. `short val1 = 80;`
2. `unsigned int val2 = 42110;`
3. `unsigned long val3 = 3000000000;`

**BA**: 

1. `short rbis = 80;`
2. `unsigned int q = 42110;`
3. `unsigned long ants = 3000000000;`

Note: Do not count on int being large enough to hold 3,000,000,000. Also, if your system supports universal list-initizaliztions you could use it:

1. `short rbis { 80 };`
2. `unsigned int q { 42110 };`
3. `long long ants { 3000000000 };`

## Questions 3:
What safe-guard does C++ provide to keep you from exceeding the limits of an integer type?

**MA**:

Is there automatic type conversion? If not then the C++ complilaer probably gets upset and throws an error or warning. There is also the cycle that is shown on page 76 where if you have an over or underflow of the value it will spit out an incorrect value. For example, having the max int value and adding 1 with a 16 bit int will spit out -32768 or if you have an overflow it will spit out 0 or 32767.

**BA**:

C++ provides no automatic safeguards to keep you from exceeding integer limits; you can use the climits header file to determine what the limits are.

## Questions 4:
What is the distinction between 33L and 33?

**MA**:

- 33L is stating that the value is a `long` type
- 33 is stating that the value is either a `short` or int type.

**BA**:

The constant 33L is type `long` and the const 33 is of type `int`.

## Question 5:
Consider the two C++ statements that follow:
1. `char grade = 65;`
2. `char grade = 'A';`

Are they equivalent?

**MA**:

It depends on what the output device is that uses them. I believe if you are using `std::cout` then they are equivalent (if 65 is the ascii of A). The const 65 in the `char` type should represent the character A.

**BA**:

The two statements are not really equivalent, although they have the same effect on some systems. Most importantly, the first statement assigns the letter A to `grade` only on a system using ASCII-code, while the second statement also work with other codes. Second, 65 is a type `int const`, where `'A'` is a type `char` const.

## Questions 6:
How could you use C++ to find out which character the code 88 represents? Come up with at least two ways.

**MA**:
1. Could assign the value to a `char` and print the value, or
2. us the member function cout.puts(ch)

```
char ch = 88;
cout << ch;
```

or

`cout.puts(88);`

**BA**:

Here are 4 ways:

```
char c = 88;
cout << c << endl;
```

`cout.put(char (88));`

`cout << char(88) << endl;`

`cout << (char) 88 << endl;`

## Questions 7:
Assign a `long` value to a `float` can result in a rounding error. What about assigning `long` to `double`? `long long` to `double`?

**MA**:

A long is larger than a double. IIRC, long is 86-128 bits and double is 64 bits. So, assigning long to a double would cause a similar rounding error. long long is much larger to double so there would be a round error too.

**BA**:

The answer DEPENDS on how large the two types are. If long is 4 bytes there is no loss. That is because the largest long value would be about 2 billion, which is 10 digits. Because `double`peovides at least 13 significant figures, no rounding would be needed. The `long long` type on the other hand, can reach 19 digits, which exceeds the 13 significant figures guaranteed for `double`.

## Questions 8:
Evaluate the following expressions as C++ would:
1. 8 * 9 + 2
2. 6 * 3 / 4
3. 3 / 4 * 6
4. 6.0 * 3 / 4
5. 15 % 4

**MA**:

I am assuming left to right associativity

1. 8 * 9 + 2 -> 72 + 2 = 74
2. 6 * 3 / 4 -> 18 / 4 = 4
3. 3 / 4 * 6 -> 0.75 * 6 = 4.75 (wrong the division returns 0)
4. 6.0 * 3 / 4 -> 18.0 / 4 = 4.5
5. 15 % 4 = 3

**BA**:

1. 74
2. 4
3. 0
4. 4.5
5. 3

## Questions 9:
Suppose `x1` and `x2` are two types `double` variables that you want to add as integers and assign to an integer variable. Construct a C++ statement for doing so. What if you want to add them as type `double` and then convert to `int`.

**MA**:

```
double x1, x2;
int ans;

ans = int (x1) + int (x2);
```

You could add them together as type `double` you would lose precision. (I read this wrong before seeing answer...)

```
int ans = int (x1 + x2);
int ans = (int)(x1 + x2);
```

**BA**:

Either of the following would work for the first task:

```
int pos = int (x1) + int (x2);
int pos = (int)x1 + (int)x2;
```

To add them as type `double` and then convert:

```
int pos = int (x1 + x2);
int pos = (int)(x1 + x2);
```

## Questions 10:
What is the variable type for each of the following declerations:
1. `auto cars = 15;`
2. `auto iou = 150.37f;`
3. `auto level = 'B';`
4. `auto crat = U'/U0002155';`
5. `auto fract = 8.25f/2.5;`

**MA**:

1. int
2. float or double (not double becuase it is 'f')
3. char
4. unsigned char
5. float (double because the divisor is not 'f')

**BA**:

1. int
2. float
3. char
4. char32_t
5. double
