#include <iostream>
using namespace std;

int main()
{
    string a,b,c;
cin>>a>>b>>c;
if (a=="vertebrado" && b=="ave" && c=="carnivoro")
    cout<<"aguia\n";
if (a=="vertebrado" && b=="ave" && c=="onivoro")
    cout<<"pomba\n";
if (a=="vertebrado" && b=="mamifero" && c=="onivoro")
    cout<<"homem\n";
if (a=="vertebrado" && b=="mamifero" && c=="herbivoro")
    cout<<"vaca\n";
if (a=="invertebrado" && b=="inseto" && c=="hematofago")
    cout<<"pulga\n";
if (a=="invertebrado" && b=="inseto" && c=="herbivoro")
    cout<<"lagarta\n";
if (a=="invertebrado" && b=="anelideo" && c=="hematofago")
    cout<<"sanguessuga\n";
if (a=="invertebrado" && b=="anelideo" && c=="onivoro")
    cout<<"minhoca\n";
    return 0;
}
