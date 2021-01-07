#include <stdio.h>
#include <conio.h>

void hallo(int a)
{
	int i=1;
	while (i <= a)
	{
		printf("Hallo neues Schuljahr\n");
		i++;
	}
}

double add(double x, double y)
{
	double sum = x + y;
	return sum;
}

void main()
{
	// Schreibe (implementiere) ein Funktion die "Hallo neues Schuljahr" ausgibt.
	hallo(3);

	// Definiere eine Funktion die 2 Kommazahlen als 
	// Parameter hat diese addiert und das Ergebnis als
	// Rückgabewert verwendet, dieser soll im HP ausgegeben werden
	double a = 1.2;
	double b;
	b = add(a * 2, 3.4);
	printf("%lf\n", b);
	getch();
}