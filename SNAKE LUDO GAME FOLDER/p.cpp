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

