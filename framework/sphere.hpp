#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "shape.hpp"
#include <glm/vec3.hpp>

class Sphere: public Shape
{
public:
	Box();
	Box(glm::vec3 const& ctr, float rad);
	float area()   const override;
	float volume() const override;
	glm::vec3 getctr();
	float     getrad();
	void setctr(glm::vec3 ctr);
	void setrad(float     rad);


private: 
	glm::vec3 ctr_;
	float     rad_;
};

#endif