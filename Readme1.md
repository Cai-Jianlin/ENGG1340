ENGG 1340 Project
3035693492 	Jarvis Yu
3035500970	Jianlin Cai

Tic Tac Toe game

We can use C++ to write a program for users to play the game.

We have several variables: 
n denotes n by n matrix for the game space.
xs and ys denote the coordinate of the game space.
If there is 3 diagonal sets, horizontal sets or vertical sets, then there would be winner.

If there is a draw when all the empty spaces are filled in but no sets appear.

At any time, the game can be saved and loaded.
But the Game with Status “Finished” cannot be loaded.

Game ID 	X coordinate	O coordinate	Winner	Status
1	(1,2);(3,1)	(3,3);(2,2)	None	Not finished
2	(1,1);(2,2);(3,3)	(1,2);(2,3)	X	Finished

 
