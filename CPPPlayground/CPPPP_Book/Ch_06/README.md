# Chapter 5: Questions and Answers
Answer to review questions from C++ Primer Plus

**MA** -> My Answers without refering to the back of the book for an answer.

**BA** -> Book's answer to the review question.

## Question 1: 
What's the difference between an entry-condition loop and an exit-condition loop? What kind is each of the C++ loops.

**MA**:

*Entry-condition*: Test expressions are evaluated before each loop cycle.

1. for
2. while

*Exit-COndition*: test expressions are evaluated after each loop cycle.

1. do-while

**BA**:

An entry-condition loop evaluates a test expression before entering the body of the loop. If the condition is initiallu `false`, the loop never executes its body. An exit-condition loop evaluates a test expression after processing the body of the loop. Thus, the loop body is executed once, even if the test expression is initially `false`. The `for` and `while` loops are entry-condition loops, and the `do-while` loop is an exit-condition loop.

## Question 2: 
What would the following code fragment print if it were part of a valid program?

```
int i;
for (i = 0; i < 5; i++)
    cout << i;
    count << endl;
```

**MA**:

This would just print `0` since it is missing the paranthesis { } because it has more than 1 statement.

*EDIT*: Oh, okay, so it will still run the loop, just the first condition. I guess I would thinking as if this were a `while` loop.

**BA**:

I would print the following: `01234`.

*NOTE*: `cout << endl;` is not part of the loop body (because there are no braces).

## Question 3: 
What would the following code fragment print if it were part of a valid program?

```
int j;
for (j = 0; j < 11; j +=3)
    cout << j;
cout << endl << j << endl;
```

**MA**:

```
3
6
9
undefined/garbage //hmm, iirc it stated that when assigned in for loop it is static in the loop
// if I am wrong about that then it will be 12
```

*NOTE*: It was the indention on the problem 2 that threw me off!

**BA**:

It would print the following:

```
0369
12
```

## Question 4: 
What would the following code fragment print if it were part of a valid program?

```
int j = 5;
while (++j < 9)
    cout << j++ << endl;
```

**MA**:

```
//incraments j to 6 then evaluates 6 < 9
6 //prints first then incraments to 7

//incraments j to 8 then evaluates 8 < 9
8 //prints first then incraments to 9

//finished since 9 is not less than 9
```

**BA**:

```
6
8
```

## Question 5: 
What would the following code fragment print if it were part of a valid program?

```
int k = 8;
do
    cout << "k = " << k << endl;
while (k++ < 5);
```

**MA**:

```
k = 8
//drops early since 8 is not less than 5
```

**BA**:

It would print the following:
`k = 8`

## Question 6: 
Write a `for` loop that prints the values 1 2 4 8 16 32 64 by incramenting the value of a counting variable by a factor of 2 in each cycle.

**MA**:

```
for (int i = 1; i < 65; i \*= 2)
    cout << i;
```

**BA**:

```
for (int num = 1; num <= 64; num *= 2)
    cout << num << " ";
```

## Question 7: 
How do you make a loop body include more than one statement?

**MA**:

By adding brackets around the statements. For example:

```
for (int i = 0; i < 5; i++)
{
    cout << i;
    cout << i+1;
}
```

**BA**:

You close the statement within paired bracesto form a single compound statement or block.

## Question 8: 
Is the following statement valid? If not, why not? If so, why does it do? //lol

`int x = (1,024)`

What about the following?

```
int y;
y = 1,024;
```

**MA**:

For case 1: In this case, the value of x is asssigned to 024 since parans have precedence and it read the value from right to left and discard the 1 (i guess?).

For case 2: This statement gets read as `int y = 1` are discards the 024.

**BA**:

Yes, the first statement is valid. The expression `1,024` consists of two expression -- 1 and 024 joined by a comma operator. The value is the value of the right-hand expression. This is 024, which is octal for 20, so the declaration assigns the value 20 to x. The second statement is also valid. However, operator precedence causes it to be evaluated as follows:

`(y = 1), 024`

That is, the left expression sets y to 1, and the value of the entire expression, which isn't used, is 024, or 20.

## Question 9: 
How does `cin >> ch` differ from `cin.get(ch)` and `ch = cin.get()` in how it views input?

**MA**:

1. `cin >> ch`: This reads in the input stream but ignores white space, tabs, and new lines.
2. `cin.get(ch)`: This is similar to a class memeber call where it is changing the value of ch at it's address.
3. `ch = cin.get()`: This is calling the get function and returning an int value to ch

**BA**:

The `cin >> ch` form skips over spaces, newlines, and tabs when it encounters them, the other 2 forms read those chaarcters.
