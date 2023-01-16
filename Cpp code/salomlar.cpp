#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(){		
	char a[30];
	int x;
	gets (a);
	int n = strlen (a);	
	for(int i=0; i<n; i++)
	{
		if(a[i] == tolower(a[i]))
		{
			x += 1;
		}
	}
	n = n-x;
	cout << n ;
}
