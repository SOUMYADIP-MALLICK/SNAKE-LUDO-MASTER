void load(void) {
	in.open("savegame.txt");
	in >> a >> b >> w >> v >> bnumber1 >> bnumber2
		>> turn;
	for (int i = 0; i < 7; i++) {
		in >> ai[i];
		in >> aj[i];
		in >> bj[i];
		in >> bi[i];
		in >> sp[i];
		in >> sp1[i];
	}
}
