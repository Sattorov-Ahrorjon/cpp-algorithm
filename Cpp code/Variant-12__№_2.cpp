#include <iostream>
using namespace std;
int main()
{
	int kun, oy, yil;
	int yan=31, fev=28, mar=31, apr=30, may=31, iyun=30, iyul=31, avg=31, sen=30, okt=31, noy=30, dek=31;
	
//	kun.oy.yil ni probel bilan ajratib kiriting
	cout << " kun.oy.yil = "; cin >> kun >> oy >> yil;
	
	if(yil % 4 == 0) fev = 29;
	kun = kun - 7;
	
	if(kun <= 0) oy = oy - 1;
	
	if(oy == 0){
		oy = 12;  yil = yil - 1;
	}
	
	if(kun <= 0){
		switch(oy)
		{
			case 1: kun = kun + yan; break;
			case 2: kun = kun + fev; break;
			case 3: kun = kun + mar; break;
			case 4: kun = kun + apr; break;
			case 5: kun = kun + may; break;
			case 6: kun = kun + iyun; break;
			case 7: kun = kun + iyul; break;
			case 8: kun = kun + avg; break;
			case 9: kun = kun + sen; break;
			case 10: kun = kun + okt; break;
			case 11: kun = kun + noy; break;
			case 12: kun = kun + dek; break;
		}
	}
	cout << " kun.oy.yil = " << kun << "." << oy << "." << yil;
return 0;
}
