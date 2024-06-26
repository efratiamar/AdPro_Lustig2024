#pragma once
#include "SortAndPrint.h"

class Strings : public SortAndPrint
{
private:
	char words[4][20];
	void swap(int i, int j) override final;
	int isSmaller(int i, int j) override final;
	void show(int i) override final;
public:
	Strings(const char*, const char*, const char*, const char*);
};

