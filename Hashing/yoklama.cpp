#include "yoklama.h"

yoklama::yoklama(void)
{
	en_fazla_cakisma();
}

yoklama::~yoklama(void)
{
}

void yoklama::bolenkalan_arama(int numara)
{
	int hash,adim_sayisi=0;
	hash=numara%1000;

	if(bolenkalan::numara[hash]==0)	cout<<"Bu numarada bir ogrenci bulunmamaktadir"<<endl;

	else if(bolenkalan::numara[hash]==numara){ //aranan numaraya ilk adýmda ulaþýldý.

		cout<<bolenkalan::numara[hash]<<" "; //numara ekrana yazdýrýlýyor.

		for(int a=0; a<10; a++){ //isim ekrana yazdýrýlýyor.
			if(bolenkalan::ad[hash][a]==' ') break;		
			cout<<bolenkalan::ad[hash][a];
		}
		
		cout<<" ";
		
		for(int a=0; a<10; a++){ //soyisim ekrana yazdýrýlýyor.
			if(bolenkalan::soyad[hash][a]==' ') break;		
			cout<<bolenkalan::soyad[hash][a];
		}

		cout<<" ";
		
		for(int a=0; a<100; a++){ //adres ekrana yazdýrýlýyor.
			if(bolenkalan::adres[hash][a]==' ') break;		
			cout<<bolenkalan::adres[hash][a];
		}
		
		cout<<" ";
		
		for(int a=0; a<15; a++){ ////telefon ekrana yazdýrýlýyor.
			if(bolenkalan::tel_no[hash][a]==' ') break;		
			cout<<bolenkalan::tel_no[hash][a];
		}

		cout<<endl;
		
		cout<<"Bilgilere 1 adimda ulasildi."<<endl;
	}
	
	else if(bolenkalan::numara[hash]!=numara){ //bilgilere ilk adýmda ulaþýlamadý, sonraki satýrlar kontrol ediliyor
		for(hash;hash<1000;hash++){
			adim_sayisi++;
			if(bolenkalan::numara[hash]==numara){
				
				cout<<bolenkalan::numara[hash]<<" ";

			for(int a=0; a<10; a++){
				if(bolenkalan::ad[hash][a]==' ') break;		
				cout<<bolenkalan::ad[hash][a];
			}
		
			cout<<" ";
		
			for(int a=0; a<10; a++){
				if(bolenkalan::soyad[hash][a]==' ') break;		
				cout<<bolenkalan::soyad[hash][a];
			}

			cout<<" ";
		
			for(int a=0; a<100; a++){
				if(bolenkalan::adres[hash][a]==' ') break;		
				cout<<bolenkalan::adres[hash][a];
			}
		
			cout<<" ";
		
			for(int a=0; a<15; a++){
				if(bolenkalan::tel_no[hash][a]==' ') break;		
				cout<<bolenkalan::tel_no[hash][a];
			}

			cout<<endl;
				
				
				cout<<"Bilgilere "<<adim_sayisi<<" adimda ulasildi"<<endl;
				break;
			}
			else if(bolenkalan::numara[hash]==0){
				cout<<"Bu numarayla kayitli bir ogrenci bulunamadi."<<endl;
				break;
			}
			else if(hash==999){
				cout<<"Bu numarayla kayitli bir ogrenci bulunamadi."<<endl;
				break;
			}
		}
	}
}

void yoklama::kareortasi_arama(int numara)
{
	int hash,adim_sayisi=0;

	hash=(numara/10000000*numara)%1000;

	if(kareortasi::numara[hash]==0)	cout<<"Bu numarada bir ogrenci bulunmamaktadir"<<endl;

	else if(kareortasi::numara[hash]==numara){ //aranan numaraya ilk adýmda ulaþýldý.
		
		cout<<kareortasi::numara[hash]<<" ";

		for(int a=0; a<10; a++){
			if(kareortasi::ad[hash][a]==' ') break;		
			cout<<kareortasi::ad[hash][a];
		}
		
		cout<<" ";
		
		for(int a=0; a<10; a++){
			if(kareortasi::soyad[hash][a]==' ') break;		
			cout<<kareortasi::soyad[hash][a];
		}

		cout<<" ";
		
		for(int a=0; a<100; a++){
			if(kareortasi::adres[hash][a]==' ') break;		
			cout<<kareortasi::adres[hash][a];
		}
		
		cout<<" ";
		
		for(int a=0; a<15; a++){
			if(kareortasi::tel_no[hash][a]==' ') break;		
			cout<<kareortasi::tel_no[hash][a];
		}

		cout<<endl;
		
		cout<<"Bilgilere 1 adimda ulasildi."<<endl;
	}
	
	else if(kareortasi::numara[hash]!=numara){
		for(hash;hash<1000;hash++){
			adim_sayisi++;
			if(kareortasi::numara[hash]==numara){
				
				cout<<kareortasi::numara[hash]<<" ";

			for(int a=0; a<10; a++){
				if(kareortasi::ad[hash][a]==' ') break;		
				cout<<kareortasi::ad[hash][a];
			}
		
			cout<<" ";
		
			for(int a=0; a<10; a++){
				if(kareortasi::soyad[hash][a]==' ') break;		
				cout<<kareortasi::soyad[hash][a];
			}

			cout<<" ";
		
			for(int a=0; a<100; a++){
				if(kareortasi::adres[hash][a]==' ') break;		
				cout<<kareortasi::adres[hash][a];
			}
		
			cout<<" ";
		
			for(int a=0; a<15; a++){
				if(kareortasi::tel_no[hash][a]==' ') break;		
				cout<<kareortasi::tel_no[hash][a];
			}

			cout<<endl;
				
				
				cout<<"Bilgilere "<<adim_sayisi<<" adimda ulasildi"<<endl;
				break;
			}
			else if(kareortasi::numara[hash]==0){
				cout<<"Bu numarayla kayitli bir ogrenci bulunamadi."<<endl;
				break;
			}
			else if(hash==999){
				cout<<"Bu numarayla kayitli bir ogrenci bulunamadi."<<endl;
				break;
			}
		}
	}
}

void yoklama::katlama_arama(int numara)
{
	int hash,adim_sayisi=0;
	int a,b,c,d,e,f,g,h,i,k,l,m;
	a=numara/100000000;
	b=(numara/10000000)%10;
	c=(numara/1000000)%10;
	d=(numara/100000)%10;
	e=(numara/10000)%10;
	f=(numara/1000)%10;
	g=(numara/100)%10;
	h=(numara/10)%10;
	i=numara%10;
	k=(a+d+g)%10;
	l=(b+e+h)%10;
	m=(c+f+i)%10;

	hash=(k*100)+(l*10)+m;

	if(katlama::numara[hash]==0)	cout<<"Bu numarada bir ogrenci bulunmamaktadir"<<endl;
	
	else if(katlama::numara[hash]==numara){ //aranan numaraya ilk adýmda ulaþýldý.
		
		cout<<katlama::numara[hash]<<" ";

		for(int a=0; a<10; a++){
			if(katlama::ad[hash][a]==' ') break;		
			cout<<katlama::ad[hash][a];
		}
		
		cout<<" ";
		
		for(int a=0; a<10; a++){
			if(katlama::soyad[hash][a]==' ') break;		
			cout<<katlama::soyad[hash][a];
		}

		cout<<" ";
		
		for(int a=0; a<100; a++){
			if(katlama::adres[hash][a]==' ') break;		
			cout<<katlama::adres[hash][a];
		}
		
		cout<<" ";
		
		for(int a=0; a<15; a++){
			if(katlama::tel_no[hash][a]==' ') break;		
			cout<<katlama::tel_no[hash][a];
		}

		cout<<endl;
		
		
		cout<<"Bilgilere 1 adimda ulasildi."<<endl;
	}
	
	else if(katlama::numara[hash]!=numara){
		for(hash;hash<1000;hash++){
			adim_sayisi++;
			if(katlama::numara[hash]==numara){
				
				cout<<katlama::numara[hash]<<" ";

			for(int a=0; a<10; a++){
				if(katlama::ad[hash][a]==' ') break;		
				cout<<katlama::ad[hash][a];
			}
		
			cout<<" ";
		
			for(int a=0; a<10; a++){
				if(katlama::soyad[hash][a]==' ') break;		
				cout<<katlama::soyad[hash][a];
			}

			cout<<" ";
		
			for(int a=0; a<100; a++){
				if(katlama::adres[hash][a]==' ') break;		
				cout<<katlama::adres[hash][a];
			}
		
			cout<<" ";
		
			for(int a=0; a<15; a++){
				if(katlama::tel_no[hash][a]==' ') break;		
				cout<<katlama::tel_no[hash][a];
			}

			cout<<endl;
				
				
				cout<<"Bilgilere "<<adim_sayisi<<" adimda ulasildi"<<endl;
				break;
			}
			else if(katlama::numara[hash]==0){
				cout<<"Bu numarayla kayitli bir ogrenci bulunamadi."<<endl;
				break;
			}
			else if(hash==999){
				cout<<"Bu numarayla kayitli bir ogrenci bulunamadi."<<endl;
				break;
			}
		}
	}
}

void yoklama::en_fazla_cakisma(void)
{
	int bk,ko,kt;

	for(bk=0; bk<300; bk++){
		if(bolenkalan::cakisanNumara[bk]==0) break;
	}

	for(ko=0; ko<300; ko++){
		if(kareortasi::cakisanNumara[ko]==0) break;
	}

	for(kt=0; kt<300; kt++){
		if(katlama::cakisanNumara[kt]==0) break;
	}

	if(bk>=ko && bk>=kt && bk!=0)	cout<<"En fazla cakisma bolenkalan fonksiyonundadir. Cakisma sayisi="<<bk<<endl;
	if(ko>=bk && ko>=kt && ko!=0)	cout<<"En fazla cakisma kareortasi fonksiyonundadir. Cakisma sayisi="<<ko<<endl;
	if(kt>=bk && kt>=ko && kt!=0)	cout<<"En fazla cakisma katlama fonksiyonundadir. Cakisma sayisi="<<kt<<endl;
	else if(bk==0 && ko==0 && kt==0)	cout<<"Cakisma yok."<<endl;
}

int yoklama::bolenkalan_ara_varyok(int numara)
{
	int hash;
	hash=numara%1000;

	if(bolenkalan::numara[hash]==0)	return 0;
	else if(bolenkalan::numara[hash]==numara)	return 1;
	
	else if(bolenkalan::numara[hash]!=numara){
		for(hash;hash<1000;hash++){
			if(bolenkalan::numara[hash]==numara)	return 1;
			else if(bolenkalan::numara[hash]==0)	return 0;
			else if(hash==999)	return 0;
			
		}
	}
}