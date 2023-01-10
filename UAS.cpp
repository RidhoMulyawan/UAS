#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct Data
{
  int x;
  int y;
};
int main(){
  system("cls");
  int n, korelasi,sigmax, sigmay, sigmaxy;
  float sigmax2, sigmay2,Atas, Bawah1, Bawah2;
  double koefisien;
  cout << "Ridho Mulyawan Efendi: ";
  cout << "152021157 ";
  cout << "Banyak data: ";
  cin >> n;
  double dataxy[n];
  Data datain[n];
  vector<Data> berdata;
  for (int i = 0; i < n; i++){
    Data data;
    cout << "masukkan data X-" << i + 1 << " : "; cin >> datain[i].x;
    while (datain[i].x <= 0) {
            cout << "Nilai x tidak boleh kurang dari 0. Masukkan Nilai x: ";cin >> datain[i].x;
    }
    cout << "masukkan data Y-" << i + 1 << " : ";cin >> datain[i].y;
    while (datain[i].y <= 0) {
            cout << "Nilai y tidak boleh kurang dari 0. Masukkan Nilai y: ";cin >> datain[i].y;
    }
    berdata.push_back(data);
    sigmax += datain[i].x;
    sigmay += datain[i].y;
    dataxy[i] = datain[i].x * datain[i].y;
    sigmaxy += dataxy[i];
  }
  sigmax2 = pow(sigmax, 2);
  sigmay2 = pow(sigmay, 2);
  Atas = (n * sigmaxy) - (sigmax * sigmay);
  Bawah1 = sqrt((n * sigmax2) - (pow(sigmax, 2)));
  Bawah1 = sqrt((n * sigmay2) - (pow(sigmay, 2)));
  double r = Atas / (Bawah1 * Bawah2);
  koefisien = pow(r, 2) * (1 / 100);
  cout<<"Hasil Nilai: "<<endl;
  cout << "sigma x = " << sigmax << endl;
  cout << "sigma y = " << sigmay << endl;
  cout << "sigmaXY = " << sigmaxy << endl;
  cout << "sigmaX2 = " << sigmax2 << endl;
  cout << "sigmaY2 = " << sigmay2 << endl;
  cout << "a. Nilai Korelasi r = " << Atas << " / " << Bawah1 * Bawah2 << " = " << r << endl;
  cout << "b. Nilai koefisien determinasi = " << koefisien << endl;

if (r<=0.09){
 cout << "c. Hubungan korelasinya diabaikan"; 
 }
 else if (r<=0.29){
 cout << "c. Hubungan korelasinya rendah"; 
 }
 else if (r<=0.49){
 cout << "c. Hubungan korelasinya moderat"; 
 }
 else if (r<=0.70){
 cout << "c. Hubungan korelasinya sedang"; 
 }
 else if (r>0.70){
    cout << "c. Hubungan korelasinya sangat kuat"; 
 }
    cout << endl;
  if (r == 0){
    cout << "f. Tidak Ada Hubungan Antara variabel X dan Y adalah Positif" << endl;
  }
  else if (r > 0){
    cout << "d. Hubungan Antara variabel X dan Y adalah Positif" << endl;
  }
  else if (r < 0){
    cout << "e. Hubungan Antara variabel X dan Y adalah Negatif" << endl;
  }
  return 0;
}
