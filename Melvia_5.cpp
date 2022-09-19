#include <iostream>
using namespace std;

int main(){
  int a,b,c,d;
  int aksi;
  
  cout << "kehadiran : ";
  cin >> a;
  cout << "tugas : ";
  cin >> b;
  cout << "UTS : ";
  cin >> c;
  cout << "UAS : ";
  cin >> d; 
 
  aksi = (a+b+c+d)/4;
  cout << "Nilai akhir" <<aksi <<endl;
  }