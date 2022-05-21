#include <stdio.h>
#include <stdlib.h>

int tablicanxm(int n, int m);

int main()
{
    int n=0,m=0;
    printf("Podaj wymiary tablicy n x m\n");
    while((m<=0) && (n<=0))
    {
        scanf("%d %d",&n,&m);
    }
    printf("%d, %d",n,m);//only int number not working
    tablicanxm(n,m);

    return 0;
}
int tablicanxm(int n, int m)
{

    int **matrix=(int **) malloc(n*sizeof(int *));
    matrix[0]=(int *)malloc(n*m*sizeof(int));
    for(int i=1; i<n; i++)
        matrix[i]=matrix[0]+i*n;

//napisy(odwrocic, polaczyc, policzyc), struktury, tablice(mnozenie, przekazac), struktury zagnieżdżone, listy jednokierunkowe
//6,7 rozdzial zadania 21.05.2022
//1,2,3,4,5,6,7 kol rozdzialy w zadania
}
