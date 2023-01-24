# theHundredGame

## Assignment Desciption

The 100 game is a simple variant of Nim.  You and your opponent start with a joint total of 0.  You take turns adding a number from 1-10 to the total until the total gets to 100.  The player taking the total to 100 wins the game.  You will design a program that plays one player as the computer choosing largely random numbers and have the user act as the other player.

Some things to note:

- Your computer version should generate random guesses unless the current total is 90-99.  Then 
  it should pick whatever number will let it win.
- You may assume all of the inputs will be integers, but you should include checks to make sure 
  the integers they enter are legal (e.g., you should check if they selected a legal choice, did they pick a number not between 1 and 10, will their number put the total over 100, etc.).
- You should let the player decide who is going to go first.
- At the end of each game, the program should ask if you want to play again.