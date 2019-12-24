#include <iostream>
#include <cmath>
using namespace std;

int main()
{

double sayi1;
double sayi2;
int islem;
cout<<"Dort Islem Makinesi"<<endl;
cout<<"Sayi1''i giriniz:";
cin>>sayi1;
cout<<"Sayi2'yi giriniz";
cin>>sayi2;
cout<<"Islem Seciniz (1:Toplama,2:Cikarma,3:Carpma,4:Bolme)";
cin>>islem;

switch(islem)
{
case 1:
cout<<"Toplama Sonucu="<<sayi1+sayi2<<endl;
break;
case 2:
	cout<<"Cikarma Sonucu="<<sayi1-sayi2<<endl;
	break;
	case 3:
		cout<<"Carpma Sonucu="<<sayi1*sayi2<<endl;
		break;
		case 4:
		cout<<"Bolme Sonucu="<<sayi1/sayi2<<endl;
		break;
		default:
			cout<<"Hatali Sayi Girdiniz."<<endl; 
}
return 0;
}
