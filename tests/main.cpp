#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "box.hpp"
#include "sphere.hpp"
#include "shape.hpp"
#include <glm/vec3.hpp>

# include <glm/glm.hpp>
# include <glm/gtx/intersect.hpp>
TEST_CASE ("intersectRaySphere","[intersect]" )
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

bochs2->print(std::cout);
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
