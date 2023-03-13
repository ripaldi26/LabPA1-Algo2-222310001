#include <iostream>
using namespace std;

int main(){
	int k;
	cout<<"masukan banyak array:";
	cin>>k;
	int l[k];
	for(int i=0; i<k; i++){
		cout<<"masukan angka ke "<<i<<" :";
		cin>>l[i];
		cout<<endl;
	}
	for(int i=1; i<k; i++){
		int key = l[i];
		int j = i-1;
		while(j>=0 && l[j] < key){
			l[j+1] = l[j];
			j--;
		}
		l[j+1] = key;
		cout<<"proses sorting"<<endl;
		for(int m=0;m<k;m++){
		cout<<l[m]<<" ";
	    }
	    cout<<endl;
	}
	cout<<"hasil akhir"<<endl;
	for(int m=0;m<k;m++){
		cout<<l[m]<<" ";
	}
}
// insertion sort dimulai dari memilah data yang akan
// urutkan menjadi 2 bagian //