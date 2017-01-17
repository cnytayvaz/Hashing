#include "ogrenci.h"


ogrenci::ogrenci(void)
{
	dizileri_hazirla();
	dosyadanoku();
}


ogrenci::~ogrenci(void)
{
}

void ogrenci::dizileri_hazirla(void)
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

}

void ogrenci::dosyadanoku(void)
{
	FILE *dosya;
	dosya=fopen("ogrenciler.txt","a+");
		if( dosya == NULL ){
		cout<<"Dosya acilmiyor...!!!"<<endl;
		exit(1);
	}

	int x=0,y;
	char c;

	while(!feof(dosya)){
	fscanf(dosya,"%d",&numara[x]);

	c=getc(dosya);
	c='0';

	for(y=0; y<300; y++){
	c=getc(dosya);
	if(c=='*') break;
	else ad[x][y]=c;
	}

	for(y=0; y<300; y++){
	c=getc(dosya);
	if(c=='*') break;
	else soyad[x][y]=c;
	}

	for(y=0; y<300; y++){
	c=getc(dosya);
	if(c=='*') break;
	else adres[x][y]=c;
	}

	for(y=0; y<300; y++){
	c=getc(dosya);
	if(c=='*') break;
	else tel_no[x][y]=c;
	}

	x++;
	}
	fclose(dosya);
}