#include<iostream>
using namespace std;

class contoh { //pembuatan class dengan nama classnya contoh
private: // menunujukan bahwa int nilai yang dibawahnya bersifat private 
int nilai;
public: // menunjukan bahwa dibawahnya bersifat public atau bisa diakses dimanapun

contoh (int n){ //constructor yang berisi parameter int n
  nilai = n; //pernyataan bahwa nilai = n
}
int getNum() { //fungsi yang bernama get num yang isinya hanya mengembalikan/return nilai
  return nilai;
}
};

int main() {
  contoh obj(10); //membuat objek dari sebuah kelass yang bernilai 10
  cout << "Nilai yang diinput : "<<obj.getNum() << endl;
  return 0; // mengembalikan nilai 0
}

// program ini merupakan implementasi dari constructor