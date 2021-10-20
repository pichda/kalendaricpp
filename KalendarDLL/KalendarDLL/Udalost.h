#pragma once
#ifndef UDALOST_H
#define UDALOST_H

#include <string>

	class Udalost {

	private:
		int id;
		std::string titulek;
		std::string text;
		//TODO:
	//	Datum datumUpozorneni;
		bool maUpozorneni;

	public:
		Udalost();
		~Udalost();
	};

#endif