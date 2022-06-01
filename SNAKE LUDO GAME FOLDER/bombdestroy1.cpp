void bomb_destroy1(void) {
	if (counter1 == 0) {
		if (((w == kb - 1) && (v == hb - 1)) || ((w == kb - 9) && (v == hb - 1)) || ((w == kb - 17) && (v == hb - 1)) || ((w == kb + 7) && (v == hb - 1)) || ((w == kb + 15) && (v == hb - 1))) {
			gotoxy(w, v);
			cout << " ";
			w = 4;
			v = 38;
			gotoxy(w, v);
			cout << "#";
		}
		gotoxy(kb - 4, hb);
		cout << " ";
		timer1 = 1;
		counter1 = 3;
	}
}
