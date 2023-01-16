#include <iostream>
// Fayllar bilan ishlash
#include <fstream>
using namespace std;
int main(){
	ofstream fayl("test_out.txt");
	if(fayl.is_open()){
		fayl << " Salom ";
		fayl.close();
	}
	else
		cout << "Fayl ochishda xatolik bor";
	
	string test;
	ifstream fayll("test_out.txt");
	if(fayll.is_open())
	{
		while(getline(fayll,test))
		{
			cout << test ;
		}
		fayll.close();
	}
	else {
		cout << "Fayldi o'qishda xatolik yuz berdi !!!" ;
	}
	
}
