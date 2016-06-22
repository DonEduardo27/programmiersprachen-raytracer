#ifndef MATERIAL_HPP
#define MATERIAL_HPP

#include <ostream>
#include "color.hpp"
#include <String>

struct Material
{
	std::String name_;
	Color ka_;
	Color kd_;
	Color ks_;
	float m_;


	friend std::ostream& operator<<(std::ostream& os, Material const& m ) 
	{
		os << "name: " << m.name_ << std::endl
		<<"ka: "<< m.ka_<< std::endl
		<<"kd: "<< m.kd_<< std::endl
		<<"ks: "<< m.ks_<< std::endl
		<<"m "  << m.m_ << std::endl;
		return os;
	}

};
#endif


/*Implementieren Sie ein Struct Material. Es soll die Membervariablen name
vom Typ string, ka, kd, ks vom Typ color und m vom Typ float besitzen.
Die Klasse soll Standard- und User-Konstruktor besitzen. Implementieren Sie
außerdem den Streamoperator (operator<<) zur Ausgabe. Ersetzen Sie den
Color-Member in der Shape durch einen Material-Member und passen Sie die
Getter an. Commiten Sie ihre Änderungen.*/