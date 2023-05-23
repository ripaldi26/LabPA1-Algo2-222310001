#include <iostream>
#include <string>

using namespace std;
class Mahasiswa{
public:
virtual void aktif(){
  cout << "Mahasiswa aktif" << endl;
}
virtual void alumni(){
  cout << "Alumni"<<endl;
}
};

class Nama : public Mahasiswa{
public:
void aktif(){
  cout << "Nama : Raihan" <<endl;
}
void alumni(){
  cout <<"Nama : Udin" <<endl;
}
};

class Umur : public Mahasiswa{
public :
void aktif() {
  cout << "Umur : 19 tahun" <<endl;
}
void alumni() {
  cout << "Umur : 27 tahun" <<endl;
}
};

class Jurusan : public Mahasiswa{
public :
void aktif(){
  cout << "Jurusan : Teknologi Informasi" <<endl;
}
void alumni(){
  cout << "Jurusan : Pariwisata" <<endl;
}
};

class Fakultas : public Mahasiswa{
void aktif(){
  cout << "Fakultas : Informatika" <<endl;
}
void alumni() {
  cout << "Fakultas : Pariwisata" <<endl;
}
};

int main(){
  
  Mahasiswa *h1A = new Nama();
  Mahasiswa *h2A = new Umur();
  Mahasiswa *h3A = new Jurusan();
  Mahasiswa *h4A = new Fakultas();
  

  cout << "\n\n\tMAHASISWA AKTIF\n" <<endl;
  
  h1A->aktif();
  h2A->aktif();
  h3A->aktif();
  h4A->aktif();

  cout << "\n\n\t\tALUMNI\n" <<endl;
  h1A->alumni();
  h2A->alumni();
  h3A->alumni();
  h4A->alumni();
  
  return 0;
}
