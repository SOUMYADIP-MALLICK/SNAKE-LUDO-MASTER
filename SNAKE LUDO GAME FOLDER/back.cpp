
void back(void)
{
	gotoxy(65,40); cout << "\n0.back\n";
	int x;
	cin >> x;
	if (x == 0) {
		system("cls");
		menu();
	}
}
