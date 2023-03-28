#include <iostream>
#include <algorithm>
using namespace std;

const int z = 50;
string buku[z];

int binarySearch (string a, int b, int c){
    if (c >= 1) {
        int tengah = 1 + (c - 1)/2;
        if (buku[tengah] == a)
            return tengah;
        if (buku[tengah] > a)
            return binarySearch (a,b,tengah - 1);
        return binarySearch (a,tengah + 1, c);
    }
    return -1;
}

int main(){
    int p;

    cout <<"Masukkan jumlah buku : ";
    cin >> p;


    for (int i=0 ; i<p ; i++){
        cout <<"Masukkan nama buku "<< i+1 <<" : ";
        cin >> buku[i];
    }
    sort (buku, buku + p);

    string z;
    cout <<"Masukkan nama buku yang ingin dicari :";
    cin >> z;

    int result = binarySearch (z, 0 ,p -1);
    if (result == -1 )
    cout <<"Nama buku tidak dapat ditemukan." <<endl;
    else
    cout <<"Buku ditemukan pada nomor "<<result<<endl;

    return 0;
}