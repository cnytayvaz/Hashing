#pragma once
#include "ogrenci.h"
class kareortasi :
	public ogrenci
{
public:
	kareortasi(void);
	~kareortasi(void);
	void dizileri_hazirla(void);		//dizileri 0 ile, karakter dizilerini ' ' ile doldurur.
	void sirala(void);					//ogrenci s�n�f�ndan verileri okur ve kareortasi yontemine g�re kaydeder.
	void dosyayayaz(void);				//kareortasi.txt dosyas�na verileri kaydeder.

	int numara[1000],cakisanZincirNo[300],kaydedilenZincirNo[300],cakisanNumara[300];
	char ad[1000][10],soyad[1000][10],adres[1000][100],tel_no[1000][15];
};

