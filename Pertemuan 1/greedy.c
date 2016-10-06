#include <stdio.h>
#include <curses.h> // Windows #include <conio.h>
#include <stdlib.h>
// #include <conio.h>

int kandidat[] = {1, 5, 10, 25, 100, 2000};

void tukar (int jumlah);
int bestsol(int, int);

void main()
{
	int total;
	system("clear");
	printf("\n==========================");
	printf("\n|    Greedy Algorithm    |");
	printf("\n==========================");

	printf("\n Masukkan jumlah : ");
	scanf("%d", &total);

	tukar(total);
}

void tukar(int total)
{
	int S[100];
	int s = 0;
	int x;
	int ind = 0;
	int i;

	printf("\n==========================");
	printf("\n|        Tersedia 	   |");
	printf("\n==========================\n");
	for (i = 0; i < 6; ++i)
	{
		printf("%6d", kandidat[i]);
	}
	printf("\n==========================");


	while(s!=total)
	{
		x = bestsol (s, total);
		if (x == -1)
		{
			// diem aja
		} else {
			S[ind++] = x;
			s = s + x;
		}
	}

	printf("\n==========================");
	printf("\n| 	Pertukaran : %4d   |", total);
	printf("\n==========================");
	for (int i = 0; i < ind; ++i)
	{
		printf("\n%6d", S[i]);
	}
	printf("\n==========================");
}

int bestsol(int s, int total)
{
	int i;
	for (int i = 5; i > -1; i--)
	{
		if ((s + kandidat[i]) <= total)
		{
			return kandidat[i];
		}
	}

	return -1;
}