# Word Ladder Game Design

## Input

1. Start Word (startWord): String, provided by Player 1 as the beginning of the ladder.  
2. End Word (endWord): String, provided by Player 1 as the target for Player 2 to reach.  
3. Next Word (nextWord): String, entered by Player 2 during the game to build the word ladder.  
4. Quit Signal ("0"): Special input allowing either player to give up or stop the game.  

## Output

1. Game Messages: Informative messages for players about the game state:
   - "Invalid word. Try again.": If the word entered by Player 2 is not valid.
   - "Word must differ by exactly one letter. Try again.": If the word entered does not meet the game rules.
   - "Congratulations! You built the word ladder! You Won!": If Player 2 completes the word ladder successfully.
   - "Player 2 gave up. You Lose!": If Player 2 quits the game.  
   - "Player 1 wins this round!": If Player 2 fails to complete the ladder.  

2. Game Stats: Total rounds, wins, and losses for both players.

## Operation

### Rules

1. The word ladder must begin with startWord and end with endWord.
2. Words in the ladder must differ by exactly one letter.
3. All words must exist in the dictionary.

## Pseudo Code

1. Start the program.

2. Declare variables:
   - startWord, endWord, currentWord, nextWord (strings).
   - totalRounds, player1Wins, player2Wins, player1Losses, player2Losses (integers).
   - dictionary: A list of valid English words.

3. Do the following in a loop:
   - Increment totalRounds.
   - Prompt Player 1 to provide startWord (or "0" to quit).  
     - If input is "0", break the loop and end the game.  
   - Prompt Player 1 to provide endWord.

4. Set currentWord = startWord.

5. While Player 2 is building the ladder:
   - Prompt Player 2 to enter nextWord (or "0" to quit).  
     - If input is "0", print "Player 2 gave up. You Lose!"; increment player1Wins, player2Losses; break.
   - Check if nextWord is in the dictionary:
     - If not, print "Invalid word. Try again.", and continue.
   - Check if nextWord differs from currentWord by exactly one letter:
     - If not, print "Word must differ by exactly one letter. Try again.", and continue.
   - Set currentWord = nextWord.

6. If currentWord == endWord:
   - Print "Congratulations! You built the word ladder! You Won!".
   - Increment player2Wins.
   - Allow Player 2 to provide start and end words for the next round.
   - Break the loop.

7. If ladder not completed:
   - Print "Player 1 wins this round!".
   - Increment player1Wins.

8. Repeat until Player 1 quits (input "0").

9. Print final game stats:
   - Total rounds played, wins, and losses for both players.

10. End the program.


 ## Flow chart
 
