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
