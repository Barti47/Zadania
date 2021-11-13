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
//Cwiczenie 2
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
//Cwiczenie 3
#include <iostream>

using namespace std;
int main()
{
    float liczba;
    cout<<"Podaj dowolna liczbe zmiennoprzecinkowa:"<<endl;
    cin>>liczba;
    cout<<"Wypisano liczbe "<<liczba<<" lub ";
    cout<<scientific<<liczba<<endl;
    cout<<"Wypisano liczbe "<<showpos<<liczba<<" lub ";
    cout<<scientific<<liczba<<endl;

    return 0;
}
//Cwiczenie 4
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
//Cwiczenie 5
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string imie, nazwisko;
	cout << "Jak masz na imie?\n";
	cin >> imie;
	cout << "Jak masz na nazwisko?\n";
	cin >> nazwisko;
	cout << imie << " " << nazwisko << endl;
	for (unsigned int i = 0; i < imie.size() - to_string(imie.size()).size(); i++) 
	{
		cout << " ";
	}
	cout << imie.size() << " ";
	for (unsigned int i = 0; i < nazwisko.size() - to_string(nazwisko.size()).size(); i++) 
	{
		cout << " ";
	}
	cout << nazwisko.size();
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string imie, nazwisko;
	cout << "Jak masz na imie?\n";
	cin >> imie;
	cout << "Jak masz na nazwisko?\n";
	cin >> nazwisko;
	cout << imie << " " << nazwisko << endl;
	cout << imie.size();
	for (unsigned int i = to_string(imie.size()).size(); i < imie.size(); i++) 
	{
		cout << " ";
	}
	cout << " ";
	cout << nazwisko.size();
	for (unsigned int i = to_string(nazwisko.size()).size(); i < nazwisko.size(); i++) 
	{
		cout << " ";
	}
	return 0;
}
