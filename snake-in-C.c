#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<unistd.h>
#include<time.h>

#define HEIGHT 20
#define WIDTH 40

int snakeTailX[100], snakeTailY[100];
int snakeTailLen;
int gameover, key, score;
int x,y, fruitx,fruity;
