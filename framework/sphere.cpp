#include "sphere.hpp"
#include <math.h>

Sphere::Sphere():
	Shape(),
	ctr_{0.0f,0.0f,0.0f},
	rad_{0.1}
	{}
Sphere::Sphere(glm::vec3 const& ctr, float rad):
	Shape(),
	ctr_{ctr},
	rad_{rad}
	{}
Sphere::Sphere(glm::vec3 const& ctr, float rad, std::string const& name, Color const& farbe):
	Shape(name, farbe),
	ctr_{ctr},
	rad_{rad}
	{}

float Sphere::area() const
{
	return 4*M_PI*rad_*rad_;
}  
float Sphere::volume() const
{
	return (4*M_PI*rad_*rad_*rad_)/3;
}
std::ostream & Sphere::print ( std :: ostream & os ) const
{
	Shape::print(os);
	os <<"("
	<< ctr_.x << ", "
	<< ctr_.y << ", "
	<< ctr_.z << ") "<<std::endl<<"("
	<< rad_ << ". ";
}

glm::vec3 const& Sphere::getctr() const
{
	return ctr_;
}

float const& Sphere::getrad() const 
{
	return rad_;
}