#include "katlama.h"


katlama::katlama(void)
{
	dizileri_hazirla();
	sirala();
	dosyayayaz();
}


katlama::~katlama(void)
{
}

void katlama::dizileri_hazirla(void)
{
	for(int x=0; x<1000; x++){
	numara[x]=0;

	for(int a=0; a<10; a++)	
	ad[x][a]=' ';

	for(int a=0; a<10; a++)	
	soyad[x][a]=' ';
	
	

	for(int a=0; a<100; a++)	
	adres[x][a]=' ';
	
	

	for(int a=0; a<15; a++)	
	tel_no[x][a]=' ';

	}

	for(int x=0; x<300; x++){
	cakisanZincirNo[x]=0;
	kaydedilenZincirNo[x]=0;
	cakisanNumara[x]=0;
	}

}

void katlama::sirala(void)
{
	int hash,a=0;

	for(int x=0; x<1000; x++){

	if(ogrenci::numara[x]==0) break;

	int a,b,c,d,e,f,g,h,i,k,l,m;
	a=ogrenci::numara[x]/100000000;
	b=(ogrenci::numara[x]/10000000)%10;
	c=(ogrenci::numara[x]/1000000)%10;
	d=(ogrenci::numara[x]/100000)%10;
	e=(ogrenci::numara[x]/10000)%10;
	f=(ogrenci::numara[x]/1000)%10;
	g=(ogrenci::numara[x]/100)%10;
	h=(ogrenci::numara[x]/10)%10;
	i=ogrenci::numara[x]%10;
	k=(a+d+g)%10;
	l=(b+e+h)%10;
	m=(c+f+i)%10;

	hash=(k*100)+(l*10)+m;

	if(numara[hash]!=0){
		cakisanZincirNo[a]=hash;
		while(numara[hash]!=0){
		hash++;
		}
		kaydedilenZincirNo[a]=hash;
		cakisanNumara[a]=ogrenci::numara[x];
		a++;
		
	
	}
		numara[hash]=ogrenci::numara[x];

		for(int a=0; a<10; a++)
		ad[hash][a]=ogrenci::ad[x][a];

		for(int a=0; a<10; a++)
		soyad[hash][a]=ogrenci::soyad[x][a];

		for(int a=0; a<100; a++)
		adres[hash][a]=ogrenci::adres[x][a];


		for(int a=0; a<15; a++)
		tel_no[hash][a]=ogrenci::tel_no[x][a];


	}



}

void katlama::dosyayayaz(void)
{

	FILE *dosya;
	dosya = fopen("katlama.txt", "w");

	for(int x=0;x<1000;x++){
	if(numara[x]!=0){
	
	fprintf(dosya,"%d",numara[x]);
	fprintf(dosya,"*");
	
	for(int a=0; a<10; a++){
		if(ad[x][a]==' ') break;
		fprintf(dosya,"%c",ad[x][a]);
	}
	fprintf(dosya,"*");
	
	for(int a=0; a<10; a++){
		if(soyad[x][a]==' ') break;
		fprintf(dosya,"%c",soyad[x][a]);
	}
	fprintf(dosya,"*");
	
	for(int a=0; a<100; a++){
		if(adres[x][a]==' ') break;
		fprintf(dosya,"%c",adres[x][a]);
	}
	fprintf(dosya,"*");

	for(int a=0; a<15; a++){
		if(tel_no[x][a]==' ') break;
		fprintf(dosya,"%c",tel_no[x][a]);
	}
	fprintf(dosya,"*\n");
	}
	else fprintf(dosya,"\n");
	}
	fclose(dosya);
}