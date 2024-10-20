#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify get_fib_number function") {
    REQUIRE(5 == get_fib_number(5));
    REQUIRE(13 == get_fib_number(7));
    REQUIRE(55 == get_fib_number(10));
    REQUIRE(144 == get_fib_number(12));
}