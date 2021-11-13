//Cwiczenie 1
#include <stdio.h>
int main(void)
{
	printf("Bartosz Wrombel \n");
	printf("Bartosz \nWrombel \n");
	printf("Bartosz ");
	printf("Wrombel");
	return 0;
}
//Cwiczenie 2
#include <stdio.h>
int main(void)
{
	printf("Nazywam sie Bartosz Wrombel i mieszkam w Olsztynie \n");
	return 0;
}
//Cwiczenie 3
#include <stdio.h>
int main(void){
	int dni,lata;
	printf("Podaj ile masz lat\n");
	scanf("%d",&lata);
	dni=lata*365;
	printf("Zyjesz juz %d dni \n",dni);
	return 0;
}
//Cwiczenie 4
#include <stdio.h>
void janie(void)
{
	printf("Panie Janie!\n");
}
void wstan(void)
{
	printf("Rano wstan!\n");
}
int main(void)
{
	janie();
	janie();
	wstan();
	return 0;
}
//Cwiczenie 5
#include <stdio.h>

int main(void)
{
	int liczba=10;
	printf("%d\n",liczba);
	printf("%d*2=%d\n",liczba,liczba*2);
	printf("%d^2=%d",liczba,liczba*liczba);
	return 0;
}
