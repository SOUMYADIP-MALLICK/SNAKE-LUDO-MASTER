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
