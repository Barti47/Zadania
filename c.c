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
}

