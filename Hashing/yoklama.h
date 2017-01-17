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
	void bolenkalan_arama(int);			//bolenkalan yontemine g�re arama yapar.
	void kareortasi_arama(int);			//kareortasi yontemine g�re arama yapar.
	void katlama_arama(int);			//katlama yontemine g�re arama yapar.
	void en_fazla_cakisma(void);		//en fazla cakisma olan fonksiyonu, cakisma sayisiyla birlikte ekrana yazd�r�r.
	int bolenkalan_ara_varyok(int);		//bolenkalan yontemyle arama yapar, numara varsa 1, yoksa 0 de�erini d�nd�r�r.
};

