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

