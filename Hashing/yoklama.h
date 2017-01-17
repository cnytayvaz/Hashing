#pragma once
#include "bolenkalan.h"
#include "kareortasi.h"
#include "katlama.h"

class yoklama :
	public bolenkalan, public kareortasi, public katlama
{
public:
	yoklama(void);
	~yoklama(void);
	void bolenkalan_arama(int);			//bolenkalan yontemine göre arama yapar.
	void kareortasi_arama(int);			//kareortasi yontemine göre arama yapar.
	void katlama_arama(int);			//katlama yontemine göre arama yapar.
	void en_fazla_cakisma(void);		//en fazla cakisma olan fonksiyonu, cakisma sayisiyla birlikte ekrana yazdýrýr.
	int bolenkalan_ara_varyok(int);		//bolenkalan yontemyle arama yapar, numara varsa 1, yoksa 0 deðerini döndürür.
};

