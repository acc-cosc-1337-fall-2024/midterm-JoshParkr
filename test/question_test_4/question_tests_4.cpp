#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify get_fib_number function") {
    REQUIRE(0.4118 == get_dna_p_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT"));
    REQUIRE(0.3529 == get_dna_p_distance("GAGCCTACTAACGGGAT", "GATCGTAATGACGGCCT"));
}