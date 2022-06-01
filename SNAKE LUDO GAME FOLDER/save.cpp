
void save(void) {
	out.open("savegame.txt");
	out << a << endl << b << endl << w << endl << v << endl << bnumber1 << endl << bnumber2 << endl
		<< turn << endl;
	for (int i = 0; i < 7; i++) {
		out << ai[i] << endl;
		out << aj[i] << endl;
		out << bj[i] << endl;
		out << bi[i] << endl;
		out << sp[i] << endl;
		out << sp1[i] << endl;
	}
}
