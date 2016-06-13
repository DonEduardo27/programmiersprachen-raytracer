#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape
{
public:

virtual float area()   const = 0;
virtual float volume() const = 0;

};
#endif



/*Leiten Sie nun die Klassen Sphere und Box von Shape ab. Die Klasse Sphere
besitzt einen Mittelpunkt vom Typ glm::vec3 und einen Radius. Die Achsen-
parallele Box besitzt ein Minimum und ein Maximum vom Typ glm::vec3.
Includieren Sie dazu den Header# include < glm / vec3 . hpp >
Implementieren Sie geeignete Konstruktoren, get-Methoden, die Methode area
und die Methode volume. Testen Sie diese.*/