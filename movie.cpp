#include <bits/stdc++.h>
#include <vector>
#include <iostream>

using namespace std;

class Movie{
	private:
		string ten_phim;
		string ten_daodien;
		int nam_xuat_ban;
		public:
			
			Movie(){
				this->ten_phim = "";
				this->ten_daodien = "";
				this->nam_xuat_ban = 0;
			}
			
			string getten(){
				return ten_phim;
			}
			
			string gettendaodien(){
				return ten_daodien;
			}
			
			int getnam(){
				return nam_xuat_ban;
			}
		
		void Xuat_phim(Movie dsMovie[], int n){
			int dem = 1;
			for(int i = 0; i < n; i++){
				cout << "\nDANH SACH MOVIE " << dem++ << endl;
				dsMovie[i].Xuat();
			}
		}
		
		void So_sanh(Movie dsMovie[], int n){
			string ho_ten;
			int index = 1;
			
			for(int i = 0; i < n; i++){	
				string tenphim_1;
				string tenphim_2;
				cout << "Nhap ten phim 1 : ";
				cin >> tenphim_1;
				cout << "Nhap ten phim 2 : ";
				cin >> tenphim_2;
				bool flag_1 = false, flag_2 = false;
				string ten_daodien1;
				string ten_daodien2;
				for(int i= 0;  i < n; i++){
					if(tenphim_1 == dsMovie[i].ten_phim){
						ten_daodien1 = dsMovie[i].ten_daodien;
						flag_1 = true;
						}
					if(tenphim_2 == dsMovie[i].ten_phim){
						ten_daodien2 = dsMovie[i].ten_daodien;
						flag_2 = true;
					}	
				}
					if(flag_1 && flag_2){
						if(ten_daodien1 == ten_daodien2){
						cout << "Hai bo phim co cung dao dien" << endl;
						cout << "Ten dao dien movie 1 : " << ten_daodien1 << endl;
						cout << "Ten dao dien movie 2 : " << ten_daodien2 << endl;
						}
						
					else{
						cout << "Hai bo phim khong cung dao dien" << endl;
						cout << "Ten dao dien movie 1 : " << ten_daodien1 << endl;
						cout << "Ten dao dien movie 2 : " << ten_daodien2 << endl;
						}
					}
					else{
						cout << "Khong tim thay ten phim";
					}
										
			}	
		}
		
		void Nhap(){
			while(getchar() != '\n');
			cout << "Nhap ten phim : ";
			getline(cin, ten_phim);
			cout << "Nhap ten dao dien : ";
			getline(cin, ten_daodien);
			cout << "Nhap nam xuat ban : ";
			cin >> nam_xuat_ban; 
		}
		
		void Xuat(){
			cout << "\nTen phim la : " << ten_phim << endl;
			cout << "Ten dao dien la : " << ten_daodien << endl;
			cout << "Nam xuat ban : " << nam_xuat_ban << endl;
		}
			
		void Tong_Hop(int n){
			Movie dsMovie[10];	
//			system("cls");
			int choice;
			while(true){
			cout << "\n\t======CHON YEU CAU======\n";
			cout << "\t  1.NHAP TEN BO PHIM \n";
			cout << "\t  2.XUAT BO PHIM \n";
			cout << "\t  3.SO SANH 2 PHIM \n";
			cout << "\t  4.END \n";
			cout << "\t==========END==========\n";
			
			cout << "Nhap lua chon cua ban : ";
			cin >> choice;
//			system("cls");
			if(choice == 1){
				Movie mo;
				mo.Nhap();
				dsMovie[n] = mo;
				n++;
			}
			else if(choice == 2){
				Xuat_phim(dsMovie, n);
			}
			else if(choice == 3){
			So_sanh(dsMovie, n);
			system("pause");	
		}
		  }
	
			
		}
		
		~Movie(){};
};

int main(){
	Movie mo;
	int n = 0;
	mo.Tong_Hop(n);
	
	system("pause");
	return 0;
}
