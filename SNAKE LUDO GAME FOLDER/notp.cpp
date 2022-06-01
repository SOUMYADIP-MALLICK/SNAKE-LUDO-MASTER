void notp(void)
{//number of the places
	int num = 100;
	int n1 = 1;
	for (int j = 3; j <= 40; j += 4) {
		if (n1 == 1) {
			for (int i = 5; i <= 80; i += 8) {
				gotoxy(i, j);
				cout << num;
				notp1[i][j] = num;
				num--;
			}
			n1--;
		}
		else {
			for (int i = 77; i >= 5; i -= 8) {
				gotoxy(i, j);
				cout << num;
				notp1[i][j] = num;
				num--;
			}
			n1++;
		}
	}
}

