#include "shape.hpp"

Shape::Shape(): 
name_{"ELShape"},color_{0,0,0}
{}
Shape::Shape(std::string const& name, Color const& color):
name_{name},color_{color}
{}

std::string Shape::getname() const
{
  return name_;
}
Color const& Shape::getcolor() const
{
  return color_;
}
std::ostream& operator<<(std::ostream& os, Shape const& s)
{
  return s.print(os);
}
std::ostream & Shape::print ( std :: ostream & os ) const 
{
  os << name_ << std::endl << color_;
  return os;
}