// ConsoleApplication18.cpp : Defines the entry point for the console application.
//
	
#include "stdafx.h"
#include <iostream>
#include <queue>
#include<string>
using namespace std;
struct  castomer
{
	string type;
	int price;
};
void comb(queue <castomer> x,queue <castomer> &y,queue <castomer>&w)
{
	
	while (!x.empty())
	{
castomer t=x.front();
x.pop();
if (t.type=="internet")
	w.push(t);
else if (t.type=="mobile")
	y.push(t);
	}
}
void total(queue <castomer> x,queue <castomer> y)
	{
		int s=0;
		int ss=0;
		while (!x.empty())
	{
castomer t=x.front();
x.pop();
s=s+t.price;
	}
		while (!y.empty())
	{
castomer t=y.front();
y.pop();
ss=ss+t.price;
	}
		cout<<"total mobile "<<s<<endl<<"total internet "<<ss<<endl;
	}
void print(queue <castomer> x)
{

		while (!x.empty())
	{
castomer t=x.front();
x.pop();
cout<<"type "<<t.type<<" price "<<t.price<<endl;
	}

}
int _tmain(int argc, _TCHAR* argv[])
{
	queue <castomer>x;
	queue <castomer> y;
	queue <castomer> z;
	castomer k= {"internet",50};							
	castomer pp={"mobile",10};
	castomer kk= {"internet",70};
	castomer p={"mobile",60};
	x.push(k);
	x.push(pp);
	x.push(p);
	x.push(kk);
	comb (x,y,z);
	total(y,z);
	print(x);
	print(y);
	print(z);
	return 0;
}

							