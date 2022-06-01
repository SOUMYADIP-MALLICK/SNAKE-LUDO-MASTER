void gamechart(void)
{
	loding();
	system("cls");
	//10*10 game gamechart
	for (int s = 1; s <= 10; ++s) {
		for (int i = 0; i <= 40; ++i) {
			cout << "_ ";
		}
		cout << "\n";
		for (int k = 1; k <= 3; ++k) {
			for (int j = 1; j <= 5; ++j) {
				cout << "|       |       ";
			}cout << "|\n";
		}
	}
	for (int i = 0; i <= 40; ++i) {
		cout << "_ ";
	}
	notp();
	p1();
	p2();
	snake();
	sl = 0;
	ldd();
}
