
#include <stdio.h>
#include <conio.h>

void main()
{
	// Aufgabe 1: Gib aus: 1 2 3 4 5 6 7 6 5 4 3 2 1 
	// (mittels 2 Schleifen, while und for)
	// Erweiterung 1: mittlere Zahl (7) kann eingegeben werden
	// Erweiterung 2: start (=ende) kann ebenfalls eingegeben werden
	// Erw. 3: Reihenfolge wird korrigiert

	int start;
	int mitte;

	printf("Start: ");
	scanf("%d", &start);// 7
	printf("Mitte: ");
	scanf("%d", &mitte);// 2

	if (start>mitte)
	{
		int temp = start; // temp = 7
		start = mitte; // start = 2
		mitte = temp; // mitte = 7
	}

	int i = start;
	while (i <= mitte)
	{
		printf("%d ",i);
		i++;
	}
	for (int i = mitte-1; i >= start; i--)
	{
		printf("%d ", i);
	}
	printf("\n");
	getch();
}