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
void loding()
{
  system("color 64");
  char a[20];
  for (int i = 0; i < 20; i++)
	{
    a[i] = char(475);
  }
  int i = 0;
  while (i < 10)
	 {
    gotoxy(75, 19);
    cout << "starting the game:           " << i;
    i++;
    gotoxy(77, 20);
    for (int j = 0; j < i; j++)
		{
      cout << a[j];
      Sleep(50);
    }

  }
}
void gamechart(void)
{
	loding();
	system("cls");
	//10*10 game gamechart
	for (int s = 1; s <= 10; ++s) {
		for (int i = 0; i <= 40; ++i) {
			cout << "_ ";
		}
		cout << "\n";
		for (int k = 1; k <= 3; ++k) {
			for (int j = 1; j <= 5; ++j) {
				cout << "|       |       ";
			}cout << "|\n";
		}
	}
	for (int i = 0; i <= 40; ++i) {
		cout << "_ ";
	}
	notp();
	p1();
	p2();
	snake();
	sl = 0;
	ldd();
}

void back(void)
{
	gotoxy(65,40); cout << "\n0.back\n";
	int x;
	cin >> x;
	if (x == 0) {
		system("cls");
		menu();
	}
}
void about(void)
{
	gotoxy(50, 12); cout << "------------------ABOUT THE DEVELOPER OF THE GAME-----------------------";
	gotoxy(50, 18);	cout << "Developed by : SOUMYADIP MALLICK";
	gotoxy(50, 20);	cout << "1st year B.E student of JADAVPUR UNIVERSITY";
	gotoxy(50, 22);	cout << "Dept : Instrumentation and Electronics Engineering";
	gotoxy(50, 24); cout << "1st year B.E student form JADAVPUR UNIVERSITY";
	gotoxy(50, 25); cout << "This is a Snake and Ladder game.";
	gotoxy(50, 26); cout << "This Game is made May,2022";
	gotoxy(50, 27); cout << "This is my 1st project in my collage life";
	gotoxy(50, 28); cout << "used c++ to develop the game";
	gotoxy(50, 29); cout << "used several higher concept of c++, while making this game";
	gotoxy(50, 30); cout << "-----------------------PLAY AND ENJOY-----------------------------------";
	gotoxy(50, 32);
	cout << "0.back";
}
void board()
{
	// For Windows use: system("cls");
	system("cls");
	// For Linux use: system("clear");
	// system("clear");
	cout.width(48);
	cout<<"Snake And Ladder\n\n";
	cout.width(54);
	cout<<"Player 1   vs  Player 2 " << endl ;
	cout<<"Snake Ludo Board" << endl ;
	cout<<"Snake will slide down you to the bottom of it" << endl ;
	cout<<"ladder will help you to climb on the top of it" << endl ;
	cout<<"save yourself from snake" << endl ;
	cout<<"              ____ ____ ____ ____ ____ ____ ____ ____ ____ ____    ___________"  << endl;
	cout << "             |    |    |    |    |    |    |    |    |    |Win |  | Ladders:  |"<<endl;
	cout << "             | " << square[72] << square[73] << " | " << square[74] << square[75] << " | " << square[76] << square[77] << " | " << square[78] << square[79] << " | " << square[80] << square[81] << " | " << square[82] << square[83] << " | "<< square[84] << square[85] << " | " << square[86] << square[87] << " | " << square[88] << square[89] << " | "<< square[90] << square[91] <<" |  |   13-22   |"<<endl;
	cout << "             |____|___*|____|/___|____|___\\|____|____|___*|____|  |   16-38   |"<<endl;
	cout << "             |    |    |*  /|    |    |    | \\  |    |   *|*   |  |   19-46   |"<<endl;
	cout << "             | " << square[52] << square[53] << " | " << square[54] << square[55] << " | " << square[56] << square[57] << " | " << square[58] << square[59] << " | " << square[60] << square[61] << " | " << square[62] << square[63] << " | "<< square[64] << square[65] << "\\| " << square[66] << square[67] << " | " << square[68] << square[69] << " |*"<< square[70] << square[71] <<" |  |   33-44   |"<<endl;
	cout << "             |___*|____|___*|____|____|____|____|\\___|____|*___|  |___________|"<<endl;
	cout << "             |   *|    |    |*   |    |    |   /|  \\ |    |*   |   ___________" << endl;
	cout << "             | " << square[32] << square[33] << " | " << square[34] << square[35] << " | " << square[36] << square[37] << " | " << square[38] << square[39] << " | " << square[40] << square[41] << " | " << square[42] << square[43] << " | "<< square[44] << square[45] << " | " << square[46] << square[47] << "\\| " << square[48] << square[49] << " |*"<< square[50] << square[51] <<" |  | Snakes:   |"<<endl;
	cout << "             |____|___\\|____|____|____|*___|/___|____|\\___|*___|  |   26-4    |"<<endl;
	cout << "             |    |    |\\   |    |   *|   /|    |    |  \\ |*   |  |   31-21   |"<<endl;
	cout << "             | " << square[12] << square[13] << " | " << square[14] << square[15] << " | " << square[16] << square[17] << " | " << square[18] << square[19] << " | " << square[20] << square[21] << " | " << square[22] << square[23] << " | "<< square[24] << square[25] << " | " << square[26] << square[27] << " | " << square[28] << square[29] << " | "<< square[30] << square[31] <<" |  |   42-24   |"<<endl;
	cout << "             |____|____|____|____|*___|____|____|____|____|____|  |   49-20   |"<<endl;
	cout << "             |Home|    |    |   *|    |    |    |    |    |    |  |___________|"<<endl;
	cout << "             | " << square[1]<<nul[1] << " | " << square[2]<<nul[2] << " | " << square[3]<<nul[3]<< " | " << square[4]<<nul[4] << " | " << square[5] <<nul[5]<< " | " << square[6]<<nul[6]<< " | "<< square[7]<<nul[7] << " | " << square[8]<<nul[8] << " | " << square[9] <<nul[9]<< " | "<< square[10]<<square[11] <<" |" << endl;
	cout << "             |____|____|____|____|____|____|____|____|____|____|" << endl;
	cout.width(53);
}

void menu1(void)
 {//first menu
	system("color C0");
	Sleep(400);
   cout << "\n W";
   Sleep(200);
   cout << "e";
   Sleep(200);
   cout << "l";
   Sleep(200);
   cout << "c";
   Sleep(200);
   cout << "o";
   Sleep(200);
   cout << "m";
   Sleep(200);
   cout << "e";
   Sleep(200);
   cout << " ";
   Sleep(200);
   cout << "t";
   Sleep(200);
   cout << "o";
   Sleep(200);
   cout << " ";
   Sleep(200);
   cout << "S";
   Sleep(200);
   cout << "N";
   Sleep(200);
   cout << "A";
   Sleep(200);
   cout << "K";
   Sleep(200);
   cout << "E";
   Sleep(200);
   cout << " ";
   Sleep(200);
   cout << "L";
   Sleep(200);
   cout << "U";
   Sleep(200);
   cout << "D";
   Sleep(200);
   cout << "O";
   Sleep(200);
   cout << " ";
   Sleep(200);
   cout << "M";
   Sleep(200);
   cout << "A";
   Sleep(200);
   cout << "S";
   Sleep(200);
   cout << "T";
   Sleep(200);
   cout << "E";
   Sleep(200);
   cout << "R";
   Sleep(200);
   cout << ".";
   Sleep(200);
   cout << ".";
   Sleep(200);
   cout << ".";
   Sleep(200);
	 board();
	 Sleep(7000);
	 system("cls");

	gotoxy(75, 7); cout << "Now, Get your snake ludo board at your own phone/laptop";
	gotoxy(75, 9); cout << "Check the help section to know how to play the game";
	gotoxy(75, 18); cout << "::::::MENU::::::";
	gotoxy(82, 20); cout << "1.start";
	gotoxy(82, 22); cout << "2.settings";
	gotoxy(82, 24); cout << "3.system overview";
	gotoxy(82, 26); cout << "4.help";
	gotoxy(82, 28); cout << "5.about";
	gotoxy(82, 30);cout << "6.exit";
	gotoxy(82, 32);cout << "Enter the 1/2/3/4/5/6 from the keyboard ----";
	gotoxy(85, 34);

Beep(247, 300);Sleep(240);
Beep(330, 300);Sleep(240);
Beep(330, 300);Sleep(240);
Beep(370, 300);Sleep(240);
Beep(555, 300);Sleep(240);
Beep(555, 300);Sleep(240);

//end of music
	cin >> x;

	switch (x) {
	case 1:
		system("cls");
		gamechart();
		k++;
		p();
		break;
	case 2:
		system("cls");
		option();
		break;
	case 3:
		system("cls");
		system("color A0");
		//10*10 game gamechart
		for (int s = 1; s <= 10; ++s) {
			for (int i = 0; i <= 40; ++i) {
				cout << "_ ";
			}
			cout << "\n";
			for (int k = 1; k <= 3; ++k) {
				for (int j = 1; j <= 5; ++j) {
					cout << "|       |       ";
				}cout << "|\n";
			}
		}
		for (int i = 0; i <= 40; ++i) {
			cout << "_ ";
		}
		notp();
		snake();
		sl = 0;
		ldd();
		gotoxy(118, 5); cout << "This is your Snake ladder board";
		gotoxy(118, 10); cout << "l>> considers for ladders";
		gotoxy(118,12); cout << "s>> considers for snakes";
		gotoxy(118,18); cout << "press 0 to go back menu";
		break;

	case 4:
		system("cls");
		system("color 64");
		gotoxy(65, 10); cout << "--------Know how to play the game----------";
		gotoxy(65, 24); cout << "This is a game of snakes and ladders";
		gotoxy(65, 25); cout << "with some exciting options";
		gotoxy(65, 26); cout << "such as bitting by other players";
		gotoxy(65, 27); cout << "and placing some bombs in the map\n";
		gotoxy(65, 28); cout << "we have a cheating code in the game";
		gotoxy(65, 29); cout << "by which you can enter INT_MAX value";
		gotoxy(65, 30); cout << "and you will see the automatic movement";
		gotoxy(65, 31); cout << " of the players";
		break;
	case 5:
		system("cls");
		system("color D0");
		about();
		break;
	case 6:
		exit(0);
		break;
	default:
		gotoxy(0, 6); cout << "invalid key!you have to choose between 1 to 6";
		menu();
		break;
	}

	back();

}
void p(void) {
	system("Color E1");
	gotoxy(100, 30); cout << "1.roll the dice";
	gotoxy(100, 32); cout << "2.place bomb";
	gotoxy(100, 34); cout << "3.save";
	gotoxy(100, 36); cout << "4.back to the menu";
	gotoxy(100, 38); cout << "0.exit from the game";
	gotoxy(140, 36); cout << "||player 1 is represented by '@' ||";
	gotoxy(140, 38); cout << "||player 2 is represented by '#' ||";
	gotoxy(0, 41);
	cin >> x;
	switch (x) {
	case 1:
		if (timer1 == 0) {
			counter1--;
		}
		if (timer2 == 0) {
			counter2--;
		}
		while (x == 1) {

			while (turn == 1) {
				dice();
				fPositions1();
				pm1();
				finish();
				if (sc2 == 0) {
					locw = w;
					locv = v;
					gotoxy(locw, locv);
					cout << "#";
				}
				loca = a;
				locb = b;
				movesnake();
				moveladder();
				if ((w == a) && (v == b)) {
					w = 4;
					v = 38;
					k2 = 2;
				}
				bomb_destroy2();
				if (n == 6) {
					gotoxy(111, 8); cout << "    ";
					gotoxy(111, 6); cout << "turn";
					start1();
					p();
					pm1();
					finish();
					if (sc2 == 0) {
						locw = w;
						locv = v;
						gotoxy(locw, locv);
						cout << "#";
					}
					loca = a;
					locb = b;
					movesnake();
					moveladder();
					if ((w == a) && (v == b)) {
						w = 4;
						v = 38;
						k2 = 2;
					}
					bomb_destroy2();
					continue;
				}
				turn--;
				gotoxy(111, 6); cout << "    ";
				gotoxy(111, 8); cout << "turn";
				p();
			}
			while (turn == 0) {
				dice();
				fPositions2();
				gotoxy(3, 38); cout << " ";
				pm2();
				finish();
				if (sc1 == 0) {
					loca = a;
					locb = b;
					gotoxy(loca, locb);
					cout << "@";
				}
				locw = w;
				locv = v;
				movesnake2();
				moveladder2();
				if ((w == a) && (v == b)) {
					a = 4;
					b = 38;
					k1 = 2;
				}
				bomb_destroy1();
				if (n == 6) {
					gotoxy(111, 6); cout << "    ";
					gotoxy(111, 8); cout << "turn";
					start2();
					p();
					pm2();
					finish();
					if (sc1 == 0) {
						loca = a;
						locb = b;
						gotoxy(loca, locb);
						cout << "@";
					}
					locw = w;
					locv = v;
					movesnake2();
					moveladder2();
					if ((w == a) && (v == b)) {
						a = 4;
						b = 38;
						k1 = 2;
					}
					bomb_destroy1();
					continue;
				}
				turn++;
				gotoxy(111, 8); cout << "    ";
				gotoxy(111, 6); cout << "turn";
				p();
			}
			continue;
		}
		break;
	case 2:
		if (turn == 1) {
			if (timer1 == 0) {
				gotoxy(100, 13);
				cout << "you've already put a bomb ,you can not place twice in a row!!";
				Sleep(3000);
				gotoxy(100, 13);
				cout << "                                                             ";
				p();
			}
			else {
				if (bnumber1 != 0) {
					bomb1();
					bnumber1--;
					turn = 0;
					gotoxy(120, 6);
					cout << bnumber1;
					p();
				}
				else {
					gotoxy(120, 6);
					cout << "you do not have enough bomb!!";
					Sleep(2000);
					gotoxy(120, 6);
					cout << "                              ";
					turn = 0;
					p();
				}
			}
		}
		if (turn == 0) {
			if (timer2 == 0) {
				gotoxy(100, 14);
				cout << "you've already put a bomb ,you can not place twice in a row!!";
				Sleep(3000);
				gotoxy(100, 14);
				cout << "                                                              ";
				p();
			}
			else {
				if (bnumber2 != 0) {
					bomb2();
					bnumber2--;
					turn = 1;
					gotoxy(120, 8);
					cout << bnumber2;
					p();
				}
				else {
					gotoxy(120, 8);
					cout << "you do not have enough bomb!! ";
					Sleep(2000);
					gotoxy(120, 8);
					cout << "                              ";
					turn = 1;
					p();
				}
			}
		}
		break;
	case 3:
		save();
		break;
	case 4:
		system("cls");
		menu();
		break;
	case 0:
		exit(0);
		break;
	default:

		gotoxy(100, 35); cout << "invalid key!!!";
		p();

		break;
	}

}

void p1(void) {
	if (k == 1) {
		gotoxy(111, 6); cout << "turn";
		k--;
	}
	gotoxy(100, 6); cout << "player 1 :";

}
void p2(void) {
	gotoxy(100, 8); cout << "player 2 :";

}

void dice() {
	srand(time(NULL));
	n = rand();
	n = 1 + n % 6;

	switch (n)
	{
	case 1:
		one();
		break;
	case 2:
		two();
		break;
	case 3:
		three();
		break;
	case 4:
		four();
		break;
	case 5:
		five();
		break;
	case 6:
		six();
		break;
	default:
		cout << "invalid number";

	}
}
void notp(void)
{//number of the places
	int num = 100;
	int n1 = 1;
	for (int j = 3; j <= 40; j += 4) {
		if (n1 == 1) {
			for (int i = 5; i <= 80; i += 8) {
				gotoxy(i, j);
				cout << num;
				notp1[i][j] = num;
				num--;
			}
			n1--;
		}
		else {
			for (int i = 77; i >= 5; i -= 8) {
				gotoxy(i, j);
				cout << num;
				notp1[i][j] = num;
				num--;
			}
			n1++;
		}
	}
}

void snake(void) {
	sl = 0;
	ti = 0;
	tj = 0;
	i = 4;
	j = 1;
	while (sl < 7) {
		ti = i;
		tj = j;
		i = 8 * (1 + rand() % 10) - 4;
		j = 4 * (1 + rand() % 10) - 3;
		if ((i == 4 && j == 1) || (i == 4 && j == 37)) {
			continue;
		}
		if ((i == ti) && (j == tj)) {
			continue;
		}
		gotoxy(i, j);
		cout << "s<<";
		ai[sl] = i;
		aj[sl] = j;
		sl++;
	}
}
void ldd(void) {
	int sl1 = 0;
	ti = 0;
	tj = 0;
	i = 4;
	j = 1;
	while (sl < 7) {
		ti = i;
		tj = j;
		i = 8 * (1 + rand() % 10) - 4;
		j = 4 * (1 + rand() % 10) - 3;
		sl1 = 0;
		while (sl1 < 7) {
			if (ai[sl1] == i && aj[sl1] == j) {
				break;
			}
			sl1++;
		}
		if (sl1 < 7) {
			continue;
		}

		if ((i == 4 && j == 1) || (i == 4 && j == 37)) {
			continue;
		}
		if (i == ti && j == tj) {
			continue;
		}
		else {
			gotoxy(i, j);
			cout << "l>>";
			bi[sl] = i;
			bj[sl] = j;
			sl++;
		}
	}
}
void one()
{
	gotoxy(100, 20); cout << " -----" << endl;
	gotoxy(100, 21); cout << "|     |" << endl;
	gotoxy(100, 22); cout << "|  0  |" << endl;
	gotoxy(100, 23); cout << "|     |" << endl;
	gotoxy(100, 24); cout << " -----" << endl;
	gotoxy(100, 25); cout << "Dice shows : 1" << endl;
}
void two()
{
	gotoxy(100, 20); cout << " -----" << endl;
	gotoxy(100, 21); cout << "|    O|" << endl;
	gotoxy(100, 22); cout << "|     |" << endl;
	gotoxy(100, 23); cout << "|O    |" << endl;
	gotoxy(100, 24); cout << " -----" << endl;
	gotoxy(100, 25); cout << "Dice shows : 2" << endl;
}
void three()
{
	gotoxy(100, 20); cout << " -----" << endl;
	gotoxy(100, 21); cout << "|    O|" << endl;
	gotoxy(100, 22); cout << "|  O  |" << endl;
	gotoxy(100, 23); cout << "|O    |" << endl;
	gotoxy(100, 24); cout << " -----" << endl;
	gotoxy(100, 25); cout << "Dice shows : 3" << endl;
}
void four()
{
	gotoxy(100, 20); cout << " -----" << endl;
	gotoxy(100, 21); cout << "|O   O|" << endl;
	gotoxy(100, 22); cout << "|     |" << endl;
	gotoxy(100, 23); cout << "|O   O|" << endl;
	gotoxy(100, 24); cout << " -----" << endl;
	gotoxy(100, 25); cout << "Dice shows : 4" << endl;
}
void five()
{
	gotoxy(100, 20); cout << " -----" << endl;
	gotoxy(100, 21); cout << "|O   O|" << endl;
	gotoxy(100, 22); cout << "|  O  |" << endl;
	gotoxy(100, 23); cout << "|O   O|" << endl;
	gotoxy(100, 24); cout << " -----" << endl;
	gotoxy(100, 25); cout << "Dice shows : 5" << endl;
}
void six()
{
	//cout << "\a";
	gotoxy(100, 20); cout << " -----" << endl;
	gotoxy(100, 21); cout << "|O   O|" << endl;
	gotoxy(100, 22); cout << "|O   O|" << endl;
	gotoxy(100, 23); cout << "|O   O|" << endl;
	gotoxy(100, 24); cout << " -----" << endl;
	gotoxy(100, 25); cout << "Dice shows : 6" << endl;
}

void start1(void) {
	if (sc1 == 1) {
		gotoxy(a, b); cout << "@";
		sc1--;
	}
}
void start2(void) {
	if (sc2 == 1) {
		gotoxy(w - 1, v); cout << "#";
		sc2--;
	}
}
void gotoxy(int x, int y) {	//coordinating the locations
  static HANDLE h = NULL;
  if (!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD coord{ 0,0 };
		coord.X = x;
		coord.Y = y;
  SetConsoleCursorPosition(h, coord);
}

void pm1(void) {
	int h = 0;
	if (turn == 1) {
		if (sc1 == 0) {
			while (h < n) {
				if (a < 76 && (k1 % 2 == 0)) {
					gotoxy(a, b); cout << "@";
					a += 8;
					gotoxy(a - 8, b); cout << " ";
					gotoxy(a, b); cout << "@";
					h++;
					Sleep(500);
				}
				else {
					if (((a == 76) || (a == 4)) && (l == 1)) {
						k1--;
						h++;
						gotoxy(a, b); cout << " ";
						b -= 4;
						gotoxy(a, b); cout << "@";
						l--;
						Sleep(500);
					}
					while (h < n) {
						if (a > 4) {
							gotoxy(a, b); cout << "@";
							a -= 8;
							gotoxy(a + 8, b); cout << " ";
							gotoxy(a, b); cout << "@";
							h++;
							Sleep(500);
						}
						else {
							if (((a == 76) || (a == 4)) && (l == 0)) {
								k1++;
								h++;
								gotoxy(a, b); cout << " ";
								b -= 4;
								gotoxy(a, b); cout << "@";
								l++;
								Sleep(500);
							}
							break;
						}
					}
				}
			}
		}
	}
}
void pm2(void) {
	int h = 0;
	if (turn == 0) {
		if (sc2 == 0) {
			while (h < n) {
				if (w < 76 && (k2 % 2 == 0)) {
					gotoxy(w, v); cout << "#";
					w += 8;
					gotoxy(w - 8, v); cout << " ";
					gotoxy(w, v); cout << "#";
					h++;
					Sleep(500);
				}
				else {
					if (((w == 76) || (w == 4)) && (l2 == 1)) {
						k2--;
						h++;
						gotoxy(w, v); cout << " ";
						v -= 4;
						gotoxy(w, v); cout << "#";
						l2--;
						Sleep(500);
					}
					while (h < n) {
						if (w > 4) {
							gotoxy(w, v); cout << "#";
							w -= 8;
							gotoxy(w + 8, v); cout << " ";
							gotoxy(w, v); cout << "#";
							h++;
							Sleep(500);
						}
						else {
							if (((w == 76) || (w == 4)) && (l2 == 0)) {
								k2++;
								h++;
								gotoxy(w, v); cout << " ";
								v -= 4;
								gotoxy(w, v); cout << "#";
								l2++;
								Sleep(500);
							}
							break;
						}
					}
				}
			}
		}
	}
}
void changeColor(int) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	system("Color E1");
	SetConsoleTextAttribute(h, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
}
void ladder(void) {
	int ldd = 0;
	//int snake = 0;

}
void movesnake(void) {
	int sp1[7];
	int sp[7];
	int j1 = 3;
	int i1 = 5;
	int snake = 0;
	for (snake = 0; snake < 7; snake++) {
		sp[snake] = notp1[ai[snake]][aj[snake]];
		sp1[snake] = (2 + rand() % (sp[snake] - 2));
		for (j1 = 3; j1 <= 40; j1 += 4) {
			for (i1 = 5; i1 <= 80; i1 += 8) {
				if (sp1[snake] == notp1[i1][j1]) {
					break;
				}
			}
			if (sp1[snake] == notp1[i1][j1]) {
				break;
			}
		}
		if ((loca == ai[snake]) && (locb - 1 == aj[snake])) {
			gotoxy(loca, locb); cout << " ";
			gotoxy(i1 - 1, j1 - 1); cout << "@";
			a = i1 - 1;
			b = j1 - 1;
			if (((b == 6) || (b == 14) || (b == 22) || (b == 30) || (b == 38))) {
				k1 = 2;
				l = 1;
			}
			else {
				k1 = 1;
				l = 0;
			}
		}
	}
}
void movesnake2(void) {
	int sp1[7];
	int sp[7];
	int i2 = 5;
	int j2 = 3;
	int snake = 0;
	for (snake = 0; snake < 7; snake++) {
		sp[snake] = notp1[ai[snake]][aj[snake]];
		sp1[snake] = (2 + rand() % (sp[snake] - 2));
		for (j2 = 3; j2 <= 40; j2 += 4) {
			for (i2 = 5; i2 <= 80; i2 += 8) {
				if (sp1[snake] == notp1[i2][j2]) {
					break;
				}
			}
			if (sp1[snake] == notp1[i2][j2]) {
				break;
			}
		}
		if ((locw == ai[snake]) && (locv - 1 == aj[snake])) {
			gotoxy(locw, locv);
			cout << " ";
			gotoxy(i2 - 1, j2 - 1);
			cout << "#";
			w = i2 - 1;
			v = j2 - 1;
			if (((v == 6) || (v == 14) || (v == 22) || (v == 30) || (v == 38))) {
				k2 = 2;
				l2 = 1;
			}
			else {
				k2 = 1;
				l2 = 0;
			}
		}
	}
}
void moveladder(void) {

	int sp1[7];
	int sp[7];
	int j1 = 3;
	int i1 = 5;
	int mbyl = 0;
	for (mbyl = 0; mbyl < 7; mbyl++) {
		sp[mbyl] = notp1[bi[mbyl]][bj[mbyl]];
		sp1[mbyl] = ((sp[mbyl] + 1) + rand() % (99 - sp[mbyl]));
		for (j1 = 3; j1 <= 40; j1 += 4) {
			for (i1 = 5; i1 <= 80; i1 += 8) {
				if (sp1[mbyl] == notp1[i1][j1]) {
					break;
				}
			}
			if (sp1[mbyl] == notp1[i1][j1]) {
				break;
			}
		}
		if ((loca == bi[mbyl]) && (locb - 1 == bj[mbyl])) {
			gotoxy(loca, locb);
			cout << " ";
			gotoxy(i1 - 1, j1 - 1);
			cout << "@";
			a = i1 - 1;
			b = j1 - 1;
			if (((b == 6) || (b == 14) || (b == 22) || (b == 30) || (b == 38))) {
				k1 = 2;
				l = 1;
			}
			else {
				k1 = 1;
				l = 0;
			}
		}
	}


}
void moveladder2(void) {
	int sp1[7];
	int sp[7];
	int j2 = 3;
	int i2 = 5;
	int mbyl = 0;
	for (mbyl = 0; mbyl < 7; mbyl++) {
		sp[mbyl] = notp1[bi[mbyl]][bj[mbyl]];
		sp1[mbyl] = ((sp[mbyl] + 1) + rand() % (99 - sp[mbyl]));
		for (j2 = 3; j2 <= 40; j2 += 4) {
			for (i2 = 5; i2 <= 80; i2 += 8) {
				if (sp1[mbyl] == notp1[i2][j2]) {
					break;
				}
			}
			if (sp1[mbyl] == notp1[i2][j2]) {
				break;
			}
		}
		if ((locw == bi[mbyl]) && (locv - 1 == bj[mbyl])) {
			gotoxy(locw, locv);
			cout << " ";
			gotoxy(i2 - 1, j2 - 1);
			cout << "#";
			w = i2 - 1;
			v = j2 - 1;
			if (((v == 6) || (v == 14) || (v == 22) || (v == 30) || (v == 38))) {
				k2 = 2;
				l2 = 1;
			}
			else {
				k2 = 1;
				l2 = 0;
			}
		}
	}

}
void bomb1(void) {
	gotoxy(100, 40);
	cout << "enter home number:";
	gotoxy(100, 41);
	cin >> bn;
	for (hb = 3; hb <= 40; hb += 4) {
		for (kb = 5; kb <= 80; kb += 8) {
			if (bn == notp1[kb][hb]) {
				break;
			}
		}
		if (bn == notp1[kb][hb]) {
			break;
		}
	}
	gotoxy(kb - 4, hb);
	cout << "!";
	gotoxy(100, 40);
	cout << "                    ";
	gotoxy(100, 41);
	cout << "    ";
	timer1 = 0;
	gotoxy(0, 41);
}
void bomb2(void) {
	gotoxy(100, 40);
	cout << "enter home number:";
	gotoxy(100, 41);
	cin >> bn;
	for (hb = 3; hb <= 40; hb += 4) {
		for (kb = 5; kb <= 80; kb += 8) {
			if (bn == notp1[kb][hb]) {
				break;
			}
		}
		if (bn == notp1[kb][hb]) {
			break;
		}
	}
	gotoxy(kb - 4, hb);
	cout << "!";
	gotoxy(100, 40);
	cout << "                    ";
	gotoxy(100, 41);
	cout << "    ";
	timer2 = 0;
	gotoxy(0, 41);
}
void bomb_destroy1(void) {
	if (counter1 == 0) {
		if (((w == kb - 1) && (v == hb - 1)) || ((w == kb - 9) && (v == hb - 1)) || ((w == kb - 17) && (v == hb - 1)) || ((w == kb + 7) && (v == hb - 1)) || ((w == kb + 15) && (v == hb - 1))) {
			gotoxy(w, v);
			cout << " ";
			w = 4;
			v = 38;
			gotoxy(w, v);
			cout << "#";
		}
		gotoxy(kb - 4, hb);
		cout << " ";
		timer1 = 1;
		counter1 = 3;
	}
}
void bomb_destroy2(void) {
	if (counter2 == 0) {
		if (((a == kb - 1) && (b == hb - 1)) || ((a == kb - 9) && (b == hb - 1)) || ((a == kb - 17) && (b == hb - 1)) || ((a == kb + 7) && (b == hb - 1)) || ((a == kb + 15) && (b == hb - 1))) {
			gotoxy(a, b);
			cout << " ";
			a = 4;
			b = 38;
			gotoxy(4, 38);
			cout << "@";
		}
		gotoxy(kb - 4, hb);
		cout << " ";
		timer2 = 1;
		counter2 = 3;
	}
}
void fPositions1(void) {
	if ((b == 2)) {
		switch (a) {
		case 12:
			if (n == 6 || n == 5 || n == 4 || n == 3 || n == 2) {
				gotoxy(100, 10);
				cout << "player 1: you can not move , you need just one place to WIN!!";
				turn = 0;
				p();
			}
			break;
		case 20:
			if (n == 6 || n == 5 || n == 4 || n == 3) {
				gotoxy(100, 10);
				cout << "player 1: you can not move ,you need just two places to WIN!!";
				turn = 0;
				p();
			}
			break;
		case 28:
			if (n == 6 || n == 5 || n == 4) {
				gotoxy(100, 10);
				cout << "player 1: you can not move ,you need just three places to WIN!!";
				turn = 0;
				p();
			}
			break;
		case 36:
			if (n == 6 || n == 5) {
				gotoxy(100, 10);
				cout << "player 1: you can not move ,you need just four places to WIN!!";
				turn = 0;
				p();
			}
			break;
		case 44:
			if (n == 6) {
				gotoxy(100, 10);
				cout << "player 1: you can not move ,you need just five places to WIN!!";
				turn = 0;
				p();
			}
			break;
		default:
			break;
		}

	}
}
void fPositions2(void) {
	if ((v == 2)) {
		switch (w) {
		case 12:
			if (n == 6 || n == 5 || n == 4 || n == 3 || n == 2) {
				gotoxy(100, 11);
				cout << "player2: you can not move , you need just one place to WIN!!";
				turn = 1;
				p();
			}
			break;
		case 20:
			if (n == 6 || n == 5 || n == 4 || n == 3) {
				gotoxy(100, 11);
				cout << "player2:  you can not move ,you need just two places to WIN!!";
				turn = 1;
				p();
			}
			break;
		case 28:
			if (n == 6 || n == 5 || n == 4) {
				gotoxy(100, 11);
				cout << "player2:  you can not move ,you need just three places to WIN!!";
				turn = 1;
				p();
			}
			break;
		case 36:
			if (n == 6 || n == 5) {
				gotoxy(100, 11);
				cout << "player2:  you can not move ,you need just four places to WIN!!";
				turn = 1;
				p();
			}
			break;
		case 44:
			if (n == 6) {
				gotoxy(100, 11);
				cout << "player2: you can not move ,you need just five places to WIN!!";
				turn = 1;
				p();
			}
			break;
		default:
			break;
		}
	}
}
void option(void) {
	int optselection;
	gotoxy(82, 15); cout << "1.number of the bomb";
	gotoxy(82, 19); cout << "2.back";
	gotoxy(82, 20);
	cin >> optselection;
	switch (optselection) {
	case 1:
		gotoxy(60, 24);
		cout << "you can now choose between 0 to 5 for your desired numbers of the bombs :";
		gotoxy(82, 25);
		cin >> bombnumber;
		bnumber1 = bombnumber;
		bnumber2 = bombnumber;
		gotoxy(60, 24); cout << "                                                                         ";
		gotoxy(82, 25); cout << "     ";
		gotoxy(70, 24);
		cout << " your changes has been applied";
		Sleep(2000);
		gotoxy(70, 24);
		cout << "                               ";
		option();
		break;
	case 2:
		system("cls");
		menu();
		break;
	default:
		gotoxy(75, 24);
		cout << "inavlid key !!!!!!!!!!";
		Sleep(2000);
		gotoxy(82, 24);
		cout << "                         ";
		break;
	}
}
void finish(void) {

	if ((a == 4) && (b == 2)) {
		system("cls");
		system("color 5F");
		gotoxy(60, 24);
		Sleep(400);
		 cout << "\n G";
		 Sleep(200);
		 cout << "A";
		 Sleep(200);
		 cout << "M";
		 Sleep(200);
		 cout << "E";
		 Sleep(200);
		 cout << "     ";
		 Sleep(200);
		 cout << "O";
		 Sleep(200);
		 cout << "V";
		 Sleep(200);
		 cout << "E";
		 Sleep(200);
		 cout << "R";
		 Sleep(500);
		 system("cls");
		gotoxy(60, 24);
		cout << "||<<<<<<<<<<<<------------PLAYER ONE WINS------------>>>>>>>>>>>>||";
		Sleep(10000);
		gotoxy(60, 24);
		cout << "                                      ";
		Sleep(1000);
		system("cls");
		gotoxy(75, 20);
		cout << "1.play again";
		gotoxy(75, 21);
		cout << "2.return to menu";
		gotoxy(75, 22);
		cout << "3.exit";
		gotoxy(75, 23);
		int x;
		cin >> x;
		switch (x) {
			case 1:
				system("cls");
				gamechart();
				k++;
				p();
				break;
		case 2:
			system("cls");
			menu();
			break;
		default:
			system("cls");
			exit(0);
			break;
	}
}
	if ((w == 4) && (v == 2)) {
		system("cls");
		system("color 5F");
		gotoxy(60, 24);
		Sleep(400);
		 cout << "\n G";
		 Sleep(200);
		 cout << "A";
		 Sleep(200);
		 cout << "M";
		 Sleep(200);
		 cout << "E";
		 Sleep(200);
		 cout << "     ";
		 Sleep(200);
		 cout << "O";
		 Sleep(200);
		 cout << "V";
		 Sleep(200);
		 cout << "E";
		 Sleep(200);
		 cout << "R";
		 Sleep(500);
		 system("cls");
		gotoxy(60, 24);
		cout << "||<<<<<<<<<<<<------------PLAYER TWO WINS------------>>>>>>>>>>>>||";
		Sleep(10000);
		system("cls");
		gotoxy(75, 20);
		cout << "1.play again";
		gotoxy(75, 21);
		cout << "2.return to menu";
		gotoxy(75, 22);
		cout << "3.exit";
		gotoxy(75, 23);
		int x;
		cin >> x;
		switch (x) {
			case 1:
				system("cls");
				gamechart();
				k++;
				p();
				break;
		case 2:
			system("cls");
			menu();
			break;
		default:
			system("cls");
			exit(0);
			break;
	}
	}

}

void save(void) {
	out.open("savegame.txt");
	out << a << endl << b << endl << w << endl << v << endl << bnumber1 << endl << bnumber2 << endl
		<< turn << endl;
	for (int i = 0; i < 7; i++) {
		out << ai[i] << endl;
		out << aj[i] << endl;
		out << bj[i] << endl;
		out << bi[i] << endl;
		out << sp[i] << endl;
		out << sp1[i] << endl;
	}
}
void load(void) {
	in.open("savegame.txt");
	in >> a >> b >> w >> v >> bnumber1 >> bnumber2
		>> turn;
	for (int i = 0; i < 7; i++) {
		in >> ai[i];
		in >> aj[i];
		in >> bj[i];
		in >> bi[i];
		in >> sp[i];
		in >> sp1[i];
	}
}
void menu(void)
 {//first menu
	system("color C0");
	gotoxy(75, 18); cout << "::::::MENU::::::";
	gotoxy(82, 20); cout << "1.start";
	gotoxy(82, 22); cout << "2.settings";
	gotoxy(82, 24); cout << "3.system overview";
	gotoxy(82, 26); cout << "4.help";
	gotoxy(82, 28); cout << "5.about";
	gotoxy(82, 30);cout << "6.exit";
	gotoxy(82, 32);cout << "Enter the 1/2/3/4/5/6 from the keyboard ----";
	gotoxy(85, 34);
Beep(247, 300);Sleep(240);
Beep(330, 300);Sleep(240);
Beep(330, 300);Sleep(240);
Beep(370, 300);Sleep(240);
Beep(555, 300);Sleep(240);
Beep(555, 300);Sleep(240);

//end of music
	cin >> x;

	switch (x) {
	case 1:
		system("cls");
		gamechart();
		k++;
		p();
		break;
	case 2:
		system("cls");
		option();
		break;
	case 3:
		system("cls");
		system("color A0");
		//10*10 game gamechart
		for (int s = 1; s <= 10; ++s) {
			for (int i = 0; i <= 40; ++i) {
				cout << "_ ";
			}
			cout << "\n";
			for (int k = 1; k <= 3; ++k) {
				for (int j = 1; j <= 5; ++j) {
					cout << "|       |       ";
				}cout << "|\n";
			}
		}
		for (int i = 0; i <= 40; ++i) {
			cout << "_ ";
		}
		notp();
		snake();
		sl = 0;
		ldd();
		gotoxy(118, 5); cout << "This is your Snake ladder board";
		gotoxy(118, 10); cout << "l>> considers for ladders";
		gotoxy(118,12); cout << "s>> considers for snakes";
		gotoxy(118,18); cout << "press 0 to go back menu";
		break;

	case 4:
		system("cls");
		system("color 64");
		gotoxy(65, 10); cout << "--------Know how to play the game----------";
		gotoxy(65, 24); cout << "This is a game of snakes and ladders";
		gotoxy(65, 25); cout << "with some exciting options";
		gotoxy(65, 26); cout << "such as bitting by other players";
		gotoxy(65, 27); cout << "and placing some bombs in the map\n";
		gotoxy(65, 28); cout << "we have a cheating code in the game";
		gotoxy(65, 29); cout << "by which you can enter INT_MAX value";
		gotoxy(65, 30); cout << "and you will see the automatic movement";
		gotoxy(65, 31); cout << " of the players";
		break;
	case 5:
		system("cls");
		system("color D0");
		about();
		break;
	case 6:
		exit(0);
		break;
	default:
		gotoxy(0, 6); cout << "invalid key!you have to choose between 1 to 6";
		menu();
		break;
	}
	back();
}
