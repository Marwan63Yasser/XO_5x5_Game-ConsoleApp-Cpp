#include <iostream>
#include <windows.h>
using namespace std;
string matrix[5][5] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25" };
string player = "X ", mood;
int q = 0, w = 0;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); // For Coloring the Text
void print()
{
	system("cls");

	int j;
	SetConsoleTextAttribute(h, 5);
	cout << "\t\t\t\t\t     * * * * * * * * * * * * * * * * \n";
	for (int i = 0; i < 5; i++)
	{
		cout << "\t\t\t\t\t     ";
		cout << "* ";
		for (j = 0; j < 5; j++)
		{
			if (matrix[i][j] == "9" || matrix[i][j] == "8" || matrix[i][j] == "7" || matrix[i][j] == "6" || matrix[i][j] == "5" || matrix[i][j] == "4" || matrix[i][j] == "3" || matrix[i][j] == "2" || matrix[i][j] == "1")
			{

				SetConsoleTextAttribute(h, 11);
				cout << matrix[i][j];
				SetConsoleTextAttribute(h, 5);
				cout << "   * ";
			}
			else
			{
				if (matrix[i][j] == "X ")
				{
					SetConsoleTextAttribute(h, 30);
				}
				else if (matrix[i][j] == "O ")
				{
					SetConsoleTextAttribute(h, 47);
				}
				else
					SetConsoleTextAttribute(h, 11);
				cout << matrix[i][j];
				SetConsoleTextAttribute(h, 5);
				cout << "  * ";
			}

		}
		SetConsoleTextAttribute(h, 5);
		cout << "\n\t\t\t\t\t     * * * * * * * * * * * * * * * * ";
		cout << "\n";
	}
}
void play()
{
	if (mood == "2")
	{
	tryagain:
		int k;
		string pos;
		SetConsoleTextAttribute(h, 1);
		cout << "\nChoose your Position - " << "( " << player << ")";
		cin >> pos;

		if (pos != "1" && pos != "2" && pos != "3" && pos != "4" && pos != "5" && pos != "6" && pos != "7" && pos != "8" && pos != "9" && pos != "10" && pos != "11" && pos != "12" && pos != "13" && pos != "14" && pos != "15" && pos != "16" && pos != "17" && pos != "18" && pos != "19" && pos != "20" && pos != "21" && pos != "22" && pos != "23" && pos != "24" && pos != "25")
		{
			SetConsoleTextAttribute(h, 64);
			cout << "\n\t\t\t\t ((Error !!!!!)) You Entered incorrect Number \n";
			cout << "__________________________________________________Please Try Again_____________________________________________________\n";
			goto tryagain;
		}
		k = 0;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (matrix[i][j] == pos)
				{
					matrix[i][j] = player;
					cout << " ";
				}
				else
					k++;
			}
		}
		if (k == 25)
		{
			SetConsoleTextAttribute(h, 64);
			cout << "\n\t\t\t\t((Error !!!!!)) Your Selected Position is already Full \n";
			cout << "__________________________________________________Please Try Again_____________________________________________________\n";
			goto tryagain;
		}
		if (player == "X ")
		{
			player = "O ";
		}
		else
			player = "X ";
	}
	else if (mood == "1")
	{
		if (w == 0)
		{
		tryagain2:
			int k = 0;
			string pos;
			if (q == 0)
			{
				SetConsoleTextAttribute(h, 11);
				cout << "\t\t\t\tThe Computer Started the Play in Position ( 14 )\n";
				q++;
			}
			SetConsoleTextAttribute(h, 1);
			cout << "\nChoose your Position - " << "( " << player << ") : ";
			cin >> pos;


			if (pos != "1" && pos != "2" && pos != "3" && pos != "4" && pos != "5" && pos != "6" && pos != "7" && pos != "8" && pos != "9" && pos != "10" && pos != "11" && pos != "12" && pos != "13" && pos != "14" && pos != "15" && pos != "16" && pos != "17" && pos != "18" && pos != "19" && pos != "20" && pos != "21" && pos != "22" && pos != "23" && pos != "24" && pos != "25")
			{
				SetConsoleTextAttribute(h, 64);
				cout << "\n\t\t\t\t((Error !!!!!)) You Entered incorrect Number \n";
				cout << "__________________________________________________Please Try Again_____________________________________________________\n";
				goto tryagain2;
			}
			k = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					if (matrix[i][j] == pos)
					{
						matrix[i][j] = player;
						cout << " ";
					}
					else
						k++;
				}
			}
			if (k == 25)
			{
				SetConsoleTextAttribute(h, 64);
				cout << "\n\t\t\t\t((Error !!!!!)) Your Selected Position is already Full \n";
				cout << "__________________________________________________Please Try Again_____________________________________________________\n";
				goto tryagain2;
			}
			if (player == "O ")
			{
				if (pos == "7")
				{
					matrix[0][0] = "X ";
				}
				else if (pos == "1")
				{
					matrix[1][1] = "X ";
				}
				else if (pos == "3")
				{
					matrix[0][3] = "X ";
				}
				else if (pos == "4")
				{
					matrix[0][2] = "X ";
				}
				else if (pos == "5")
				{
					matrix[1][3] = "X ";
				}
				else if (pos == "9")
				{
					matrix[0][4] = "X ";
				}
				else if (pos == "15")
				{
					matrix[3][4] = "X ";
				}
				else if (pos == "20")
				{
					matrix[2][4] = "X ";
				}
				else if (pos == "25")
				{
					matrix[4][3] = "X ";
				}
				else if (pos == "24")
				{
					matrix[4][4] = "X ";
				}
				else if (pos == "23")
				{
					matrix[2][2] = "X ";
				}
				else if (pos == "13")
				{
					matrix[4][2] = "X ";
				}
				else if (pos == "21")
				{
					matrix[3][1] = "X ";
				}
				else if (pos == "17")
				{
					matrix[4][0] = "X ";
				}
				else if (pos == "16")
				{
					matrix[2][0] = "X ";
				}
				else if (pos == "11")
				{
					matrix[3][0] = "X ";
				}
				else if (pos == "6")
				{
					matrix[0][1] = "X ";
				}
				else if (pos == "2")
				{
					matrix[1][0] = "X ";
				}
				else if (pos == "12")
				{
					matrix[4][1] = "X ";
				}
				else if (pos == "22")
				{
					matrix[2][1] = "X ";
				}
				else if (pos == "18")
				{
					matrix[3][3] = "X ";
				}
				else if (pos == "19")
				{
					matrix[3][2] = "X ";
				}
				else if (pos == "8")
				{
					matrix[1][4] = "X ";
				}
				else if (pos == "10")
				{
					matrix[1][2] = "X ";
				}
			}
			else if (player == "X ")
			{
				if (pos == "7")
				{
					matrix[0][0] = "O ";//1
				}
				else if (pos == "1")
				{
					matrix[1][1] = "O ";//7
				}
				else if (pos == "3")
				{
					matrix[0][3] = "O ";//4
				}
				else if (pos == "4")
				{
					matrix[0][2] = "O ";//3
				}
				else if (pos == "5")
				{
					matrix[1][3] = "O ";//9
				}
				else if (pos == "9")
				{
					matrix[0][4] = "O ";//5
				}
				else if (pos == "15")
				{
					matrix[3][4] = "O ";//20
				}
				else if (pos == "20")
				{
					matrix[2][4] = "O ";//15
				}
				else if (pos == "25")
				{
					matrix[4][3] = "O ";//24
				}
				else if (pos == "24")
				{
					matrix[4][4] = "O ";//25
				}
				else if (pos == "23")
				{
					matrix[2][2] = "O ";//13
				}
				else if (pos == "13")
				{
					matrix[4][2] = "O ";//23
				}
				else if (pos == "21")
				{
					matrix[3][1] = "O ";//17
				}
				else if (pos == "17")
				{
					matrix[4][0] = "O ";//21
				}
				else if (pos == "16")
				{
					matrix[2][0] = "O ";//11
				}
				else if (pos == "11")
				{
					matrix[3][0] = "O ";//16
				}
				else if (pos == "6")
				{
					matrix[0][1] = "O ";//2
				}
				else if (pos == "2")
				{
					matrix[1][0] = "O ";//6
				}
				else if (pos == "12")
				{
					matrix[4][1] = "O ";//22
				}
				else if (pos == "22")
				{
					matrix[2][1] = "O ";//12
				}
				else if (pos == "18")
				{
					matrix[3][3] = "O ";//19
				}
				else if (pos == "19")
				{
					matrix[3][2] = "O ";//18
				}
				else if (pos == "8")
				{
					matrix[1][4] = "O ";//10
				}
				else if (pos == "10")
				{
					matrix[1][2] = "O ";//8
				}
			}
		}
		else if (w > 0)
		{
		tryagainw:
			int k;
			string pos;
			SetConsoleTextAttribute(h, 11);
			cout << "\nChoose your Position - " << "( " << player << ")";
			cin >> pos;

			if (pos != "1" && pos != "2" && pos != "3" && pos != "4" && pos != "5" && pos != "6" && pos != "7" && pos != "8" && pos != "9" && pos != "10" && pos != "11" && pos != "12" && pos != "13" && pos != "14" && pos != "15" && pos != "16" && pos != "17" && pos != "18" && pos != "19" && pos != "20" && pos != "21" && pos != "22" && pos != "23" && pos != "24" && pos != "25")
			{
				SetConsoleTextAttribute(h, 64);
				cout << "\n\t\t\t\t((Error !!!!!)) You Entered incorrect Number \n";
				cout << "__________________________________________________Please Try Again_____________________________________________________\n";
				goto tryagainw;
			}
			k = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					if (matrix[i][j] == pos)
					{
						matrix[i][j] = player;
						cout << " ";
					}
					else
						k++;
				}
			}

			if (k == 25)
			{
				SetConsoleTextAttribute(h, 64);
				cout << "\n\t\t\t\t((Error !!!!!)) Your Selected Position is already Full \n";
				cout << "__________________________________________________Please Try Again_____________________________________________________\n";
				goto tryagainw;
			}
			if (player == "X ")
			{
				if (pos == "1")
				{
					if (matrix[1][1] != "X " && matrix[1][1] != "O ")
					{
						matrix[1][1] = "O ";
					}
					else if (matrix[0][1] != "X " && matrix[0][1] != "O ")
					{
						matrix[0][1] = "O ";
					}
					else
					{
						matrix[1][0] = "O ";
					}
				}
				else if (pos == "2")
				{
					if (matrix[0][2] != "X " && matrix[0][2] != "O ")
					{
						matrix[0][2] = "O ";
					}
					else if (matrix[1][1] != "X " && matrix[1][1] != "O ")
					{
						matrix[1][1] = "O ";
					}
					else if (matrix[1][2] != "X " && matrix[1][2] != "O ")
					{
						matrix[1][2] = "O ";
					}
					else
					{
						matrix[1][0] = "O ";
					}
				}
				else if (pos == "3")
				{
					if (matrix[0][3] != "X " && matrix[0][3] != "O ")
					{
						matrix[0][3] = "O ";
					}
					else if (matrix[1][2] != "X " && matrix[1][2] != "O ")
					{
						matrix[1][2] = "O ";
					}
					else if (matrix[0][1] != "X " && matrix[0][1] != "O ")
					{
						matrix[0][1] = "O ";
					}
					else
					{
						matrix[1][3] = "O ";
					}
				}
				else if (pos == "4")
				{
					if (matrix[0][4] != "X " && matrix[0][4] != "O ")
					{
						matrix[0][4] = "O ";
					}
					else if (matrix[1][3] != "X " && matrix[1][3] != "O ")
					{
						matrix[1][3] = "O ";
					}
					else if (matrix[1][4] != "X " && matrix[1][4] != "O ")
					{
						matrix[1][4] = "O ";
					}
					else
					{
						matrix[0][2] = "O ";
					}
				}
				else if (pos == "5")
				{
					if (matrix[1][4] != "X " && matrix[1][4] != "O ")
					{
						matrix[1][4] = "O ";
					}
					else if (matrix[1][3] != "X " && matrix[1][3] != "O ")
					{
						matrix[1][3] = "O ";
					}
					else
					{
						matrix[0][3] = "O ";
					}
				}
				else if (pos == "6")
				{
					if (matrix[1][1] != "X " && matrix[1][1] != "O ")
					{
						matrix[1][1] = "O ";
					}
					else if (matrix[2][0] != "X " && matrix[2][0] != "O ")
					{
						matrix[2][0] = "O ";
					}
					else if (matrix[0][0] != "X " && matrix[0][0] != "O ")
					{
						matrix[0][0] = "O ";
					}
					else
					{
						matrix[2][1] = "O ";
					}
				}
				else if (pos == "7")
				{
					if (matrix[2][1] != "X " && matrix[2][1] != "O ")
					{
						matrix[2][1] = "O ";
					}
					else if (matrix[1][2] != "X " && matrix[1][2] != "O ")
					{
						matrix[1][2] = "O ";
					}
					else if (matrix[1][0] != "X " && matrix[1][0] != "O ")
					{
						matrix[1][0] = "O ";
					}
					else
					{
						matrix[0][1] = "O ";
					}

				}
				else if (pos == "8")
				{
					if (matrix[2][2] != "X " && matrix[2][2] != "O ")
					{
						matrix[2][2] = "O ";
					}
					else if (matrix[1][3] != "X " && matrix[1][3] != "O ")
					{
						matrix[1][3] = "O ";
					}
					else if (matrix[1][1] != "X " && matrix[1][1] != "O ")
					{
						matrix[1][1] = "O ";
					}
					else
					{
						matrix[0][2] = "O ";
					}
				}
				else if (pos == "9")
				{

					if (matrix[2][2] != "X " && matrix[2][2] != "O ")
					{
						matrix[2][2] = "O ";
					}
					else if (matrix[1][4] != "X " && matrix[1][4] != "O ")
					{
						matrix[1][4] = "O ";
					}
					else if (matrix[1][2] != "X " && matrix[1][2] != "O ")
					{
						matrix[1][2] = "O ";
					}
					else
					{
						matrix[0][3] = "O ";
					}

				}
				else if (pos == "10")
				{
					if (matrix[2][4] != "X " && matrix[2][4] != "O ")
					{
						matrix[2][4] = "O ";
					}
					else if (matrix[1][3] != "X " && matrix[1][3] != "O ")
					{
						matrix[1][3] = "O ";
					}
					else
					{
						matrix[0][4] = "O ";
					}
				}
				else if (pos == "11")
				{
					if (matrix[2][1] != "X " && matrix[2][1] != "O ")
					{
						matrix[2][1] = "O ";
					}
					else if (matrix[3][0] != "X " && matrix[3][0] != "O ")
					{
						matrix[3][0] = "O ";
					}
					else
					{
						matrix[1][0] = "O ";
					}
				}
				else if (pos == "12")
				{
					if (matrix[2][2] != "X " && matrix[2][2] != "O ")
					{
						matrix[2][2] = "O ";
					}
					else if (matrix[3][1] != "X " && matrix[3][1] != "O ")
					{
						matrix[3][1] = "O ";
					}
					else if (matrix[2][0] != "X " && matrix[2][0] != "O ")
					{
						matrix[2][0] = "O ";
					}
					else
					{
						matrix[1][1] = "O ";
					}
				}
				else if (pos == "13")
				{
					if (matrix[1][1] != "X " && matrix[1][1] != "O ")
					{
						matrix[1][1] = "O ";
					}
					else if (matrix[3][2] != "X " && matrix[3][2] != "O ")
					{
						matrix[3][2] = "O ";
					}
					else if (matrix[2][1] != "X " && matrix[2][1] != "O ")
					{
						matrix[2][1] = "O ";
					}
					else
					{
						matrix[1][2] = "O ";
					}
				}
				else if (pos == "14")
				{
					if (matrix[2][4] != "X " && matrix[2][4] != "O ")
					{
						matrix[2][4] = "O ";
					}
					else if (matrix[3][3] != "X " && matrix[3][3] != "O ")
					{
						matrix[3][3] = "O ";
					}
					else if (matrix[2][2] != "X " && matrix[2][2] != "O ")
					{
						matrix[2][2] = "O ";
					}
					else
					{
						matrix[1][3] = "O ";
					}
				}
				else if (pos == "15")
				{
					if (matrix[3][4] != "X " && matrix[3][4] != "O ")
					{
						matrix[1][4] = "O ";
					}
					else if (matrix[2][3] != "X " && matrix[2][3] != "O ")
					{
						matrix[2][3] = "O ";
					}
					else
					{
						matrix[1][4] = "O ";
					}
				}
				else if (pos == "16")
				{
					if (matrix[3][1] != "X " && matrix[3][1] != "O ")
					{
						matrix[3][1] = "O ";
					}
					else if (matrix[4][0] != "X " && matrix[4][0] != "O ")
					{
						matrix[4][0] = "O ";
					}
					else if (matrix[2][0] != "X " && matrix[2][0] != "O ")
					{
						matrix[2][0] = "O ";
					}
					else
					{
						matrix[2][1] = "O ";
					}
				}
				else if (pos == "17")
				{
					if (matrix[2][2] != "X " && matrix[2][2] != "O ")
					{
						matrix[2][2] = "O ";
					}
					else if (matrix[3][2] != "X " && matrix[3][2] != "O ")
					{
						matrix[3][2] = "O ";
					}
					else if (matrix[4][1] != "X " && matrix[4][1] != "O ")
					{
						matrix[4][1] = "O ";
					}
					else
					{
						matrix[3][0] = "O ";
					}
				}
				else if (pos == "18")
				{
					if (matrix[2][2] != "X " && matrix[2][2] != "O ")
					{
						matrix[2][2] = "O ";
					}
					else if (matrix[3][3] != "X " && matrix[3][3] != "O ")
					{
						matrix[3][3] = "O ";
					}
					else if (matrix[4][2] != "X " && matrix[4][2] != "O ")
					{
						matrix[4][2] = "O ";
					}
					else
					{
						matrix[3][1] = "O ";
					}
				}
				else if (pos == "19")
				{
					if (matrix[2][3] != "X " && matrix[2][3] != "O ")
					{
						matrix[2][3] = "O ";
					}
					else if (matrix[3][4] != "X " && matrix[3][4] != "O ")
					{
						matrix[3][4] = "O ";
					}
					else if (matrix[4][3] != "X " && matrix[4][3] != "O ")
					{
						matrix[4][3] = "O ";
					}
					else
					{
						matrix[3][2] = "O ";
					}

				}
				else if (pos == "20")
				{
					if (matrix[4][4] != "X " && matrix[4][4] != "O ")
					{
						matrix[4][4] = "O ";
					}
					else if (matrix[3][3] != "X " && matrix[3][3] != "O ")
					{
						matrix[3][3] = "O ";
					}
					else
					{
						matrix[2][4] = "O ";
					}
				}
				else if (pos == "21")
				{
					if (matrix[3][0] != "X " && matrix[3][0] != "O ")
					{
						matrix[3][0] = "O ";
					}
					else if (matrix[3][1] != "X " && matrix[3][1] != "O ")
					{
						matrix[3][1] = "O ";
					}
					else
					{
						matrix[4][1] = "O ";
					}
				}
				else if (pos == "22")
				{
					if (matrix[4][0] != "X " && matrix[4][0] != "O ")
					{
						matrix[4][0] = "O ";
					}
					else if (matrix[3][1] != "X " && matrix[3][1] != "O ")
					{
						matrix[3][1] = "O ";
					}
					else
					{
						matrix[4][2] = "O ";
					}
				}
				else if (pos == "23")
				{
					if (matrix[4][3] != "X " && matrix[4][3] != "O ")
					{
						matrix[4][3] = "O ";
					}
					else if (matrix[2][2] != "X " && matrix[2][2] != "O ")
					{
						matrix[2][2] = "O ";
					}
					else
					{
						matrix[4][1] = "O ";
					}
				}
				else if (pos == "24")
				{
					if (matrix[4][4] != "X " && matrix[4][4] != "O ")
					{
						matrix[4][4] = "O ";
					}
					else if (matrix[3][3] != "X " && matrix[3][3] != "O ")
					{
						matrix[3][3] = "O ";
					}
					else
					{
						matrix[4][2] = "O ";
					}
				}
				else if (pos == "25")
				{
					if (matrix[3][4] != "X " && matrix[3][4] != "O ")
					{
						matrix[3][4] = "O ";
					}
					else if (matrix[4][3] != "X " && matrix[4][3] != "O ")
					{
						matrix[4][3] = "O ";
					}
					else
					{
						matrix[3][3] = "O ";
					}
				}

			}
			else if (player == "O ")
			{
				if (pos == "1")
				{
					if (matrix[1][1] != "X " && matrix[1][1] != "O ")
					{
						matrix[1][1] = "X ";
					}
					else if (matrix[0][1] != "X " && matrix[0][1] != "O ")
					{
						matrix[0][1] = "X ";
					}
					else
					{
						matrix[1][0] = "X ";
					}
				}
				else if (pos == "2")
				{
					if (matrix[0][2] != "X " && matrix[0][2] != "O ")
					{
						matrix[0][2] = "X ";
					}
					else if (matrix[1][1] != "X " && matrix[1][1] != "O ")
					{
						matrix[1][1] = "X ";
					}
					else if (matrix[1][2] != "X " && matrix[1][2] != "O ")
					{
						matrix[1][2] = "X ";
					}
					else
					{
						matrix[1][0] = "X ";
					}
				}
				else if (pos == "3")
				{
					if (matrix[0][3] != "X " && matrix[0][3] != "O ")
					{
						matrix[0][3] = "X ";
					}
					else if (matrix[1][2] != "X " && matrix[1][2] != "O ")
					{
						matrix[1][2] = "X ";
					}
					else if (matrix[0][1] != "X " && matrix[0][1] != "O ")
					{
						matrix[0][1] = "X ";
					}
					else
					{
						matrix[1][3] = "X ";
					}
				}
				else if (pos == "4")
				{
					if (matrix[0][4] != "X " && matrix[0][4] != "O ")
					{
						matrix[0][4] = "X ";
					}
					else if (matrix[1][3] != "X " && matrix[1][3] != "O ")
					{
						matrix[1][3] = "X ";
					}
					else if (matrix[1][4] != "X " && matrix[1][4] != "O ")
					{
						matrix[1][4] = "X ";
					}
					else
					{
						matrix[0][2] = "X ";
					}
				}
				else if (pos == "5")
				{
					if (matrix[1][4] != "X " && matrix[1][4] != "O ")
					{
						matrix[1][4] = "X ";
					}
					else if (matrix[1][3] != "X " && matrix[1][3] != "O ")
					{
						matrix[1][3] = "X ";
					}
					else
					{
						matrix[0][3] = "X ";
					}
				}
				else if (pos == "6")
				{
					if (matrix[1][1] != "X " && matrix[1][1] != "O ")
					{
						matrix[1][1] = "X ";
					}
					else if (matrix[2][0] != "X " && matrix[2][0] != "O ")
					{
						matrix[2][0] = "X ";
					}
					else if (matrix[0][0] != "X " && matrix[0][0] != "O ")
					{
						matrix[0][0] = "X ";
					}
					else
					{
						matrix[2][1] = "X ";
					}
				}
				else if (pos == "7")
				{
					if (matrix[2][1] != "X " && matrix[2][1] != "O ")
					{
						matrix[2][1] = "X ";
					}
					else if (matrix[1][2] != "X " && matrix[1][2] != "O ")
					{
						matrix[1][2] = "X ";
					}
					else if (matrix[1][0] != "X " && matrix[1][0] != "O ")
					{
						matrix[1][0] = "X ";
					}
					else
					{
						matrix[0][1] = "X ";
					}

				}
				else if (pos == "8")
				{
					if (matrix[2][2] != "X " && matrix[2][2] != "O ")
					{
						matrix[2][2] = "X ";
					}
					else if (matrix[1][3] != "X " && matrix[1][3] != "O ")
					{
						matrix[1][3] = "X ";
					}
					else if (matrix[1][1] != "X " && matrix[1][1] != "O ")
					{
						matrix[1][1] = "X ";
					}
					else
					{
						matrix[0][2] = "X ";
					}
				}
				else if (pos == "9")
				{

					if (matrix[2][2] != "X " && matrix[2][2] != "O ")
					{
						matrix[2][2] = "X ";
					}
					else if (matrix[1][4] != "X " && matrix[1][4] != "O ")
					{
						matrix[1][4] = "X ";
					}
					else if (matrix[1][2] != "X " && matrix[1][2] != "O ")
					{
						matrix[1][2] = "X ";
					}
					else
					{
						matrix[0][3] = "X ";
					}

				}
				else if (pos == "10")
				{
					if (matrix[2][4] != "X " && matrix[2][4] != "O ")
					{
						matrix[2][4] = "X ";
					}
					else if (matrix[1][3] != "X " && matrix[1][3] != "O ")
					{
						matrix[1][3] = "X ";
					}
					else
					{
						matrix[0][4] = "X ";
					}
				}
				else if (pos == "11")
				{
					if (matrix[2][1] != "X " && matrix[2][1] != "O ")
					{
						matrix[2][1] = "X ";
					}
					else if (matrix[3][0] != "X " && matrix[3][0] != "O ")
					{
						matrix[3][0] = "X ";
					}
					else
					{
						matrix[1][0] = "X ";
					}
				}
				else if (pos == "12")
				{
					if (matrix[2][2] != "X " && matrix[2][2] != "O ")
					{
						matrix[2][2] = "X ";
					}
					else if (matrix[3][1] != "X " && matrix[3][1] != "O ")
					{
						matrix[3][1] = "X ";
					}
					else if (matrix[2][0] != "X " && matrix[2][0] != "O ")
					{
						matrix[2][0] = "X ";
					}
					else
					{
						matrix[1][1] = "X ";
					}
				}
				else if (pos == "13")
				{
					if (matrix[1][1] != "X " && matrix[1][1] != "O ")
					{
						matrix[1][1] = "X ";
					}
					else if (matrix[3][2] != "X " && matrix[3][2] != "O ")
					{
						matrix[3][2] = "X ";
					}
					else if (matrix[2][1] != "X " && matrix[2][1] != "O ")
					{
						matrix[2][1] = "X ";
					}
					else
					{
						matrix[1][2] = "X ";
					}
				}
				else if (pos == "14")
				{
					if (matrix[2][4] != "X " && matrix[2][4] != "O ")
					{
						matrix[2][4] = "X ";
					}
					else if (matrix[3][3] != "X " && matrix[3][3] != "O ")
					{
						matrix[3][3] = "X ";
					}
					else if (matrix[2][2] != "X " && matrix[2][2] != "O ")
					{
						matrix[2][2] = "X ";
					}
					else
					{
						matrix[1][3] = "X ";
					}
				}
				else if (pos == "15")
				{
					if (matrix[3][4] != "X " && matrix[3][4] != "O ")
					{
						matrix[1][4] = "X ";
					}
					else if (matrix[2][3] != "X " && matrix[2][3] != "O ")
					{
						matrix[2][3] = "X ";
					}
					else
					{
						matrix[1][4] = "X ";
					}
				}
				else if (pos == "16")
				{
					if (matrix[3][1] != "X " && matrix[3][1] != "O ")
					{
						matrix[3][1] = "X ";
					}
					else if (matrix[4][0] != "X " && matrix[4][0] != "O ")
					{
						matrix[4][0] = "X ";
					}
					else if (matrix[2][0] != "X " && matrix[2][0] != "O ")
					{
						matrix[2][0] = "X ";
					}
					else
					{
						matrix[2][1] = "X ";
					}
				}
				else if (pos == "17")
				{
					if (matrix[2][2] != "X " && matrix[2][2] != "O ")
					{
						matrix[2][2] = "X ";
					}
					else if (matrix[3][2] != "X " && matrix[3][2] != "O ")
					{
						matrix[3][2] = "X ";
					}
					else if (matrix[4][1] != "X " && matrix[4][1] != "O ")
					{
						matrix[4][1] = "X ";
					}
					else
					{
						matrix[3][0] = "X ";
					}
				}
				else if (pos == "18")
				{
					if (matrix[2][2] != "X " && matrix[2][2] != "O ")
					{
						matrix[2][2] = "X ";
					}
					else if (matrix[3][3] != "X " && matrix[3][3] != "O ")
					{
						matrix[3][3] = "X ";
					}
					else if (matrix[4][2] != "X " && matrix[4][2] != "O ")
					{
						matrix[4][2] = "X ";
					}
					else
					{
						matrix[3][1] = "X ";
					}
				}
				else if (pos == "19")
				{
					if (matrix[2][3] != "X " && matrix[2][3] != "O ")
					{
						matrix[2][3] = "X ";
					}
					else if (matrix[3][4] != "X " && matrix[3][4] != "O ")
					{
						matrix[3][4] = "X ";
					}
					else if (matrix[4][3] != "X " && matrix[4][3] != "O ")
					{
						matrix[4][3] = "X ";
					}
					else
					{
						matrix[3][2] = "X ";
					}

				}
				else if (pos == "20")
				{
					if (matrix[4][4] != "X " && matrix[4][4] != "O ")
					{
						matrix[4][4] = "X ";
					}
					else if (matrix[3][3] != "X " && matrix[3][3] != "O ")
					{
						matrix[3][3] = "X ";
					}
					else
					{
						matrix[2][4] = "X ";
					}
				}
				else if (pos == "21")
				{
					if (matrix[3][0] != "X " && matrix[3][0] != "O ")
					{
						matrix[3][0] = "X ";
					}
					else if (matrix[3][1] != "X " && matrix[3][1] != "O ")
					{
						matrix[3][1] = "X ";
					}
					else
					{
						matrix[4][1] = "X ";
					}
				}
				else if (pos == "22")
				{
					if (matrix[4][0] != "X " && matrix[4][0] != "O ")
					{
						matrix[4][0] = "X ";
					}
					else if (matrix[3][1] != "X " && matrix[3][1] != "O ")
					{
						matrix[3][1] = "X ";
					}
					else
					{
						matrix[4][2] = "X ";
					}
				}
				else if (pos == "23")
				{
					if (matrix[4][3] != "X " && matrix[4][3] != "O ")
					{
						matrix[4][3] = "X ";
					}
					else if (matrix[2][2] != "X " && matrix[2][2] != "O ")
					{
						matrix[2][2] = "X ";
					}
					else
					{
						matrix[4][1] = "X ";
					}
				}
				else if (pos == "24")
				{
					if (matrix[4][4] != "X " && matrix[4][4] != "O ")
					{
						matrix[4][4] = "X ";
					}
					else if (matrix[3][3] != "X " && matrix[3][3] != "O ")
					{
						matrix[3][3] = "X ";
					}
					else
					{
						matrix[4][2] = "X ";
					}
				}
				else if (pos == "25")
				{
					if (matrix[3][4] != "X " && matrix[3][4] != "O ")
					{
						matrix[3][4] = "X ";
					}
					else if (matrix[4][3] != "X " && matrix[4][3] != "O ")
					{
						matrix[4][3] = "X ";
					}
					else
					{
						matrix[3][3] = "X ";
					}
				}

			}

		}

	}
}
char winner()
{
	int counter = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (matrix[i][j] != "X " && matrix[i][j] != "O ")
			{
				counter++;
			}
		}
	}

	int xcalc = 0, ocalc = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (matrix[i][j] == "X ")
			{
				xcalc++;
			}
			else if (matrix[i][j] == "O ")
			{
				ocalc++;
			}
			if (xcalc == 5 || ocalc == 5)
			{
				if (xcalc > ocalc)
				{
					return 'X';
				}
				else
				{
					return 'O';
				}
			}
		}
		xcalc = 0;
		ocalc = 0;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (matrix[j][i] == "X ")
			{
				xcalc++;
			}
			else if (matrix[j][i] == "O ")
			{
				ocalc++;
			}
			if (xcalc == 5 || ocalc == 5)
			{
				if (xcalc > ocalc)
				{
					return 'X';
				}
				else
				{
					return'O';
				}
			}
		}
		xcalc = 0;
		ocalc = 0;
	}

	if (matrix[0][0] == "X " && matrix[1][1] == "X " && matrix[2][2] == "X " && matrix[3][3] == "X " && matrix[4][4] == "X ")
	{
		return 'X';
	}
	else if (matrix[0][0] == "O " && matrix[1][1] == "O " && matrix[2][2] == "O " && matrix[3][3] == "O " && matrix[4][4] == "O ")
	{
		return 'O';
	}
	else if (matrix[0][4] == "X " && matrix[1][3] == "X " && matrix[2][2] == "X " && matrix[3][1] == "X " && matrix[4][0] == "X ")
	{
		return 'X';
	}
	else if (matrix[0][4] == "O " && matrix[1][3] == "O " && matrix[2][2] == "O " && matrix[3][1] == "O " && matrix[4][0] == "O ")
	{
		return 'O';
	}

	if (counter == 0)
	{
		return 'D';
	}
	return '.';
}
int main()
{
playagain:
	matrix[0][0] = "1", matrix[0][1] = "2", matrix[0][2] = "3", matrix[0][3] = "4", matrix[0][4] = "5", matrix[1][0] = "6", matrix[1][1] = "7", matrix[1][2] = "8", matrix[1][3] = "9", matrix[1][4] = "10", matrix[2][0] = "11";
	matrix[2][1] = "12", matrix[2][2] = "13", matrix[2][3] = "14", matrix[2][4] = "15", matrix[3][0] = "16", matrix[3][1] = "17", matrix[3][2] = "18", matrix[3][3] = "19", matrix[3][4] = "20", matrix[4][0] = "21", matrix[4][1] = "22";
	matrix[4][2] = "23", matrix[4][3] = "24", matrix[4][4] = "25";
	q = 0;
	string re;
	SetConsoleTextAttribute(h, 13);
	cout << "\t\t\t\t\t    Welcome to our Tic Tac Game\n\n";
tryagainm:
	string ans;
	SetConsoleTextAttribute(h, 14);
	cout << "Choose the Mood of the Game (1) One Player , (2) Tow Players , To Exit Press (0)\n";
	cin >> mood;
	if (mood == "0")
	{
		goto Exit;
	}
	if (mood != "1" && mood != "2")
	{
		cout << "\n\t\t\t\t ";
		SetConsoleTextAttribute(h, 64);
		cout << "(Error !!!!) You Entered incorrect Number \n";
		cout << "__________________________________________________Please Try Again_____________________________________________________\n\n";
		goto tryagainm;
	}
tryagainans:
	if (mood == "1")
	{
		SetConsoleTextAttribute(h, 8);
		cout << "\nPlease Choose the Level of the Game\n\n";
		SetConsoleTextAttribute(h, 1);
		cout << "1 : Hard (The Computer will start the play)\n\n";
		SetConsoleTextAttribute(h, 3);
		cout << "2 : Easy (You Will start the play)\n";
		cin >> ans;
		if (ans != "1" && ans != "2")
		{
			cout << "\n\t\t\t\t";
			SetConsoleTextAttribute(h, 64);
			cout << "(Error !!!!) You Entered incorrect Number \n";
			cout << "__________________________________________________Please Try Again_____________________________________________________\n\n";
			goto tryagainans;
		}
	}
tryagainxo2:
	SetConsoleTextAttribute(h, 2);
	cout << "\nChoose a Symbol for play (X) or (O) \n";
	cin >> player;
	if (player == "o" || player == "O" || player == "0")
	{
		player = "O ";
	}
	else if (player == "x" || player == "X" || player == "*")
	{
		player = "X ";
	}
	else
	{
		cout << "\n\t\t\t\t";
		SetConsoleTextAttribute(h, 64);
		cout << "(Error !!!!!) You Entered incorrect Symbol. \n";
		cout << "__________________________________________________Please Try Again_____________________________________________________\n";
		goto tryagainxo2;
	}
	if (ans == "1")
	{
		if (player == "O ")
			matrix[2][3] = "X ";
		else
			matrix[2][3] = "O ";

	}
	else if (ans == "2")
	{
		w++;
	}

	while (winner() == '.')
	{
		print();
		play();
	}
	print();
	if (winner() == 'D')
	{
		SetConsoleTextAttribute(h, 4);
		cout << "\n No Winner !! (The result is Draw)\n\n" << "\n";
	}
	else
	{
		SetConsoleTextAttribute(h, 3);
		cout << "\n The Winner is Player (" << winner() << ")" << "\n\n";
	}

	SetConsoleTextAttribute(h, 3);
	cout << "To Play this Game Again please Press on (Y) or Press Any Key to Exit\n";
	cin >> re;

	if (re == "y" || re == "Y")
	{
		system("cls");
		goto playagain;
	}
	else
	{
	Exit:
		system("cls");

		cout << "\t\t\t\t\t\tProject Implementers\n";

		SetConsoleTextAttribute(h, 4);
		cout << "\n\t\t\t\t\t1 - Ahmed Eteka\n\n";
		cout << "\t\t\t\t\t\t\t2 - Marwan Yasser\n\n";
		cout << "\t\t\t\t\t3 - Abdelrahman Hamada\n\n";
		cout << "\t\t\t\t\t\t\t4 - Alaa Mohey\n\n";
		cout << "\t\t\t\t\t5 - Aml\n\n";
		cout << "\t\t\t\t\t\t\t6 - Ahmed Ayman\n\n\n";

		SetConsoleTextAttribute(h, 10);
		cout << "____________________________________________Thanks For Using Our Game___________________________________________________\n\n\n";
	}
	SetConsoleTextAttribute(h, 1);
	return 0;
}
