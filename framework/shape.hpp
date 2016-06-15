#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <string>
#include "color.hpp"
# include <glm/glm.hpp>
# include <glm/gtx/intersect.hpp>

class Shape
{
public:
	Shape();
	Shape(std::string const & name, Color const& color);
	std::string getname() const;
	Color const& getcolor() const;

	virtual float area()   const = 0;
	virtual float volume() const = 0;
	virtual std::ostream & print ( std :: ostream & os ) const ;

private:
	std::string name_;
	Color color_;
};

std::ostream& operator<<(std::ostream& os, Shape const& s);

#endif
