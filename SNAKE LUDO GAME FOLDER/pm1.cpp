oid pm1(void) {
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

