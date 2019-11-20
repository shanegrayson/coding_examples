# Chapter 4: Questions and Answers
Answer to review questions from C++ Primer Plus

**MA** -> My Answers without refering to the back of the book for an answer.

**BA** -> Book's answer to the review question.

## Question 1: 
How would you declare each of the following?

1. `actors` in an array of 30 chars
2. `betsie` is an array of 100 short
3. `chuck` is an array of 13 float
4. `dipsea` is an array of 64 long

**MA**:

1. `char actors[30];`
2. `short betsie[100];`
3. `float chuck[13];`
4. `long dipsea[64]; // forgot the double`

**BA**:

1. `char actors[30];`
2. `short betsie[100];`
3. `float chuck[13];`
4. `long double dipsea[64];`

## Question 2: 
Does Chapter Review question 1 use the array templet class instead of the built-in C arrays?

**MA**:

No, id doesnt use the array templet class. If so, it would state that it is calling the array header file and how to initalize the arrays would be something similar like:

1. `array<char, 30> actors;`
2. `array<short, 100> betsie;`
3. `array<float, 13> chuck;`
4. `array<long double, 64> dipsea;`

**BA**:

1. `array<char, 30> actors;`
2. `array<short, 100> betsie;`
3. `array<float, 13> chuck;`
4. `array<long double, 64> dipsea;`

## Question 3: 
Decalre an array of five ints and initalize it to the first five odd positive integers.

**MA**:

`int array1[5] = { 1, 3, 5, 7, 9 };`

**BA**:

`int oddly[5] = { 1, 3, 5, 7, 9 };`

## Question 4: 
Write a statement that assigns the sum of the first and last elements of the array in Q3 to the variable even.

**MA**:

`int even = oddly[0] + oddly[4];`

**BA**:

`int even = oddly[0] + oddly[4]`;

## Question 5: 
Write a statement that displays the value of the second element in the float array ideas.

**MA**:

`cout << ideas[1];`

**BA**:

`cout << ideas[1] << endl`

## Question 6: 
Declare an array of `char` and initalize it to the string "cheeseburger".

**MA**:

```
//my solution has excess chars
char meal[20];
meal = "cheeseburger";
```

**BA**:

```
char lunch[13] = "cheeseburger";
char lunch[] = "cheeseburger"; // let compiler decided size
```

## Question 7: 
Declare a string object and initalize it to the string "Waldorf Salad".

**MA**:

`String str1 = "Waldorf Salad";`

**BA**:

`String lunch = "Waldorf Salad";`

OR

`std::string lunch = "Waldorf Salad";`

## Question 8: 
Devise a structure declaration that describes a fish.

**MA**:

```
struct fish
{
    char kind[20];
    int wgt_ounces;
    float len_inches;
};
```

**BA**:

```
struct fish {
    char kind[20];
    int weight;
    float length;
}
```

## Question 9: 
Declare a variable of the type defined in Q8 and initalize it.

**MA**:

```
fish fish1 =
{
    "Halibate",
    52,
    15.36
};

```

**BA**:

```
fish petes = 
{
    "trout",
    12,
    26.25
};
```

## Question 10: 
Use `enum` to define a type called `Response` with the possible valeus of `Yes`, `No`, and `Maybe`. `Yes` should be 1, `No` should be 0, and `Maybe` should be 2.

**MA**:

`enum response = { no, yes, maybe };`

**BA**:

`enum Response = { No, Yes, Maybe };`

## Question 11: 
Suppose `ted` is a `double` variable. Declare a pointer that points to `ted` and use the pointer to display `ted`s value.

**MA**:

```
double ted = 10.34;
double * p_ted = &ted;

cout << *p_ted; << endl
```

**BA**:

```
double * pd = &ted;
cout << *pd << endl;
```

## Question 12: 
Suppose `treacle` is an array of 10 `floats`. Declare a pointer that points to the first elementof `treacle` and use the pointer to display the first an dlast elements of the array.

**MA**:

```
float treacle[10] = { 1.0,  1.0,  1.0,  1.0,  1.0,  1.0,  1.0,  1.0,  1.0,  1.0 };

float * p_trea1 = &treacle[0]
//OR
flaot * p_trea2 = treacle;

cout << *(p_trea1) << " " << *(p_trea1+9) << endl;
```

**BA**:

```
float * pf = treacle;
cout << pf[0] << " " << pf[9] << endl;
//OR
cout << *pf << " " << *(pf+9) << endl;
```

## Question 13:
Write a code fragment that asks the user to enter a positive integer and then creates a dynamic array of the many `ints`. Do this by using `new`, then again using a `vector` object.

**MA**:

```
//needs to be unsigned since there are no negatives
int user_ans;

cout << "Please enter a positive integer: ";
cin >> user_ans
cout << endl;

//I added the +1 for '\0' but this is not a char/string array
int * p_ua = new int[user_ans + 1];

vector<int> user_ar(user_ans);

delete [] p_ua;
```

**BA**:

Assuming \<iostream\> and \<vectors\> is available.

```
unsigned int size;
cout << "Enter a Positive Integer: ";
cin >> size;

int * dyn = new int [size];
vector<int> dv(size);
```

## Question 14: 
Is the following valid code? If so, what does it print?

`cout << (int *) "Home of the jolly bytes";`

**MA**:

Well, `"Home of the jolly bytes"` is either a string or char array, so it has a place in memory. The only thing I think that might not make this valid is that we are using `cout` from <iostream>. If this was valie, then it would print the memory address of the first character of the array.

I am going to say yes, and this it prints the address of the string/char arrays first character.

**BA**:

Yes, it is valid. The expression `"Home of the jolly bytes"` is a string constant; hence it evaluates as an address of the beginning of the string. The `cout` object interprets the address of a char as an invintation to print a string, but the type cast (int \*) converts the address to type pointer-to-int, which is then printed as an address. In short, the statement prints the address of the string, assuming the `int` type is wide enough to hold the address.

## Question 15: 
Write a code fragment that dynamically allocates a structure of the type described in Q8 and then reads a value of `kind` member of the structure.

**MA**:

```
fish * p_my_fish = new fish;

//Book states "read" so i took it as reading a value from the struct not writing to it
cout << "Kind: " << p_my_fish->kind << endl;
```

**BA**:

```
fish * pole = new fish;
cout << "Enter kind of fish: ";
cin >> pole->kind;
```

## Question 16: 
Listing 4.6 illustrates a problem created by following numeric input with line-oriented string input. How would replacing this:

1. `cin.getline(address,80);`

with this:

2. `cin >> address;`

affect the working of the program?

**MA**:

When cin reads the numeric value, it leaves the newline generated by the Enter key in the input queue (pg. 131). The member function .getline() Reads the new line as an empty line and assigns it a null string to the address array.

So, if you replace line 1 with line 2 the return character will still be in the queue and will fall through to the new input value. This can be remidied with an additional .get() or .get(ch) member function to catch the spare input character.

**BA**:

Using `cin >> address` causes a program to skip over white space until it finds non-whitespace. It then reads characters until it encounters whitespace again. Thus, it will skip over the newline following the numeric input, avoiding problems. On the other hand, it will read just a single word, not an entire line.

## Question 17: 
Declare a `vector` object of 10 `string` objects and an `array` object of 10 `string` objects. Show the necessary header files and don't use `using`. Do not use `const` for the number of strings.

**MA**:

```
#include <iostream>
#include <vector>
#include <array>

const int NumStrings = 10;

int main(void)
{
    //Forgot the std:: stuff. Not sure why though...

    //vector object of 10 string objects
    vector<string> s_obj(NumStrings);

    //array object of 10 string objects
    array<string, NumStrings> s_arr;
}
```

**BA**:

```
#include <iostream>
#include <vector>
#include <array>

const int Num_Str { 10 };

int main(void)
{
    //vector object of 10 string objects
    std::vector<std::string> s_obj(Num_Str);

    //array object of 10 string objects
    std::array<std::string, Num_Str> s_arr;
}
```


