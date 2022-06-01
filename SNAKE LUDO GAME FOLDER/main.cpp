#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <windows.h>
#include <cstdio>
#include <conio.h>
#include <ctime>
#include <time.h>
using namespace std;
void loding();
void menu1();
void board();
void ldd(void);
void one();
void two();
void three();
void four();
void five();
void six();
void snake(void);
void start1();
void start2();
void dice();
void notp(void);//notp = number of the places
void gotoxy(int, int);
void p(void);
void p1(void);
void p2(void);
void menu(void);
void gamechart(void);
void about(void);
void back(void);
void changeColor(int);
void ladder(void);
void pm1();
void pm2();
void movesnake(void);
void movesnake2(void);
void moveladder(void);
void moveladder2(void);
void bomb1(void);
void bomb2(void);
void bomb_destroy1(void);
void bomb_destroy2(void);
void fPositions1();
void fPositions2();
void finish();
void option(void);//void mouse(void);
void load(void);
void save(void);
ofstream out;
ifstream in;
int k1 = 2;
int k2 = 2;
int a = 4;//column for player1
int b = 38;//row for player1
int c = 3;
int w = 4;//column for player2
int v = 38;//row for player2
int x;
int n;//dice number
int sc1 = 1;
int sc2 = 1;
int turn = 1;
int k = 1;
int l = 1;
int l2 = 1;
int ai[7];
int aj[7];
int bi[7];
int bj[7];
int notp1[100][100];
int sl = 0;
int ti = 0;
int tj = 0;
int i = 4;//the columns
int j = 1;//the rows
int loca;
int locb;
int locw;
int locv;
int bn;//bomb number
int kb = 5;
int hb = 3;
int bnumber1 = 3;
int bnumber2 = 3;
int timer1 = 1;
int timer2 = 1;
int counter1 = 3;
int counter2 = 3;
int bombnumber;
int sp1[7];
int sp[7];
string square="01234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950";
string nul= "          ";
string ernul= "          ";
string erase="01234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950";
int main() {
	system("title charming ludo snake game");
	system("color C0");
	//codes for changing the default size of terminal
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the console's current dimensions
	MoveWindow(console, r.left, r.top, 1500, 900, TRUE); // 1800 width, 800 height

	srand(time(NULL));

	menu1();

	return 0;
}
