/*
C++ program to create template function to search for a given key element from an array.
performing first on integer then on character using the same template function
*/

#include<iostream>
using namespace std;

template <class t>

void search(t a[],t item)
{
	int i;
	int flag=0;
	for(i=0;i<5;i++)
	{
		if(a[i]==item)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	cout<<"Element found and its location is "<<i+1;
	else
	cout<<"Element not found!!!";
}

int main()
{
	int x;
	char y;
	int iarr[]={10,20,30,40,50};
	char carr[]={'a','b','c','d','e'};
	
	for(int i=0;i<5;i++)
	{
		cout<<iarr[i]<<"\t";
	}
	cout<<"\n";
	for(int i=0;i<5;i++)
	{
		cout<<carr[i]<<"\t";
	}
	cout<<"\nEnter number to search in integer array: ";
	cin>>x;
	search(iarr,x);
	cout<<"\n\nEnter character to search in character array: ";
	cin>>y;
	search(carr,y);
	return 0;
	
}

