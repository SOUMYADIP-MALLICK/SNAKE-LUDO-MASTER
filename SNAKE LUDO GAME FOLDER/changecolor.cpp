void changeColor(int)
 {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	system("Color E1");
	SetConsoleTextAttribute(h, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
}
