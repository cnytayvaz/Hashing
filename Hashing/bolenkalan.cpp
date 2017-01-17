#include "bolenkalan.h"

bolenkalan::bolenkalan(void)
{
	dizileri_hazirla();
	sirala();
	dosyayayaz();
}

bolenkalan::~bolenkalan(void)
{
}

void bolenkalan::dizileri_hazirla(void)
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

void bolenkalan::sirala(void)
{
	int hash,a=0;

	for(int x=0; x<1000; x++){

	if(ogrenci::numara[x]==0) break;
	
	hash=ogrenci::numara[x]%1000;
	
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

void bolenkalan::dosyayayaz(void)
{

	FILE *dosya;
	dosya = fopen("bolenkalan.txt", "w");

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