#pragma once
#include "grTC.h"

class Camel :public grTC {
public:
	Camel() {
		this->time = 0;
		this->name = "�������";
		this->chilltime = 5;
		this->runtime = 30;
		this->speed = 10;
	}
	double get_time(int dis) override;
	std::string get_res() override;
};