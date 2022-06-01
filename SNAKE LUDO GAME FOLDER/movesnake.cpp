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
