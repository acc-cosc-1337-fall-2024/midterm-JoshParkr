#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify get_fib_number function") {
    REQUIRE(3 == get_earned_points(3));
    REQUIRE(45 == get_earned_points(9));
    REQUIRE(110 == get_earned_points(11));
    REQUIRE(300 == get_earned_points(20));
}
