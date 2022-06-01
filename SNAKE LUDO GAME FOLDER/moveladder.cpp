void moveladder2(void) {
	int sp1[7];
	int sp[7];
	int j2 = 3;
	int i2 = 5;
	int mbyl = 0;
	for (mbyl = 0; mbyl < 7; mbyl++) {
		sp[mbyl] = notp1[bi[mbyl]][bj[mbyl]];
		sp1[mbyl] = ((sp[mbyl] + 1) + rand() % (99 - sp[mbyl]));
		for (j2 = 3; j2 <= 40; j2 += 4) {
			for (i2 = 5; i2 <= 80; i2 += 8) {
				if (sp1[mbyl] == notp1[i2][j2]) {
					break;
				}
			}
			if (sp1[mbyl] == notp1[i2][j2]) {
				break;
			}
		}
		if ((locw == bi[mbyl]) && (locv - 1 == bj[mbyl])) {
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
