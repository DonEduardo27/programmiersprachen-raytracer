#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "box.hpp"
#include "sphere.hpp"
#include "shape.hpp"
#include <glm/vec3.hpp>

# include <glm/glm.hpp>
# include <glm/gtx/intersect.hpp>
/*TEST_CASE ("intersectRaySphere","[intersect]" )
{
// Ray
glm::vec3 ray_origin{0.0,0.0,0.0};
//raydirectionhastobenormalized!
//youcanuse:
//v = glm::normalize(some_vector)
glm::vec3 ray_direction{0.0,0.0,1.0};
//Sphere
glm::vec3 sphere_center{0.0,0.0,5.0};
float sphere_radius{1.0};
float distance{0.0};

auto result = glm::intersectRaySphere(ray_origin,ray_direction,
									sphere_center,sphere_radius,
									distance);
REQUIRE(distance==Approx(4.0f));
}

TEST_CASE("1","[one]")
{
auto bochs  = std::make_shared<Box> ();
auto bochs2 = std::make_shared<Box> (glm::vec3{0,2,4},glm::vec3{1,4,8});

glm::vec3 null{0,0,0};
glm::vec3 a{0,2,4};
glm::vec3 b{1,4,8};

REQUIRE(bochs->getmin()==null);
REQUIRE(bochs->getmax()==null);
REQUIRE(bochs2->getmin()==a);
REQUIRE(bochs2->getmax()==b);
REQUIRE(bochs2->volume()== 8);
REQUIRE(bochs2->area()==28);

Sphere kgl {};
Sphere kgl2 {glm::vec3{3,2,1},4};

glm::vec3 c{3,2,1};

REQUIRE(kgl.getctr()==null);
REQUIRE(kgl.getrad()==1);
REQUIRE(kgl2.getctr()==c);
REQUIRE(kgl2.getrad()==4);
REQUIRE(kgl2.volume()== Approx(268.08258f));
REQUIRE(kgl2.area()==Approx(201.06194f));

}

TEST_CASE("3","[three]")
{
Box bochs {glm::vec3 {1,2,3}, glm::vec3 {4,5,6}, "Don Box", {1,0,0}};
Sphere kgl {glm::vec3 {-1,-2,-3}, 1,"Soy una Kugel", {0,1,1}};

Color col1 = kgl.getcolor();
Color col2 = bochs.getcolor();
REQUIRE(kgl.getname()=="Soy una Kugel");
REQUIRE(col1.r == 0);
REQUIRE(col1.g == 1);
REQUIRE(col1.b == 1);

REQUIRE(bochs.getname()=="Don Box");
REQUIRE(col2.r == 1);
REQUIRE(col2.g == 0);
REQUIRE(col2.b == 0);

}

TEST_CASE("6","[six]")
{

Sphere kgl {glm::vec3 {3,3,3}, 1,"Soy una Kugel", {0,1,1}};

Ray ralf   {glm::vec3 {1,1,1}, glm::vec3 {4,4,4}};
Ray ronny  {glm::vec3 {4,4,4}, glm::vec3 {2,2,2}};
Ray roland {glm::vec3 {4,4,4}, glm::vec3 {6,6,6}};

REQUIRE( kgl.intersect(ralf , 2)); 
REQUIRE( kgl.intersect(ralf , 0));
REQUIRE(!kgl.intersect(ronny, 2));
REQUIRE(!kgl.intersect(ronny, 0));
REQUIRE(!kgl.intersect(roland,2));
REQUIRE(!kgl.intersect(roland,0));
}
*/
int main(int argc, char *argv[])
{

	/*Color red (255 , 0 , 0);
	glm :: vec3 position (0 ,0, 0);
	Sphere * s1 = new Sphere ( position , 1.2 , " sphere0 ", red  );
	Shape * s2  = new Sphere ( position , 1.2 , " sphere1 ", red  );
	s1 -> print ( std :: cout );
	s2 -> print ( std :: cout );
	delete s1 ;
	delete s2 ;*/

  return Catch::Session().run(argc, argv);
}
