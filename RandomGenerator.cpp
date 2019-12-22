#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{       srand(time(NULL));

        bool loop=true;
	int selection;

	while(loop)
	{	cout<<"Select your random generation:\n"; //selection menu
	        cout<<"(1) Matrix Digits\n";
		cout<<"(2) Matrix Characters\n";
		cout<<"(3) Chaotic Digits\n";
		cout<<"(4) Chaotic Characters\n";
		cout<<"NOTE: To stop, press Ctrl+C.\n";
		cin>>selection;

		if(selection==1) //matrix digits
		{	while(loop)
	        	{       if(rand()%6==0) //1-in-6 chance of printing a space
				{	cout<<' ';}
				else
				{	cout<<rand()%10;}
				cout<< "	";}}
		else if(selection==2) //matrix characters
		{	while(loop)
			{	if(rand()%6==0) //1-in-6 chance of printing a space
				{	cout<<' ';}
				else
				{	cout<<char(rand()%94+33);}
				cout<< "	";}}

		else if(selection==3) //chaotic digits
		{	while(loop)
	                {       cout<<rand()%10;}}
		else if(selection==4) //chaotic characters
		{	while(loop)
        	        {       cout<<char(rand()%95+32);}}

		else //invalid input
		{	throw "Invalid selection";}}

	return 0;}

//ALWAYS DOUBLE CHECK ALL COUT INDENTATIONS BEFORE SAVING!!!
