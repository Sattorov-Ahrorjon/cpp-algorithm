#include <iostream>
using namespace std;
int main()
{
	int n, v, maxa=0, mina, j;
	cout << " n = "; cin >> n;
	int a[n], maxi, mini;
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
		if(a[i] > maxa){
			maxa = a[i]; maxi = i;
		}
	} 
	mina = maxa;
	for(int i=0; n>i; i++)
	{
		if(mina > a[i]){
			mina = a[i];
			mini = i;
		}
	}
	v = maxi;
	maxi = max(maxi, mini);
	mini = min(v, mini) + 1;
	while(maxi != mini)
	{
		a[mini] = 0;
		mini++;
	}
	for(int i=0; n>i; i++)
	{
		cout << " " << a[i];
	}
return 0;
}
