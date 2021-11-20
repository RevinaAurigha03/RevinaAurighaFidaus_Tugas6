//* REVINA AURIGHA FIRDAUS (21091397003)


#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	menu:
	int n, i, nilai, max;
	int *ptr_max;
	ptr_max=&max;
	
	cout<<"______________________________________________-\n"<<endl;
	cout<<"\tNILAI MAKSIMUM (POINTER)\n"<<endl;
	cout<<"______________________________________________-\n"<<endl;
	cout << " Banyak nilai yang ingin diinput : "; cin>>n;
	
	for(i=1; i<=n; i++){
		cout<<" Masukkan nilai ke-"<<i<<" : "; cin>>nilai;
		if(nilai>max){
			max=nilai;
		}
	}
	
	cout<<endl;
	cout<<" Nilai Maksimum = "<<max<<" dengan alamat = "<<&max<<endl;
	goto menu;

	getch();
}


