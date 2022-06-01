void snake(void) {
	sl = 0;
	ti = 0;
	tj = 0;
	i = 4;
	j = 1;
	while (sl < 7) {
		ti = i;
		tj = j;
		i = 8 * (1 + rand() % 10) - 4;
		j = 4 * (1 + rand() % 10) - 3;
		if ((i == 4 && j == 1) || (i == 4 && j == 37)) {
			continue;
		}
		if ((i == ti) && (j == tj)) {
			continue;
		}
		gotoxy(i, j);
		cout << "s<<";
		ai[sl] = i;
		aj[sl] = j;
		sl++;
	}
}
