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
