#include <iostream>

#include <string>

using namespace std;

class avtomobillar{
public:
	void mersedes_benz(){
		cout << "mersedes benz w222 -- 46.000 $" << endl;
		cout << "mersedes benz w223 -- 286.000 $" << endl;
		cout << "mersedes benz s-class -- 485.000 $" << endl;
		cout << endl << endl;
	};
	
	void chevrolet(){
		cout << " chevrolet  spark -- 75.706.000 sum" << endl;
		cout << " chevrolet  malibu -- 2.369.000.000 sum" << endl;
		cout << " chevrolet  damas -- 78.283.000 sum" << endl;
		cout << endl << endl;
	};
	
	void ford(){
		cout << "ford gt 500  mustang -- 60.000 $" << endl;
		cout << "shelby gt 500 -- 54.200 $" << endl;
		cout << "ford mustang shelby gt 500 -- 169.010 $" << endl;
	};
};

int main(){
	avtomobillar a, b, c;
	string s;
	getline(cin,s);
	cout << endl;
	if(s == "mersedes_benz")
	{
		a.mersedes_benz();
	}
	
	else if(s == "chevrolet")
	{
		b.chevrolet();
	}
	
	else if(s == "ford")
	{
		c.ford();
	}
	else {
		cout << "Bunday tur mavjud emas !!!";
	}
return 0;
}
