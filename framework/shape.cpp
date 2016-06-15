#include "shape.hpp"
#include <iostream>

Shape::Shape(): 
name_{"ELShape"},color_{0,0,0}
{
  std::cout<<"makin' a lil' Shape"<<std::endl;
}
Shape::Shape(std::string const& name, Color const& color):
name_{name},color_{color}
{
    std::cout<<"makin' a lil' Shape"<<std::endl;
}

Shape::~Shape()
{
  std::cout<<"Killing Shape"<<std::endl;
}

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
  os << "\n It's tellin' ya somethin' 'bout it: \n Ma Name's " << name_ << std::endl <<" and I look like "<< color_;
  return os;
}