#pragma once
#include "ogrenci.h"
class bolenkalan :
	public ogrenci
{
public:
	bolenkalan(void);
	~bolenkalan(void);
	void dizileri_hazirla(void);		//dizileri 0 ile, karakter dizilerini ' ' ile doldurur.
	void sirala(void);					//ogrenci sýnýfýndan verileri okur ve bolenkalan yontemine göre kaydeder.
	void dosyayayaz(void);				//bolenkalan.txt dosyasýna verileri yazar.

	int numara[1000],cakisanZincirNo[300],kaydedilenZincirNo[300],cakisanNumara[300];
	char ad[1000][10],soyad[1000][10],adres[1000][100],tel_no[1000][15];
};

