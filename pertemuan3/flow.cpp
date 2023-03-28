#include <iostream>
#include <algorithm>
using namespace std;

const int maxArray = 50;
int number[maxArray];

int binarySearch (int m, int n, int o){
    if (o >= 1) {
        int tengah = 1 + (o - 1)/2;
        if (number[tengah] == m)
            return tengah;
        if (number[tengah] > m)
            return binarySearch (m,n,tengah - 1);
        return binarySearch (m,tengah + 1, o);
    }
    return -1;
}

int main(){
    int n;

    cout <<"Masukkan banyak data yang akan dimasukkan pada array : ";
    cin >> n;


    for (int i=0 ; i<n ; i++){
        cout <<"data ke- "<< i+1 <<" : ";
        cin >> number[i];
    }
    sort (number, number + n);

    int z;
    cout <<"Masukkan data yang ingin dicari :";
    cin >> z;

    int result = binarySearch (z, 0 ,n -1);
    if (result == -1 )
    cout <<"Data tidak ditemukan." <<endl;
    else
    cout <<"Data ditemukan pada index ke "<<result<<endl;

    return 0;
}