void loding()
{
  system("color 64");
  char a[20];
  for (int i = 0; i < 20; i++)
	{
    a[i] = char(475);
  }
  int i = 0;
  while (i < 10)
	 {
    gotoxy(75, 19);
    cout << "starting the game:           " << i;
    i++;
    gotoxy(77, 20);
    for (int j = 0; j < i; j++)
		{
      cout << a[j];
      Sleep(50);
    }

  }
}
