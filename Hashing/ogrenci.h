#include<iostream>
#include<cstdio>
using namespace std;

#pragma once
class ogrenci
{
public:
	ogrenci(void);
	~ogrenci(void);
	void dizileri_hazirla(void);		//dizileri 0 ile, karakter dizilerini ' ' ile doldurur.
	void dosyadanoku(void);				//ogrenciler.txt dosyasýndan veri okur
	
	int numara[1000];
	char ad[1000][10],soyad[1000][10],adres[1000][100],tel_no[1000][15];
};

