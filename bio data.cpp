#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char a[50],ch;
	fstream bio;
	bio.open("Gfg.txt",ios::in|ios::out);
	bio<<"                 BIO DATA "<<endl<<endl;
	cout<<"enter name : ";
	cin.getline(a,50);
	bio<<"Name            : "<<a<<endl;
	cout<<"enter father name : ";
	cin.getline(a,50);
	bio<<"Father Name     : "<<a<<endl;
	cout<<"enter mother name : ";
	cin.getline(a,50);
	bio<<"Mother Name     : "<<a<<endl;
	cout<<"enter date of birth: ";
	cin.getline(a,50);
	bio<<"Date Of Birth   : "<<a<<endl;
	cout<<"enter sex : ";
	cin.getline(a,50);
	bio<<"Sex             : "<<a<<endl;
	cout<<"enter merrital status : ";
	cin.getline(a,50);
	bio<<"Merrital Status : "<<a<<endl;
	cout<<"enter nationality: ";
	cin.getline(a,50);
	bio<<"Nationality     : "<<a<<endl;
	cout<<"enter hobbies : ";
	cin.getline(a,50);
	bio<<"Hobbies         : "<<a<<endl;
	cout<<"enter strength : ";
	cin.getline(a,50);
	bio<<"Strength        : "<<a<<endl;
	cout<<"enter language : ";
	cin.getline(a,50);
	bio<<"Language        : "<<a<<endl;
	cout<<"enter github id: ";
	cin.getline(a,50);
	bio<<"github id       : "<<a<<endl;
	cout<<"enter linkdin id : ";
	cin.getline(a,50);
	bio<<"linkdin id      : "<<a<<endl;
	cout<<"enter intershala id : ";
	cin.getline(a,50);
	bio<<"intershala id   : "<<a<<endl;
	cout<<"enter hackerrank id : ";
	cin.getline(a,50);
	bio<<"hackrrank id    : "<<a<<endl;
	bio.close();
	return 0;
}