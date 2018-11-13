# Coding Challenges

## Challenge 1

Write a program that will display a joke. Don't display the punchline until the reader hits the enter key.

**Extension**: Display the punchline in a new color.

------

## Challenge 2

Write a program that will ask your name. It will then display 'Hello Name' where the 'Name' is the name you have entered. 

E.g.

```
What is your name?
Shaktimaan
Hello Shaktimaan
```

------

## Challenge 3

Write a program to work out the area of a rectangle. Collect the width and height of the rectangle from the keyboard, calculate the area and display the result.

**Extension**: 

Display the volume of a cuboid.

See what happens when you don't type in numbers! - Try to modify your program for that input.

**Prior Knowledge Needed**

- How to create variables
- How to input data to a variable
- How to display variables
- How to perform basic mathematical calculations

------

## Challenge 4

Write a program that will work out the distance travelled if the user enter in speed and time.

**Extension**

Get the program to tell you the speed you would have to travel at in order to go a distance within a certain time entered by the user.

------

## Challenge 5

Write a program to work out how many days you have lived for.

**Algorithm**

1. Enter date of birth
2. Get today's date
3. Get the difference in days between the two dates
4. Display result

**Extension**

Work out how many seconds you've lived for.

**Hints**

- Use `__DATE__` to get today's date.

**Prior Knowledge Needed**

- How to create variables
- How to input data into a variable
- How to display variables
- How to use pre-defined functions
- How to use system variables

------

## Challenge 6

Make a game for seeing how good people are at guessing when 10 seconds have elapsed.

**Algorithm**

1. Tell them to hit enter key when ready.
2. Get the first time in seconds.
3. Get them to hit enter key when they think 10 seconds have elapsed.
4. Get the time in seconds.
5. Subtract the first time from the second time.
6. Tell them how close to 10 the answer was.

**Prior Knowledge Needed**

- How to create variables
- How to input data into a variable
- How to display variables
- How to use pre-defined functions.

**Hint**

- Use the guide provided [here](https://en.wikibooks.org/wiki/C_Programming/time.h)

------

## Challenge 7

Write a program that will accept someone's date of birth and work out whether they can vote? (i.e Are they 18?)

------

## Challenge 8

Write a program that will generate a random playing card e.g '9 of Hearts', 'Queen of Spades' when the return key is pressed.

Rather than generating a random number from 1 to 52, create two random numbers, one for the suit and one for the card.

**Extension**

Make a loop structure so that the playing cards can keep being generated.

**Prior Knowledge Needed**

- How to create `if` or `case` statements with logical operators.
- How to generate random numbers.

------

## Challenge 9

Make a game of rock, paper or scissors against the computer.

**Algorithm**

1. Tell the user to enter rock, paper or scissors
2. Get the response
3. Generate a random number from 1 to 3. (1 = rock, 2 = paper, 3 = scissor)
4. Compare user selection and computer selection
5. Display who wins.

**Hint**

- Use the guide provided [here](https://www.dummies.com/programming/c/how-to-generate-random-numbers-in-c-programming/)

**Extension**

- Make sure the user enters a valid entry
- Add a loop structure to play several times and keep a running score

**Prior Knowledge Needed**

- How to create `if` statements with logical operators (or nested `if`s)
- How to generate random number

------

## Challenge 10

Write a program that will give the answer to logic gate questions e.g.

```
Enter logic gate : OR
Enter first input : 1
Enter second input : 0
Result : 1
```

It should work for the logic gates `OR`, `AND`, `NOT` and `XOR`.

**Extension**

- Include `NAND` and `NOR` gates

**Prior Knowledge Needed**

- How to create `if` statements using logical operators.

------

## Challenge 11

Write a program that will display all the factors of a number, entered by the user, that are bigger than 1.

(e.g the factors of the number 12 are 6, 4, 3 and 2 because they divide into 12 exactly)

**Hint**

to find out whether a number X is a factor of Y use:

`if x mod y = 0` (there is nothing remaining when Y is divided by X)

**Extension**

Tell the user if the number they entered is a prime number

**Prior Knowledge Needed**

- How to create `if` statements
- How to create a loop structure

------

## Challenge 12

Write a program for a game where the computer generates a random starting number between 2 and 30. The player and the computer can remove either 1, 2 or 3 from the number in turns. Something like this,

```
Starting number : 25
How many do you want to remove ? 3
22 left
Computer removes : 2
20 left
```

The player who has to remove the last value to bring the number down to 0 is the loser.

```
1 left
Computer removes 1
You win!
```

**Easy option**

Get the computer to choose a number between 1, 2 or 3 at random.

**Harder option**

Get the computer to employ a strategy to try and win

**Prior Knowledge Needed**

- How to generate random numbers
- How to create `if` statements
- How to create a loop structure
- How to create functions

------

## Challenge 13

Write a program for a Higher/Lower game.

The computer randomly generates a sequence of up to 10 numbers between 1 and 13. The player each after seeing each number in turn has to decide whether the next number will be higher or lower. If you get 10 guesses right, you win the game. 

```
Starting number : 12
Higher(H) or Lower(L) ? L
Next number 8
Higher(H) or Lower(L) ? L
Next Number 11
You Lose.
```

**Hints**

- Use a condition controlled loop (`do-while`, `while`) to control the game. Do not find yourself repeating the same code, over and over.
- You don't need to remember all 10 numbers just the current number/next number. Don't forget you'll have to keep a count of the number of turns they've had.

**Extension**

- Give the user 3 lives.
- Make sure only L or H can be entered.

**Prior Knowledge Needed**

- How to create `if` statements.
- How to create a condition controlled loop structure.

------

## Challenge 14

Write a program to count the number of words in a sentence.

The user enters a sentence.

The program responds with the number of words in the sentence.

**Hint**

Look for spaces and full stops in the string.

**Extension**

Develop a program that will display a sentence backwards after entered.

**Prior Knowledge Needed**

- How to use string manipulation functions
- Using loops and selection

------

## Challenge 15

Guess the number game.

The computer selects a random number between 1 and 100.

The user keeps guessing which number the computer has chosen until they get it right.

The computer responds 'got it' or 'too high' or 'too low' after each guess.

After the user has guessed the number the computer tells them how many attempts they have made.

**Extension**

Reverse the game. You think of a number. Get the computer to guess a number and you respond with too high(H), too low(L), or got it(G). Make sure the computer has a game plan - don't just let it guess at random!

------

## Challenge 16

Write a **function** that will convert a score into a grade. The function will return 'A' (Absent) -> 'U'.

The function will require an argument to do its job: the marks.

The formula is 	>= 80 -> A, >= 70 -> B, >= 60 -> C, etc

Assume the maximum marks are 100.

having written the function, we want to use it three times.

Write a program with the function that allows the user to enter two marks and display the grade. It then adds the two results together and displays the student's overall grade e.g

```
Enter marks 1 : 78
Enter marks 2 : 67
Result
Grade 1 : B
Grade 2 : C
Final Grade : B
```

**Extension**

Allow a maximum marks other than 100. This will require the user to enter both maximum marks and marks scored. The function will also require the maximum marks in order to calculate the grade so another argument will be needed.

**Prior Knowledge Needed**

- How to create functions
- How to use parameters and arguments

------

## Challenge 17

Write a program to perform a basic 'Ceasar' encryption and decryption on text.

This algorithm works by moving letters along by an 'offset'. if the offset is 2 then a -> c, b -> d, c -> e etc.

Try to write two functions - one called `encrypt` and one called `decrypt`.

The user selects whether they want to encrypt or decrypt.

The user enters sentence to encrypt and the encryption key (the offset)

The program responds with the encrypted or decrypted version.

------

## Challenge 18

Create a simple treasure hunt game. Create an array of integers of size 100.

In a random position in the array, store the integer 1. This is where the treasure is.

**Algorithm**

1. Repeat until the treasure is found
   1. Get the user to enter the location where they think the treasure is.
   2. If there is 1 at the location, display 'success'.

**Extension**

Add a feature to say 'hot', 'cold' or 'warm' depending on how close their guess was to the actual hidden location. 'Hot' means the user is close, 'cold' means the user is far.

------

## Challenge 19

**BLACKJACK**

Play a game that draws two random cards. The player then decides to draw or stick.

If the score goes over 21, the player loses (goes 'bust').

Keep drawing until the player sticks.

After the player stick, the computer draws two cards. If the player beats the score, they win.

**Added Complication**

Aces can be 1 or 11! The number used is whichever get the highest score.

------

## Challenge 20

Write a program that will generate a random playing card e.g '9 of Hearts', 'Queen of Spades' when the return key is pressed.

Rather than generating a random number from 1 to 52, create two random cards - one for the suit and one for the card.

Update the program in [Challenge 9](##Challenge 9)  so that the same card is not drawn twice. Update this program by using an array to prevent the same card being dealt twice from the pack of cards.

Convert this code into a function `deal_cards` that will display the cards dealt or 'no more cards'.

Call your function 53 times.

___

