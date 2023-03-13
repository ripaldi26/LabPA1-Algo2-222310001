#include <iostream>
using namespace std;
// void adalah fungsi //
void bubble(int arr[], int o){
  int i, j, temp;
  for(i=0; i<o; i++){
    for(j=0; j<o-i-1; j++){
      if(arr[j] < arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}
int main(){
  int array[50], o, i, j;
  cout << "Masukan banyak elemen: ";
  cin >> o;
  cout << "Masukan nilai : ";
  for(i=0; i<o; i++){
    cin >> array[i];
  }
  bubble(array, o);
  cout << "Hasil pengurutan dengan algoritma bubble : \n";
  for(i=0; i<o; i++){
    cout << array[i] << " ";
  }
  cout << "\n";
}