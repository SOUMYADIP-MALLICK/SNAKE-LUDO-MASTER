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
