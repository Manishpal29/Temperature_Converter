// calsicus to farenheit
//farenheit to calsicus
#include<iostream>
using namespace std;

int main()
{
	int user_choice;
	cout<<"\n1.Celsius to Fahrenheit And Kelvin\t\t 2.Fahrenheit to Celsius \t\t3.Press 3 For Exit\n"<<endl;
	
	
	while(user_choice !=3)
	{
		cout<<"\n Enter Your choice= ";
		cin>>user_choice;
		
		    if(user_choice==1)
		{
			int Celsius;
			int Fahrenheit;
			float Kelvin;
			cout<<"\n Enter The Celsius To Convert Into Fahrenheit And Kelvin=";
			cin>>Celsius;
		
			Fahrenheit= (9*Celsius/5)+32;
			Kelvin=Celsius+273.15;
		
			cout<<"\n The Value Of "<<Celsius <<" Celsius "<<"is Equal to "<<Fahrenheit<<" Fahrenheit and "<<Kelvin<<" Kelvin"<<endl;
			
		}
		else if(user_choice==2)
		{
			int Fahrenheit;
			int Celsius ;
			float Kelvin;
			cout<<"\n Enter The Fahrenheit To Convert Into Celsius=";
			cin>>Fahrenheit;
		
			Celsius=(Fahrenheit-32)* 5/9;
			Kelvin=((Fahrenheit-32)* 5/9)+273.15;
		
			cout<<"\n The  Value Of "<<Fahrenheit <<" Fahrenheit "<<"is Equal to="<<Celsius<<" Celsius And "<<Kelvin<<" Kelvin"<<endl;
		}
			else if(user_choice==3)
			{
				cout<<"\nExit";
				exit(0);
			}
		else
		{
			cout<<"\n You Enter The Wrong Choice\n";
		}
	}

}
