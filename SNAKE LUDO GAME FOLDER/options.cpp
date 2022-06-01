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
