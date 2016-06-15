#include "box.hpp"

Box::Box():
	Shape(),
	min_{0.0f,0.0f,0.0f},
	max_{0.0f,0.0f,0.0f}
	{}
Box::Box(glm::vec3 const& min, glm::vec3 const& max):
	Shape(),
	min_{min},
	max_{max}
	{}
Box::Box(glm::vec3 const& min, glm::vec3 const& max, std::string const& name, Color const& farbe):
	Shape(name, farbe),
	min_{min},
	max_{max}
	{}

float Box::area() const
{
	float a = max_.x - min_.x;
	float b = max_.y - min_.y;
	float c = max_.z - min_.z;
	return 2*((a*b)+(b*c)+(a*c));
}  
float Box::volume() const
{
	float a = max_.x - min_.x;
	float b = max_.y - min_.y;
	float c = max_.z - min_.z;
	return a*b*c;
}
std::ostream & Box::print ( std :: ostream & os ) const
{
	Shape::print(os);
	os <<"("
	<< min_.x << ", "
	<< min_.y << ", "
	<< min_.z << ") "<<std::endl<<"("
	<< max_.x << ", "
	<< max_.y << ", "
	<< max_.z << ")";
}

glm::vec3 const& Box::getmin() const
{
	return min_;
}

glm::vec3 const& Box::getmax() const 
{
	return max_;
}