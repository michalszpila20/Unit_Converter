#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include "converter.h"

using namespace std;
string typ,opcja1, opcja2;
float num,result,value1;

void exit_program(void)
{
    if(opcja1=="exit" || opcja2=="exit"|| num==9999)
    {
        exit (EXIT_FAILURE);
    }
}

int main()
{
    while(1)
    {
        system("cls");
        cout<<"Wynik: "<<result<<endl;
        cout<<"Unit converter"<<endl;
        cout<<"Temperature:  "<<"Currency: "<<"Volume: "<<"       Mass:        " <<"   Length:" <<endl;
        cout<<"Celsius-[C]   "<<"   USD    "<<"liter-[L]"<<"      Kilogram-[kg]"<<"   Mile-[M]"<<endl;
        cout<<"Fahrenheit-[F]"<<"   EUR    "<<"gallon-[gal]"<<"   Gram-[g]    " <<"    Meter-[m]"<<endl;
        cout<<"Kelvin-[K]    "<<"   PLN    "<<"cup     "<<"       Pound-[lbs] "   <<"    Kilometer-[km]"<<endl;

        cout<<"Konwersja z:";
        cin>>opcja1;
        exit_program();
        if(opcja1=="reset")
        {
            continue;
        }
        cout<<"do:";
        cin>>opcja2;
        exit_program();
        if(opcja2=="reset")
        {
            continue;
        }
        cout<<"Wartosc:";
        cin>>num;
        exit_program();
        if(num==-9999)
        {
            continue;
        }
        Temperature temp(num);
        Currency c1(num);
        Volume v1(num);
        Mass m1(num);
        Length len1(num);

        if(cin.fail())
        {
            cout<<"Zla liczba"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
        }
        else
        {
            ///Temperature
            if(opcja1=="F" && opcja2=="C")
            {
                result = temp.FtoC();
            }
            else if(opcja1=="C" && opcja2=="F")
            {
                result = temp.CtoF();
            }
            else if(opcja1=="C" && opcja2=="K")
            {
                result=temp.CtoK();
            }
            else if(opcja1=="K" && opcja2=="C")
            {
                result=temp.KtoC();
            }
            else if(opcja1=="K" && opcja2=="F")
            {
                result=temp.KtoF();
            }
            else if(opcja1=="F" && opcja2=="K")
            {
                result=temp.FtoK();
            }
            ///Currency
            else if(opcja1=="USD" && opcja2=="EUR")
            {
                result = c1.USDtoEUR();
            }
            else if(opcja1=="EUR" && opcja2=="USD")
            {
                result = c1.EURtoUSD();
            }
            else if(opcja1=="USD" && opcja2=="PLN")
            {
                result=c1.USDtoPLN();
            }
            else if(opcja1=="PLN" && opcja2=="USD")
            {
                result=c1.PLNtoUSD();
            }
            else if(opcja1=="EUR" && opcja2=="PLN")
            {
                result=c1.EURtoPLN();
            }
            else if(opcja1=="PLN" && opcja2=="EUR")
            {
                result=c1.PLNtoEUR();
            }
            ///Volume
            else if(opcja1=="L" && opcja2=="gal")
            {
                result = v1.Liter_to_galon();
            }
            else if(opcja1=="gal" && opcja2=="L")
            {
                result = v1.galon_to_Liter();
            }
            else if(opcja1=="L" && opcja2=="cup")
            {
                result=v1.Liter_to_cup();
            }
            else if(opcja1=="cup" && opcja2=="L")
            {
                result=v1.cup_to_Liter();
            }
            else if(opcja1=="cup" && opcja2=="gal")
            {
                result=v1.cup_to_galon();
            }
            else if(opcja1=="gal" && opcja2=="cup")
            {
                result=v1.galon_to_cup();
            }
            ///Mass
            else if(opcja1=="kg" && opcja2=="g")
            {
                result = m1.kg_to_g();
            }
            else if(opcja1=="g" && opcja2=="kg")
            {
                result = m1.g_to_kg();
            }
            else if(opcja1=="kg" && opcja2=="lbs")
            {
                result=m1.kg_to_lbs();
            }
            else if(opcja1=="lbs" && opcja2=="kg")
            {
                result=m1.lbs_to_kg();
            }
            else if(opcja1=="g" && opcja2=="lbs")
            {
                result=m1.g_to_lbs();
            }
            else if(opcja1=="lbs" && opcja2=="g")
            {
                result=m1.lbs_to_g();
            }
            ///Length
            else if(opcja1=="km" && opcja2=="m")
            {
                result = len1.Km_to_m();
            }
            else if(opcja1=="m" && opcja2=="km")
            {
                result = len1.m_to_Km();
            }
            else if(opcja1=="km" && opcja2=="M")
            {
                result=len1.Km_to_Mile();
            }
            else if(opcja1=="M" && opcja2=="km")
            {
                result=len1.Mile_to_Km();
            }
            else if(opcja1=="m" && opcja2=="M")
            {
                result=len1.m_to_Mile();
            }
            else if(opcja1=="M" && opcja2=="m")
            {
                result=len1.Mile_to_m();
            }
            else
            {
                system("cls");
                cout<<"Bledne symbole. Prosze ponowic probe!"<<endl;
                Sleep(1000);
            }
        }
        }
    return 0;
}
