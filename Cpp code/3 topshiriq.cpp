#include <iostream>

using namespace std;

class uchburchak{
  
public:
  uchburchak(){
    cout << "Kubning barcha qirralari teng" << endl;
    cout << "Kubning tomonlari kvadratlardan tashkil topadi" << endl;
    cout << "Kubning qirralari 90* da kesishadi" << endl;
    cout << endl;
  };
  uchburchak(){
  	cout << "Salom" << endl;
  	
  }
};

class kub_ifodalari{
public:
  kub_ifodalari(){
    cout << "V = a * a * a" << endl;
    cout << "S.um = 6 * ( a * a )" << endl;
  }
};

int main(){
  kub_haqida();
  kub_ifodalari();
}
