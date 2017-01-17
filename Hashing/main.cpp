#include<iostream>
#include<cstdio>
#include<conio.h>
#include"ogrenci.h"
#include"bolenkalan.h"
#include"kareortasi.h"
#include"katlama.h"
#include"yoklama.h"

using namespace std;

void main(){

	char x='0';
	int numara;
	char ad[10],soyad[10],adres[100],tel_no[15];

	yoklama nesne;

	while(x!='C' && x!='c'){						//cýkýs için c ye basýlmalý
		cout<<"Arama  yapmak icin A'ya,"<<endl;
		cout<<"Ekleme yapmak icin E'ye,"<<endl;
		cout<<"Cikis  yapmak icin C'ye basiniz.\n"<<endl;
		cout<<"\nBir islem secin."<<endl;

		x=getch();

		if(x=='A'||x=='a'){							//Arama yapmak için a ya basýlmalý
			cout<<"\nArama yapmak istediginiz ogrencinin numarasini giriniz...:";
			cin>>numara;

			if(numara<1000000000 && numara>99999999){				//numara geçerli mi kontrol ediliyor.
				cout<<"\nBolenkalan fonksiyonu ile:"<<endl;
				nesne.bolenkalan_arama(numara);
				cout<<"\nKareortasi fonksiyonu ile:"<<endl;
				nesne.kareortasi_arama(numara);
				cout<<"\nKatlama fonksiyonu ile:"<<endl;
				nesne.katlama_arama(numara);

			}
			else cout<<"\nGirdiginiz numara gecersizdir. Lutfen ogrenci numarasi olarak 9 haneli bir sayi giriniz."<<endl;
		}


		else if(x=='E'||x=='e'){					//Ekleme yapmak için e ye basýlmalý

			cout<<"\nnumara:";
			cin>>numara;
			
			if(numara<1000000000 && numara>99999999){			//numara geçerli mi kontrol ediliyor.
			
			if(nesne.bolenkalan_ara_varyok(numara)==0){		//numara daha once kaydedilmiþ mi kontrol ediliyor.
			cout<<"ad:";
			cin>>ad;
			cout<<"soyad:";
			cin>>soyad;
			cout<<"adres:";
			cin>>adres;
			cout<<"telefon numarasi:";
			cin>>tel_no;

			FILE *dosya;
			dosya = fopen("ogrenciler.txt", "a");
			fprintf(dosya,"%d*%s*%s*%s*%s*\n",numara,ad,soyad,adres,tel_no);
			fclose(dosya);
			}
			else if(nesne.bolenkalan_ara_varyok(numara)==1) cout<<"\nBu numara zaten kayitli, ayni numarayla birden fazla kayit yapilamaz."<<endl;
			}
			else cout<<"\nGirdiginiz numara gecersizdir. Lutfen ogrenci numarasi olarak 9 haneli bir sayi giriniz."<<endl;
		}
	}

	system("exit");

}