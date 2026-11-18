//added the libraries
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<unistd.h>
#include<time.h>

//defined the game span

#define HEIGHT 20
#define WIDTH 40

//init the require properties

int snakeTailX[100], snakeTailY[100];
int snakeTailLen;
int gameover, key, score;
int x,y, fruitx,fruity;


//the functions to move cursor to (0,0)
//

void goTOXY(int x , int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;

	setConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord;
}

void setup(){
	srand(time(NULL));
	gameover = 0;
	score = 0;
	snakeTailLen = 0;

	// initial snake position
	
	x = WIDTH /2;
	y = HEIGHT /2;

	//initial direction (start at zero)
	
	key = 0;

	//initial position of fruits 
	fruitx = rand() % (WIDTH -2) + 1;
	fruity = rand() % (HEIGHT -2) +1 
}
