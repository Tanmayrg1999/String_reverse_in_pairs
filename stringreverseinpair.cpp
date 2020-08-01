#include<iostream>
#include<string.h>
using namespace std;
string reverse(string str,int s, int e)
{
	string rev;
	for(int i=s;i<e;i++)
	{
		rev=rev+str[e-i+s-1];
	}
	return rev;
}
int main()
{
	string str;
	cout<<"enter a string"<<endl;
	getline(cin,str);
	int l=str.length();	
	int pair;
	cout<<"my string was"<<endl;
	cout<<str<<endl;
	cout<<"calculate the number of pairs"<<endl;
	cin>>pair;
		cout<<"reverse is:"<<endl;
	for(int i=0;i<l;i=i+pair)
	{
		if((i+pair)<=l)
		{
		cout<<reverse(str,i,i+pair);
		}
		else
		{
			cout<<reverse(str,i,l);
		}
	}
}
