#include <iostream>
using namespace std;
int main(){
	char q[80];
	int i;
	cout << "Satr kiriting :\n";
	cin >> q;
	i=0;
	while(q[i] != '\0'){
		if(q[i] == 'r'){
			q[i]='y';
		}
	i++;
	}
	cout << "Natija : " << q;

return 0;
}
