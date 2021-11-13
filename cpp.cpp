I
1.
#include <iostream>

using namespace std;

int main()
{
    float cale,cm;
    cout<<"Program przeliczajacy cale na centymetry"<<endl;
    cout<<"Podaj liczbe cali: ";
    cin>>cale;
    if(cale>0)
    {
        cm=cale*2.54;
        cout<<cale<<" cali to "<<cm<<" cm";
    }
    else
    {
        cout<<"Podana liczba musi byc wieksza od 0!!!";
    }
    return 0;
}
II
1.
#include <stdio.h>
int main(void)
{
	printf("Bartosz Wrombel \n");
	printf("Bartosz \nWrombel \n");
	printf("Bartosz ");
	printf("Wrombel");
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	cout<<"Bartosz Wrombel"<<endl;
	cout<<"Bartosz"<<endl<<"Wrombel"<<endl;
	cout<<"Bartosz ";
	cout<<"Wrombel";
	return 0;
}

2.
#include <stdio.h>
int main(void)
{
	printf("Nazywam sie Bartosz Wrombel i mieszkam w ADRES \n");
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	cout<<"Nazywam sie Bartosz Wrombel i mieszkam w ADRES"<<endl;
	return 0;
}
3.
#include <iostream>

using namespace std;

int main()
{
	int dni,lata;
	cout<<"Podaj ile masz lat"<<endl;
	cin>>lata;
	dni=lata*365;
	cout<<"Zyjesz juz "<<dni<<" dni";
	return 0;
}

#include <stdio.h>
int main(void){
	int dni,lata;
	printf("Podaj ile masz lat\n");
	scanf("%d",&lata);
	dni=lata*365;
	printf("Zyjesz juz %d dni \n",dni);
	return 0;
}
4.
#include <iostream>
using namespace std;

void janie()
{
cout<<"Panie Janie!"<<endl;
}
void wstan()
{
cout<<"Rano wstan!"<<endl;
}

int main()
{
    janie();
	janie();
	wstan();
	return 0;
}

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
5.
#include <iostream>
using namespace std;

int main()
{
    int liczba=10;
    cout<<liczba<<endl;
    cout<<liczba<<"*2="<<liczba*2<<endl;
    cout<<liczba<<"^2="<<liczba*liczba;
	return 0;
}

#include <stdio.h>

int main(void)
{
	int liczba=10;
	printf("%d\n",liczba);
	printf("%d*2=%d\n",liczba,liczba*2);
	printf("%d^2=%d",liczba,liczba*liczba);
	return 0;
}

6.
#include <iostream>
using namespace std;

void usmiech(int a)
{   
    for(int i=0;i<a;i++)
    {
    cout<<"Usmiech!";
    }
    cout<<endl;
}

int main()
{
    usmiech(3);
    usmiech(2);
    usmiech(1);
	return 0;
}


III
1.

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

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int wynikIM=INT_MAX;
    float wynikFMX=1e38f,wynikFMN=1e-37f;
    cout<<"Przepelnienie zmiennej calkowitej:"<<wynikIM+1<<endl;
    cout<<"Przepelnienie zmiennej zmiennoprzecinkowej:"<<wynikFMX*1000.0f<<endl;
    cout<<"Niedomiar zmiennej zmiennoprzecinkowej:"<<wynikFMN/1.0e8f<<endl;
	return 0;
}

2.
#include <stdio.h>

int main(void)
{
    char ch;
	printf("Podaj kod ASCII:\n");
	scanf("%d",&ch);
	printf("Podany kod ASCII %d to %c. \n",ch,ch);
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int ch;
    cout<<"Podaj kod ASCII:";
    cin>>ch;
    cout<<endl<<"Podany kod ASCII "<<ch<<" to "<<(char)ch;
	return 0;
}
3.
#include <stdio.h>

int main(void)
{
	printf("\aSally, przerazona niespodziewanym odglosem, krzyknela \"A niech mnie, co to bylo!?\"\n");
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
    cout<<"\aSally, przerazona niespodziewanym odglosem, krzyknela \"A niech mnie, co to bylo!?\""<<endl;
	return 0;
}
4.
#include <stdio.h>

int main(void)
{
	float liczba;
	printf("Podaj dowolna liczbe zmiennoprzecinkowa:\n");
	scanf("%f",&liczba);
	printf("Podana liczba to %f lub %e",liczba,liczba);
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
    float liczba;
    cout<<"Podaj dowolna liczbe zmiennoprzecinkowa:"<<endl;
    cin>>liczba;
    cout<<"Podana liczba to "<<liczba<<" lub ";
    cout<<scientific<<liczba;
	return 0;
}

5.
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

#include <iostream>
using namespace std;
int main()
{
    int lata,sekundy;
	cout<<"Podaj ile masz lat"<<endl;
	cin>>lata;
	sekundy=lata*3.156E+7;
	cout<<"Zyjesz juz "<<sekundy<<" sekund";
	return 0;
}
6.
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

#include <iostream>
using namespace std;
int main()
{
    double woda,wynik;
    double czasteczka=3E-23;
	cout<<"Podaj objetosc wody w litrach"<<endl;
	cin>>woda;
	wynik=(woda*1000)/czasteczka;
	cout<<"W "<<woda<<" litrach wody znajduje sie "<<wynik<<" czasteczek wody."<<endl;
	return 0;
}

IV
1.
#include <stdio.h> 
#include <stdlib.h> 

int main() 

{ 
    char imie[50],nazwisko[50]; 
    printf("Jak masz na imie?\n"); 
    scanf("%s",imie); 
    printf("Jak masz na nazwisko?\n"); 
    scanf("%s",nazwisko); 
  	printf("%s %s",nazwisko,imie); 
    return 0; 
} 

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string imie,nazwisko; 
    cout<<"Jak masz na imie?\n"; 
    cin>>imie;
    cout<<"Jak masz na nazwisko?\n"; 
    cin>>nazwisko;
  	cout<<nazwisko<<" "<<imie;
    return 0; 
}

2.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
    string imie; 
    cout<<"Jak masz na imie?\n"; 
    cin>>imie;
  	cout<<"\""<<imie<<"\""<<endl;
    cout<<setw(20)<<"\""<<imie<<"\""<<endl;
    cout<<"\""<<imie<<setw(20)<<"\""<<endl;
    cout<<left<<"\""<<setw(imie.size()+3)<<imie<<"\""<<endl;
    return 0; 
}

3.
#include <iostream>

using namespace std;
int main()
{
    double liczba;
    cout<<"Podaj dowolna liczbe zmiennoprzecinkowa:"<<endl;
    cin>>liczba;
    cout<<"Wypisano liczbe "<<liczba<<" lub ";
    cout<<scientific<<liczba<<endl;
    cout<<"Wypisano liczbe "<<showpos<<liczba<<" lub ";
    cout<<scientific<<liczba<<endl;

    return 0;
}

4.
#include <iostream>

using namespace std;
int main()
{
    float wynik,wzrost; 
    string imie; 

    cout<<"Jak masz na imie?\n"; 
	cin>>imie; 
    cout<<"Podaj swoj wzrost w cm\n"; 
    cin>>wzrost; 
    wynik=wzrost/100; 
	cout<<imie<<", masz "<<wynik<<" metra wzrostu."<<endl;
    return 0; 
}

5.
#include <iostream>
#include <string>

using namespace std;

int main() {
  string imie, nazwisko;

  cout << "Jak masz na imie?\n";
  cin >> imie;
  cout << "Jak masz na nazwisko?\n";
  cin >> nazwisko;
  cout << imie << " " << nazwisko << endl;
  for (unsigned int i = 0; i < imie.size() - to_string(imie.size()).size();
       i++) {
    cout << " ";
  }
  cout << imie.size() << " ";
  for (unsigned int i = 0;
       i < nazwisko.size() - to_string(nazwisko.size()).size(); i++) {
    cout << " ";
  }
  cout << nazwisko.size();
  return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
  string imie, nazwisko;

  cout << "Jak masz na imie?\n";
  cin >> imie;
  cout << "Jak masz na nazwisko?\n";
  cin >> nazwisko;
  cout << imie << " " << nazwisko << endl;
  cout << imie.size();
  for (unsigned int i = to_string(imie.size()).size(); i < imie.size(); i++) {
    cout << " ";
  }
  cout << " ";
  cout << nazwisko.size();
  for (unsigned int i = to_string(nazwisko.size()).size(); i < nazwisko.size();
       i++) {
    cout << " ";
  }
  return 0;
}

