#include <iostream>
#include <Windows.h>
#include <time.h>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(int argc, char** argv) {
	srand(time(NULL));
	int i=1, k=0,i_fark_ort,i_fark_top, i_fark=0,j=0;
	while(k<100000){
		int random1 = rand()%2;
		int random2 = rand()%2;
		int random3 = rand()%2;
		int random4 = rand()%2;
		int random5 = rand()%2;
		int random6 = rand()%2;
		int random7 = rand()%2;
		int random8 = rand()%2;
		
		if(random1==0 && random2==1 && random3==1 && random4==1 && random5==1 && random6==1 && random7==0 && random8==1){
			
			k++;
			i_fark=i-j;
			i_fark_top+=i_fark;
			j=i;
		}
		i++;
	}
	cout<<i_fark_top/k<<endl;
	system("PAUSE");
	return 0;
}
