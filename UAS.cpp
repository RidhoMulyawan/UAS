#include <iostream>
using namespace std;

int main(){
	float x[100],y[100],xy[100],x2[100],y2[100],korelasi,r;
	int i,banyak,sigmax,sigmay,sigmaxy,sigmax2,sigmay2;
	cout<<"Masukkan banyak data: ";
	cin>> banyak;
	
	for (int i = 0; i<banyak; i++){
	sigmax=0;
	sigmay=0;
	sigmaxy=0;
	sigmax2=0;
	sigmay2=0;
	 cout<<"Masukkan nilai x: ";
	 cin>>x[i];
	 cout<<"Masukkan nilai y: ";
	 cin>>y[i];
	 xy[i]=x[i]*y[i];
	 cout<<"Hasil kali x dan y"<<" "<< xy[i]<<endl;
	 x2[i]=x[i]*x[i];
	 cout<<"Hasil x^2: "<< " "<< x2[i]<<endl;
	 y2[i]=y[i]*y[i];
	 cout<<"Hasil y^2: "<< " "<< y2[i]<<endl;
	 }
	 for (i=0 ; i<banyak ; i++)
	 {
	 sigmax=sigmax+x[i];
	 sigmay=sigmay+y[i];
	 sigmaxy=sigmaxy+xy[i];
	 sigmax2=sigmax2+x2[i];
	 sigmay2=sigmay2=y2[i];
	 }
	 cout<<"total sigma X adalah"<<sigmax<<endl;
	 cout<<"total sigma Y adalah"<<endl;
	 cout<<"total sigmaxy"<<sigmaxy<<endl;
	cout<<"total sigmax^2"<<sigmax2<<endl;
	cout<<"total sigma y^2"<<sigmay2<<endl;
	
	if (r<0.09)
 {
 cout << "Hubungan korelasi diabaikan"; cin >> korelasi;
 }
 if (r<0.29)
 {
 cout << "Hubungan korelasi rendah"; cin >> korelasi;
 }
 if (r<0.49)
 {
 cout << "Hubungan korelasi moderat"; cin >> korelasi;
 }
 if (r<0.70)
 {
 cout << "Hubungan korelasi sedang"; cin >> korelasi;
 }
 if (r>0.70)
 {
    cout << "Hubungan korelasi sangat kuat"; cin >> korelasi;
 }	 
}
	 
 



