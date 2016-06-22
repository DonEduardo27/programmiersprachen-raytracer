#include "shape.hpp"
#include <iostream>

Shape::Shape(): 
name_{"ELShape"},mat_{}
{
  std::cout<<"makin' a lil' Shape"<<std::endl;
}
Shape::Shape(std::string const& name, Material const& mat):
name_{name},mat_{mat}
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
Material const& Shape::getmat() const
{
  return mat_;
}
std::ostream& operator<<(std::ostream& os, Shape const& s)
{
  return s.print(os);
}
std::ostream & Shape::print ( std :: ostream & os ) const 
{
  os << "\n It's tellin' ya somethin' 'bout it: \n Ma Name's " << name_ << std::endl <<" and I look like "<< mat_;
  return os;
}