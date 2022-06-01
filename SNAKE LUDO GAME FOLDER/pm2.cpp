
void pm2(void) {
	int h = 0;
	if (turn == 0) {
		if (sc2 == 0) {
			while (h < n) {
				if (w < 76 && (k2 % 2 == 0)) {
					gotoxy(w, v); cout << "#";
					w += 8;
					gotoxy(w - 8, v); cout << " ";
					gotoxy(w, v); cout << "#";
					h++;
					Sleep(500);
				}
				else {
					if (((w == 76) || (w == 4)) && (l2 == 1)) {
						k2--;
						h++;
						gotoxy(w, v); cout << " ";
						v -= 4;
						gotoxy(w, v); cout << "#";
						l2--;
						Sleep(500);
					}
					while (h < n) {
						if (w > 4) {
							gotoxy(w, v); cout << "#";
							w -= 8;
							gotoxy(w + 8, v); cout << " ";
							gotoxy(w, v); cout << "#";
							h++;
							Sleep(500);
						}
						else {
							if (((w == 76) || (w == 4)) && (l2 == 0)) {
								k2++;
								h++;
								gotoxy(w, v); cout << " ";
								v -= 4;
								gotoxy(w, v); cout << "#";
								l2++;
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
