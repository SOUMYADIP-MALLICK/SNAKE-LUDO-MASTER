void board()
{
	// For Windows use: system("cls");
	system("cls");
	// For Linux use: system("clear");
	// system("clear");
	cout.width(48);
	cout<<"Snake And Ladder\n\n";
	cout.width(54);
	cout<<"Player 1   vs  Player 2 " << endl ;
	cout<<"Snake Ludo Board" << endl ;
	cout<<"Snake will slide down you to the bottom of it" << endl ;
	cout<<"ladder will help you to climb on the top of it" << endl ;
	cout<<"save yourself from snake" << endl ;
	cout<<"              ____ ____ ____ ____ ____ ____ ____ ____ ____ ____    ___________"  << endl;
	cout << "             |    |    |    |    |    |    |    |    |    |Win |  | Ladders:  |"<<endl;
	cout << "             | " << square[72] << square[73] << " | " << square[74] << square[75] << " | " << square[76] << square[77] << " | " << square[78] << square[79] << " | " << square[80] << square[81] << " | " << square[82] << square[83] << " | "<< square[84] << square[85] << " | " << square[86] << square[87] << " | " << square[88] << square[89] << " | "<< square[90] << square[91] <<" |  |   13-22   |"<<endl;
	cout << "             |____|___*|____|/___|____|___\\|____|____|___*|____|  |   16-38   |"<<endl;
	cout << "             |    |    |*  /|    |    |    | \\  |    |   *|*   |  |   19-46   |"<<endl;
	cout << "             | " << square[52] << square[53] << " | " << square[54] << square[55] << " | " << square[56] << square[57] << " | " << square[58] << square[59] << " | " << square[60] << square[61] << " | " << square[62] << square[63] << " | "<< square[64] << square[65] << "\\| " << square[66] << square[67] << " | " << square[68] << square[69] << " |*"<< square[70] << square[71] <<" |  |   33-44   |"<<endl;
	cout << "             |___*|____|___*|____|____|____|____|\\___|____|*___|  |___________|"<<endl;
	cout << "             |   *|    |    |*   |    |    |   /|  \\ |    |*   |   ___________" << endl;
	cout << "             | " << square[32] << square[33] << " | " << square[34] << square[35] << " | " << square[36] << square[37] << " | " << square[38] << square[39] << " | " << square[40] << square[41] << " | " << square[42] << square[43] << " | "<< square[44] << square[45] << " | " << square[46] << square[47] << "\\| " << square[48] << square[49] << " |*"<< square[50] << square[51] <<" |  | Snakes:   |"<<endl;
	cout << "             |____|___\\|____|____|____|*___|/___|____|\\___|*___|  |   26-4    |"<<endl;
	cout << "             |    |    |\\   |    |   *|   /|    |    |  \\ |*   |  |   31-21   |"<<endl;
	cout << "             | " << square[12] << square[13] << " | " << square[14] << square[15] << " | " << square[16] << square[17] << " | " << square[18] << square[19] << " | " << square[20] << square[21] << " | " << square[22] << square[23] << " | "<< square[24] << square[25] << " | " << square[26] << square[27] << " | " << square[28] << square[29] << " | "<< square[30] << square[31] <<" |  |   42-24   |"<<endl;
	cout << "             |____|____|____|____|*___|____|____|____|____|____|  |   49-20   |"<<endl;
	cout << "             |Home|    |    |   *|    |    |    |    |    |    |  |___________|"<<endl;
	cout << "             | " << square[1]<<nul[1] << " | " << square[2]<<nul[2] << " | " << square[3]<<nul[3]<< " | " << square[4]<<nul[4] << " | " << square[5] <<nul[5]<< " | " << square[6]<<nul[6]<< " | "<< square[7]<<nul[7] << " | " << square[8]<<nul[8] << " | " << square[9] <<nul[9]<< " | "<< square[10]<<square[11] <<" |" << endl;
	cout << "             |____|____|____|____|____|____|____|____|____|____|" << endl;
	cout.width(53);
}
