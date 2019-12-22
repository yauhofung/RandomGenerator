#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;

int main()
{	srand(time(NULL));

	int selection;

	bool loop=true;
	while(loop)
	{	cout<<"Select your random generation:\n";
		cout<<"(1) Single Digit\n";
		cout<<"(2) Single Character\n";
		cout<<"(3) Matrix Digits\n";
		cout<<"(4) Matrix Characters\n";
		cout<<"(5) Chaotic Digits\n";
		cout<<"(6) Chaotic Characters\n";
		cout<<"To terminate, press Ctrl+C. ";
		cin>>selection;

		if(selection==1) //single digit
		{	cout<<rand()%10<<"\n";} //0 to 9

		else if(selection==2) //single character
		{	cout<<char(rand()%95+32)<<"\n";} //32 to 126

		else if(selection==3) //matrix digits
		{	while(loop)
			{	if(rand()%6==0) //1-in-6 chance of printing a space
				{	cout<<' ';}
				else
				{	cout<<rand()%10;} //0 to 9
				cout<< "	";}}

		else if(selection==4) //matrix characters
		{	while(loop)
			{	if(rand()%6==0) //1-in-6 chance of printing a space
				{	cout<<' ';}
				else
				{	cout<<char(rand()%94+33);} //33 to 126
				cout<< "	";}}

		else if(selection==5) //chaotic digits
		{	while(loop)
			{	cout<<rand()%10;}} //0 to 9

		else if(selection==6) //chaotic characters
		{	while(loop)
			{	cout<<char(rand()%95+32);}} //32 to 126

		else //invalid input
		{	cout<<"Invalid selection.\n";}}

	return 0;}

//ENSURE ALL COUT INDENTATIONS ARE AT MAX LENGTH BEFORE SAVING!!!
