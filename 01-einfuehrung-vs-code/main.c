#include <stdio.h>
#include <stdlib.h>

int main ()
{
printf("Das folgende Programm soll Fakultaet von 10 berechnen.\n\n");
int ergebnis = 1;
int zaehler = 1;
printf("Fakultaet 10 = ");
while (zaehler <= 10)
{
if (zaehler == 1)
{
printf("%d", zaehler );
}
else
{
printf(" x %d", zaehler );
}
ergebnis = ergebnis * zaehler;
zaehler = zaehler + 1;
}
printf(" = %d", ergebnis );
return 0;
}
