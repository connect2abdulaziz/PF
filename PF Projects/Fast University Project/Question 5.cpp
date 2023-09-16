#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int bin(int=0);
int oct(int =0);
string hex(int =0);

int main()
{
	cout <<fixed<<right;
	cout <<setw(5)<<"Dec"<<setw(17)<<"Bin"<<setw(17)<<"Oct"<<setw(15)<<"Hex\n";

	for (int i = 0; i<= 256; i++ )
	{
		cout <<setw(5)<<i;
		cout <<setw(17)<<bin(i);
		cout <<setw(17)<<oct(i);
		cout <<setw(19)<<hex(i)<<"\n";
	}
}
int bin(int a )
{
	int b =0;
	int temp , i= a;
	while (i)
	{
		temp = i%2;
		b = b*10 + temp;
		i = i/2;
	}
	i = a;
	long long int bin = 0;
	while (i)
	{
		temp = b%10;
		bin = bin * 10 + temp;
		b=b/10;
		i=i/2;
	}
	return bin;
}
int oct(int a)
{
	long long b = bin(a);
	int temp=0;
	int oct=0;
	while (b)
	{
		temp = b%1000;
		int temp2 =0;
		for (int i=0,j =0; i<3; i++)
		{
			j = temp%10;
			temp2 = temp2 + j * pow(2,i);
			temp = temp/10;
		}
		oct = oct * 10 + temp2;
		b = b/1000;
	}
	b = oct;
	oct = 0;
	while (a)
	{
		temp = b%10;
		oct = oct * 10 + temp;
		b = b/10;
		a = a/10;
	}
	return oct;
}
string hex(int a)
{
	long long b = bin(a);
	int temp=0;
	int hexInt=0;
	while (b)
	{
		temp = b%10000;
		int temp2 =0;
		for (int i=0,j =0; i<4; i++)
		{
			j = temp%10;
			temp2 = temp2 + j * pow(2,i);
			temp = temp/10;
		}
		hexInt = hexInt * 100 + temp2;
		b = b/10000;
	}
	b= bin(a);
	string hex= "0     ";
	int i =0;
	char c= '\0';
	while (b)
	{
		temp = hexInt%100;
		if ( temp < 10)
		{
			c =temp+ 48;
			hex[i] = c;
		}
		else
		{
		 	c =temp+55;
			hex[i] = c;
		}
		b = b/10000;
		hexInt = hexInt/100;
		i++;
	}
	return hex;
}
