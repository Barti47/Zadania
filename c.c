#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int i=0,suma=0;
    printf("Program liczacy sume liczb od 1 do 100\n");
    while(i<=100)
    {
        suma+=i;
        i++;
    }
    printf("Suma liczb wynosi %d \n",suma);
    return 0;
}

#include <stdio.h>

int main(void)
{
    unsigned int i=0,suma=0;
    printf("Program liczacy sume liczb od 1 do 100\n");
    do
    {
        suma+=i;
        i++;
    }while(i<=100);
    printf("Suma liczb wynosi %d \n",suma);
    return 0;
}

#include <stdio.h>

int main(void)
{
    unsigned int suma=0;
    printf("Program liczacy sume liczb od 1 do 100\n");
    for(unsigned int i=0;i<=100;i++)
    {
        suma+=i;
    }
    printf("Suma liczb wynosi %d \n",suma);
    return 0;
}

#include <stdio.h>

int main(void)
{
    unsigned long suma=0;
    unsigned int i,n;
    printf("Program liczacy sume liczb od 1 do n\nPodaj n: ");
    scanf("%u",&n);
    for(i=0;i<=n;i++)
    {
        suma+=i;
    }
    printf("Suma liczb wynosi %lu \n",suma);
    return 0;
}

#include <stdio.h>
int main(void)
{
    long num;
    long suma=0L;
    int stan;
    printf("Podaj liczbe calkowita do zsumowania. ");
    printf("Wpisz q, aby zakonczyc program\n");
    stan=scanf("%ld",&num);
    while (stan==1)
    {
        suma=suma+num;
        printf("Podaj nastepna liczbe calkowita do zsumowania. ");
        printf("Wpisz q, aby zakonczyc program. \n");
        stan=scanf("%ld",&num);
    }
    printf("Suma podanych liczb wynosi %ld.\n",suma);
    return 0;
}

/*stan=scanf("%ld",&num);
while (stan==1)
    {
        stan=scanf("%ld",&num);
    }

    while (scanf("%ld",&num)==1)
    {
        
    }

#include <stdio.h>
int main(void)
    {
    int num;
    while (scanf("%d",&num)==1)
    ;
    return 0;
    }
*/
#include <math.h>
#include <stdio.h>
int main(void)
{
    const double WYNIK=3.14159;
    double odpowiedz;
    printf("Ile wynosi liczba pi?\n");
    scanf("%lf",&odpowiedz);
    while (fabs(odpowiedz-WYNIK)>0.0001)
    {
        printf("Sprobuj jeszcze raz!\n");
        scanf("%lf", &odpowiedz);
    }
    return 0;
}
//Poprosic uzytkownika o wprowadzenie liczby n i potem o wprowadzenie n liczb z klawiatury sume ktorych nalezy obliczyc i wyswietlic na ekranie
#include <stdio.h>

int main(void)
{
    unsigned int i=0,suma=0,n=0;
	int liczba=0;
    printf("Program liczacy sume liczb podawanych przez uzytkownika n razy\n");
	printf("Podaj liczbe n\n");
	scanf("%d",&n);
    while(i<n)
    {
		printf("Podaj liczbe ktora chcesz zsumowac:");
		scanf("%d",&liczba);
        suma+=liczba;
        i++;
    }
    printf("Suma liczb wynosi %d \n",suma);
    return 0;
}

//26.02.2022
#include <stdio.h>

int main(void)
{
    int MIN,MAX,IMAX,IMIN=0;
    int tab[10];

    printf("Podaj 10 liczb\n");
    for(unsigned int i= 0; i<10; i++)
    {
        scanf("%d",&tab[i]);
    }
    for(unsigned int i = 0; i<10; i++)
    {
        printf("%d. %d \n",i,tab[i]);
    }

    MIN=MAX=tab[0];
    printf("\n");

    for(unsigned int i= 0; i<10; i++)
    {
        if(MIN>tab[i])
        {
            MIN=tab[i];
            IMIN=i;
        }
        else if(MAX<tab[i])
        {
            MAX=tab[i];
            IMAX=i;
        }

    }
    printf("Najmniejsza liczba jest %d. %d, a najwieksza %d. %d", IMIN, MIN, IMAX, MAX);

    return 0;
    //wyswietlic wszystkie pozycje np najmiejsza liczba 10 na pozycji 1,5
}
//27.02.2022
/*
wczytac 2 liczby wieksza najpierw pozniej mniejsza, jezeli rowne obojetnie
3 liczby malejaco
zapoznac sie z algorytmami, wybrac ulubiony, schemat blokowy, przygotowac prezentacje(?)
*/
#include <stdio.h>

int main(void)
{
    double tab[4];
    double MAX;
    printf("Podaj 4 liczby\n");

    for(unsigned int i=0;i<4;i++)
    {
        scanf("%lf",&tab[i]);
    }


    for(unsigned int i=0;i<4;i++)
    {
        for(unsigned int j=i+1;j<4;++j)
        {
            if(tab[i] < tab[j])
            {
                printf("i=%d j=%d\n",i,j);
                MAX = tab[i];
                printf("1.MAX %lf = tab[i] %lf\n",MAX,tab[i]);
                tab[i] = tab[j];
                printf("2.tab[i] %lf = tab[j] %lf;\n",tab[i],tab[j]);
                tab[j] = MAX;
                printf("3.tab[j] %lf = MAX %lf;\n\n",tab[j],MAX);
            }
        }
    }

    for(unsigned int i=0;i<4;i++)
    {
        printf("%d %lf\n",i,tab[i]);
    }
    return 0;
}

12.03.2022
#include <stdio.h>
#define NAZWA "MEGATHINK, INC."
#define ADRES "10 Megabuck Plaza"
#define MIEJSCOWOSC "Megapolis, CA 94904"
#define GRANICA 65

void gwiazdki(void);

int main(void)
{
    gwiazdki();
    printf("%s\n", NAZWA);
    printf("%s\n", ADRES);
    printf("%s\n", MIEJSCOWOSC);
    gwiazdki();
    return 0;
}
void gwiazdki(void)
{
    int licznik;

    for(licznik = 1; licznik <= GRANICA; licznik++)
        putchar('*');
    putchar('\n');
}

#include <stdio.h>
#include <string.h>
#define NAZWA "MEGATHINK, INC."
#define ADRES "10 Megabuck Plaza"
#define MIEJSCOWOSC "Megapolis, CA 94904"
#define GRANICA 65
#define ODSTEP ' '

void n_znak(char ch, int num);

int main(void)
{
    int odstepy;

    n_znak('*', GRANICA);
    putchar('\n');
    n_znak(ODSTEP, 25);
    printf("%s\n", NAZWA);
    odstepy = (65 - strlen(ADRES)) / 2;
    n_znak(ODSTEP, odstepy);
    printf("%s\n", ADRES);
    n_znak(ODSTEP, (65 - strlen(MIEJSCOWOSC)) / 2);
    printf("%s\n", MIEJSCOWOSC);
    n_znak('*', GRANICA);
    putchar('\n');
    return 0;
}

void n_znak(char ch, int num)
{
    int licznik;

    for(licznik = 1; licznik <= num; licznik++)
        putchar(ch);
}

#include <stdio.h>

int imin(int, int);

int main(void)
{
    int zlo1,zlo2;

    printf("Podaj dwie liczby calkowite (q konczy program):\n");
    while(scanf("%d %d", &zlo1, &zlo2) == 2)
    {
        printf("Mniejsza liczba sposrod %d i %d jest %d.\n", zlo1, zlo2, imin(zlo1, zlo2));
        printf("Podaj dwie liczby calokowite (q konczy program):\n");
    }
    return 0;
}
int imin(int n, int m)
{
    int min;
    if(n<m)
        min=n;
    else
        min=m;
    return min;
}


#include <stdio.h>

int imax(int, int);

int main(void)
{
    printf("Wieksza liczba z %d i %d jest %d.\n", 3, 5, imax(3, 5));
    printf("Wieksza liczba z %d i %d  jest %d.\n", 3, 5, imax(3.0, 5.0));
    return 0;
}
int imax(n, m)
int n,m;
{
    int max;

    if(n>m)
        max = n;
    else
        max = m;
    return max;
}

#include <stdio.h>

void gora_i_dol(int);

int main(void)
{
    gora_i_dol(1);
    return 0;
}

void gora_i_dol(int n)
{
    printf("Poziom %d\n", n);
    if(n<4)
        gora_i_dol(n+1);
    printf("POZIOM %d\n", n);
}

#include <stdio.h>

long silnia(int n);

int main(void)
{
    int num;

    printf("Ten program oblicza silnie.\n");
    printf("Podaj liczbe z przedzialu 0-15 (q konczy program):\n");
    while(scanf("%d", &num) == 1)
    {
        if (num < 0)
            printf("Zadnych liczb ujemnych prosze!\n");
        else if (num > 15)
            printf("Wartosc nie moze przekraczac 15.\n");
        else
            printf("%d silnia = %ld\n", num, silnia(num));
        printf("Podaj liczbe z przedzialu 0-15 (q konczy program):\n");
    }
    return 0;
}

long silnia(int n)
{
    long odp;

    for (odp = 1; n > 1; n--)
        odp *= n;
    return odp;
}

#include <stdio.h>

long rsilnia(int n);

int main(void)
{
    int num;

    printf("Ten program oblicza silnie.\n");
    printf("Podaj liczbe z przedzialu 0-15 (q konczy program):\n");
    while(scanf("%d", &num) == 1)
    {
        if (num < 0)
            printf("Zadnych liczb ujemnych prosze!\n");
        else if (num > 15)
            printf("Wartosc nie moze przekraczac 15.\n");
        else
            printf("%d silnia = %ld\n", num, rsilnia(num));
        printf("Podaj liczbe z przedzialu 0-15 (q konczy program):\n");
    }
    return 0;
}

long rsilnia(int n)
{
    long odp;

    if (n > 0)
        odp = n * rsilnia(n-1);
    else
        odp = 1;
    return odp;
}


#include <stdio.h>

void do_binar(int n);

int main(void)
{
    int liczba;
    printf("Podaj liczbe calkowita (q konczy program):\n");
    while (scanf("%d", &liczba) == 1)
    {
        printf("Odpowiednik dwojkowy: ");
        do_binar(liczba);
        putchar('\n');
        printf("Podaj liczbe calkowita (q konczy program):\n");
    }
    return 0;
}
void do_binar(int n)
{
    int r;
    r = n % 2;
    if (n >= 2)
        do_binar(n / 2);
    putchar('0' + r);
    return;
}

oplaty.c
#include <stdio.h>
#include "hotel.h"

int main(void)
{
    int noce;
    double hotel;
    int kod;

    while ((kod = menu()) != 'QUIT')
    {
        switch(kod)
        {
            case 1: hotel = HOTEL1;
                    break;
            case 2: hotel = HOTEL2;
                    break;
            case 3: hotel = HOTEL3;
                    break;
            case 4: hotel = HOTEL4;
                    break;
            default:hotel = 0.0;
                    printf("Ups!\n");
                    break;
        }
        noce = pobierz_noce();
        pokaz_cene(hotel, noce);
    }
    return 0;
}
hotel.c
#include <stdio.h>
#include "hotel.h"

int menu(void)
{
    int kod, stan;

    printf("\n%s%s\n", GWIAZDKI, GWIAZDKI);
    printf("Podaj numer hotelu:\n");
    printf("1) Marek Antoniusz           2) Olimpijski\n");
    printf("3) U Marynarza               4) Savoy\n");
    printf("5) koniec\n");
    printf("%s%s\n", GWIAZDKI, GWIAZDKI);
    while ((stan = scanf("%d", &kod)) != 1 || (kod < 1 || kod > 5))
    {
        if (stan != 1)
            scanf("%*s");
        printf("Podaj liczbe z przedzialu od 1 do 5.\n");
    }
    return kod;
}
int pobierz_noce(void)
{
    int noce;

    printf("Ile nocy bedzie potrzebne? ");
    while (scanf("%d", &noce) != 1)
    {
        scanf("%*s");
        printf("Podaj liczbe calkowita, np. 2.\n");
    }
    return noce;
}
void pokaz_cene(double hotel, int noce)
{
    int n;
    double suma = 0.0;
    double przelicznik = 1.0;

    for (n = 1; n <= noce; n++, przelicznik *= RABAT)
        suma += hotel * przelicznik;
    printf("Calkowity koszt pobytu wyniesie %0.2f $.\n",suma);
}

hotel.h 
#define KONIEC 5
#define HOTEL1 50.00
#define HOTEL2 55.00
#define HOTEL3 80.00
#define HOTEL4 100.00
#define RABAT 0.95
#define GWIAZDKI "****************************"
int menu(void);
int pobierz_noce(void);
void pokaz_cene(double, int);


#include <stdio.h>
#define ROZMIAR 4

int main(void)
{
    short daty[ROZMIAR], *ptc, index;
    double oplaty[ROZMIAR], *ptz;

    ptc=daty;
    ptz=oplaty;
    printf("%25s %10s\n", "short", "double");
    for (index=0; index<ROZMIAR; index++)
        printf("wskazniki + %d: %10p %10p\n", index, ptc+index, ptz+index);
    return 0;
}

#include <stdio.h>
#define MIESIACE 12

int main(void)
{
    int dni[MIESIACE]={31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for (index=0; index<MIESIACE; index++)
        printf("Miesiac %d ma %d dni.\n", index+1, *(dni + index));
    return 0;
}

#include <stdio.h>
#define ROZMIAR 10
long sumuj(int tab[], int n);

int main(void)
{
    int kulki[ROZMIAR]={20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long wynik;

    wynik=sumuj(kulki, ROZMIAR);
    printf("Calkowita liczba kulek wynosi %ld.\n", wynik);
    printf("Rozmiar tablicy kulki wynosi %d bajtow.\n", sizeof kulki);
    return 0;
}
long sumuj(int tab[], int n)
{
    int i;
    long suma=0;

    for(i=0;i<n;i++)
        suma+=tab[i];
    printf("Rozmiar tablicy tab wynosi %d bajtow.\n", sizeof tab);
    return suma;
}

#include <stdio.h>
#define ROZMIAR 10
long sumujw(int *poczatek, int *koniec);

int main(void)
{
    int kulki[ROZMIAR]={20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long wynik;

    wynik=sumujw(kulki, kulki + ROZMIAR);
    printf("Calkowita liczba kulek wynosi %ld.\n", wynik);
    return 0;
}
long sumujw(int *poczatek, int *koniec)
{
    long suma=0;

    while (poczatek < koniec)
    {
        suma+=*poczatek;
        poczatek++;
    }
    return suma;
}

#include <stdio.h>
int dane[2] = {100, 300};
int wiecejdanych[2]= {200, 400};

int main(void)
{
    int *w1, *w2, *w3;

    w1= w2 = dane;
    w3= wiecejdanych;
    printf("*w1++ = %d, *++w2 = %d, (*w3)++ = %d\n", *w1++, *++w2, (*w3)++);
    printf("*w1 = %d, *w2 = %d, *w3 = %d\n",*w1,*w2,*w3);
    return 0;
}

#include <stdio.h>
int main(void)
{
    int urna[3] = {100, 200, 300};
    int *wsk1, *wsk2;
    wsk1=urna;
    wsk2=&urna[2];
    printf("wsk1 = %p, *wsk1 = %d, &wsk1 = %p\n", wsk1, *wsk1, &wsk1);
    wsk1++;
    printf("wartosci po wsk1++\n");
    printf("wsk1 = %p, *wsk1 = %d, &wsk1 = %p\n", wsk1, *wsk1, &wsk1);
    printf("wsk2 = %p, *wsk2 = %d, &wsk2 = %p\n", wsk2, *wsk2, &wsk2);
    ++wsk2;
    printf("wartosci po ++wsk2\n");
    printf("wsk2 = %p, *wsk2 = %d, &wsk2 = %p\n", wsk2, *wsk2, &wsk2);
    printf("wsk2 - wsk1 = %d\n", wsk2-wsk1);
    return 0;
}





