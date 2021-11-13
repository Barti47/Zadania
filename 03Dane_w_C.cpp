//Cwiczenie 1
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
//Cwiczenie 2
#include <iostream>
using namespace std;

int main()
{
    int ch;
    cout<<"Podaj kod ASCII:";
    cin>>ch;
    cout<<"Podany kod ASCII "<<ch<<" to "<<(char)ch;
	return 0;
}
//Cwiczenie 3
#include <iostream>
using namespace std;

int main()
{
    cout<<"\aSally, przerazona niespodziewanym odglosem, krzyknela \"A niech mnie, co to bylo!?\""<<endl;
	return 0;
}
//Cwiczenie 4
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
//Cwiczenie 5
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
//Cwiczenie 6
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