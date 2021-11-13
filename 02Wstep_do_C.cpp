//Cwiczenie 1
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
//Cwiczenie 2
#include <iostream>

using namespace std;

int main()
{
	cout<<"Nazywam sie Bartosz Wrombel i mieszkam w Olsztynie"<<endl;
	return 0;
}
//Cwiczenie 3
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
//Cwiczenie 4
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
//Cwiczenie 5
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
//Cwiczenie 6
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