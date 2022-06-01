void dice() {
	srand(time(NULL));
	n = rand();
	n = 1 + n % 6;

	switch (n)
	{
	case 1:
		one();
		break;
	case 2:
		two();
		break;
	case 3:
		three();
		break;
	case 4:
		four();
		break;
	case 5:
		five();
		break;
	case 6:
		six();
		break;
	default:
		cout << "invalid number";

	}
}
