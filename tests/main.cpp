#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "box.hpp"
#include "sphere.hpp"
#include "shape.hpp"
#include <glm/vec3.hpp>

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
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
