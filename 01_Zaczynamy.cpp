//Ćwiczenie 1
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