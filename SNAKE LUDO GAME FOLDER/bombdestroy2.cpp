void bomb_destroy2(void) {
	if (counter2 == 0) {
		if (((a == kb - 1) && (b == hb - 1)) || ((a == kb - 9) && (b == hb - 1)) || ((a == kb - 17) && (b == hb - 1)) || ((a == kb + 7) && (b == hb - 1)) || ((a == kb + 15) && (b == hb - 1))) {
			gotoxy(a, b);
			cout << " ";
			a = 4;
			b = 38;
			gotoxy(4, 38);
			cout << "@";
		}
		gotoxy(kb - 4, hb);
		cout << " ";
		timer2 = 1;
		counter2 = 3;
	}
}
