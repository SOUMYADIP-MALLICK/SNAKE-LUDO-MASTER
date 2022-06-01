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
