#include <iostream>
#include "math.h"
#include <stdlib.h>

using namespace std;



class account
{
    private:
    string imie, nazwisko, pesel;
    double stan;

    public:
    account(string i, string n, string p, double s)
    {
        imie = i;
        nazwisko = n;
        pesel = p;
        stan = s;
    };

    void display_imie()
    {
        cout<<imie<<"\n";
    }
    void display_nazwisko()
    {
        cout<<nazwisko<<"\n";
    }
    void display_pesel()
    {
        cout<<pesel<<"\n";
    }void display_stan()
    {
        cout<<stan<<"\n";
    }


};



int main()
{
    string imie = "imie";
    string nazwisko = "nazwisko";
    string pesel = "pesel";
    double stan = 10.0;
    account konto(imie, nazwisko, pesel, stan);
    konto.display_imie();
    konto.display_nazwisko();
    konto.display_pesel();
    konto.display_stan();


}