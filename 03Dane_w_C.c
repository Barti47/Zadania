//Cwiczenie 1
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int wynikIM=INT_MAX;
    float wynikFMX=1.0e38f,wynikFMN=1.0e-37f;
    printf("Przepelnienie zmiennej calkowitej:%d \n",wynikIM+1);
    printf("Przepelnienie zmiennej zmiennoprzecinkowej:%f \n",wynikFMX*1000.0f);
    printf("Niedomiar zmiennej zmiennoprzecinkowej:%f \n",wynikFMN/1.0e8f);
	return 0;
}
//Cwiczenie 2
#include <stdio.h>

int main(void)
{
    char ch;
	printf("Podaj kod ASCII:\n");
	scanf("%d",&ch);
	printf("Podany kod ASCII %d to %c. \n",ch,ch);
	return 0;
}
//Cwiczenie 3
#include <stdio.h>

int main(void)
{
	printf("\aSally, przerazona niespodziewanym odglosem, krzyknela \"A niech mnie, co to bylo!?\"\n");
	return 0;
}
//Cwiczenie 4
#include <stdio.h>

int main(void)
{
	double liczba;
	printf("Podaj dowolna liczbe zmiennoprzecinkowa:\n");
	scanf("%lf",&liczba);
	printf("Podana liczba to %lf lub %e",liczba,liczba);
	return 0;
}
//Cwiczenie 5
#include <stdio.h>

int main(void)
{
	int lata,sekundy;
	printf("Podaj ile masz lat\n");
	scanf("%d",&lata);
	sekundy=lata*3.156E+7;
	printf("Zyjesz juz %d sekund \n",sekundy);
	return 0;
}
//Cwiczenie 6
#include <stdio.h>

int main(void)
{
	float woda,wynik,wynik2;
	float czasteczka=3E-23;
	printf("Podaj objetosc wody w litrach\n");
	scanf("%f",&woda);
	wynik=(woda*1000)/czasteczka;
	printf("W %.2f litrach wody znajduje sie %e czasteczek wody.\n",woda,wynik);
	return 0;
}