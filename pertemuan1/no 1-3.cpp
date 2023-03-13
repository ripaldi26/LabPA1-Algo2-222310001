#include <iostream>
using namespace std;

void selection(int arr[], int n){
  int i, j, minAngka, temp;
  for(i=0; i<n-1; i++){
    minAngka=i;
    for( j = i+1; j<n; j++){
      if(arr[j] > arr[minAngka]){
        minAngka = j;
      }
    }
    temp = arr[minAngka];
    arr[minAngka] = arr[i];
    arr[i] = temp;
    cout << "Iterasi ke- " << i+1 << " :";
    for(int k=0; k<n; k++){
      cout << arr[k] << " ";
    }
    cout << endl;
  }
}
int main(){
  int n,i;
  cout << "masukan jumlah elemen: ";
  cin >> n;
  int arr[n];
  cout << "Masukan nilai elemen: ";
  for(i=0; i<n; i++){
    cin >> arr[i];
  }
  cout << "Data sebelum sorting: ";
  for(i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  selection(arr,n);
  cout << "Data setelah sorting : ";
  for(i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  return 0 ;
}
// Selection sort merupakan sebuah teknik pengurutan dengan cara mencari nilai tertinggi atau terendah di dalam array kemudian menempatkan nilai tersebut di tempat semestinya. //