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