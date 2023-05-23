#include <iostream>
#include <string>

using namespace std;

class pinjem{
 private :
string nama;
string nim;
string judulBuku;
public:
void setNama(string n){
  nama = n;
}
void setnim(string s){
  nim = s;
}
void setjudulBuku(string yp){
  judulBuku = yp;
}
string getNama(){
  return nama;
}
string getnim(){
  return nim;
}
string getjudulBuku(){
  return judulBuku;
}
};

int main(){
  pinjem buku;
  buku.setNama("Muhammad Ripaldi");
  buku.setnim("222310001");
  buku.setjudulBuku("cara menjadi programmer yang handal");
  cout << "nama pinjem : " <<buku.getNama()<<endl;
  cout << "nim         : " <<buku.getnim()<<endl;
  cout << "judul buku  : " <<buku.getjudulBuku()<<endl;
  return 0;
}