#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Servicio {
private:
	int id, price;
	string name;
public:
	Servicio(int id, int p, string n) : id(id) {
		price = p;
		name = n;
	}
	int getId() { return id; }
};

class Repuesto {
private:
	int id, price;
	string name, type;
public:
	Repuesto(int id, int p, string n, string t) : id(id) {
		price = p;
		name = n;
		type = t;
	}
	int getId() { return id; }
};

