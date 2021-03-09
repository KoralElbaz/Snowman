#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good snowman code") {

     //change hat
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));

    CHECK(nospaces(snowman(21114411)) == nospaces("___\n.....\n(.,.)\n( : )\n( : )"));

    CHECK(nospaces(snowman(31114411)) == nospaces("_\n/_\\n(.,.)\n( : )\n( : )"));

    CHECK(nospaces(snowman(41114411)) == nospaces("__\n(_*_)\n(.,.)\n( : )\n( : )"));


    //change nose
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));

    CHECK(nospaces(snowman(12114411)) == nospaces("_===_\n(...)\n( : )\n( : )"));

    CHECK(nospaces(snowman(13114411)) == nospaces("_===_\n(._.)\n( : )\n( : )"));

    CHECK(nospaces(snowman(14114411)) == nospaces("_===_\n(..)\n( : )\n( : )"));

    //change left eye
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));

    CHECK(nospaces(snowman(12214411)) == nospaces("_===_\n(o..)\n( : )\n( : )"));

    CHECK(nospaces(snowman(13314411)) == nospaces("_===_\n(O_.)\n( : )\n( : )"));

    CHECK(nospaces(snowman(14414411)) == nospaces("_===_\n(-.)\n( : )\n( : )"));

    //change right eye
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));

    CHECK(nospaces(snowman(12224411)) == nospaces("_===_\n(o.o)\n( : )\n( : )"));

    CHECK(nospaces(snowman(13334411)) == nospaces("_===_\n(O_O)\n( : )\n( : )"));

    CHECK(nospaces(snowman(14444411)) == nospaces("_===_\n(--)\n( : )\n( : )"));

    //change Left Arm
    CHECK(nospaces(snowman(11111411)) == nospaces("_===_\n(.,.)\n<( : )\n( : )"));

    CHECK(nospaces(snowman(13333411)) == nospaces("_===_\n(O_O)\n/( : )\n( : )"));

    CHECK(nospaces(snowman(14444411)) == nospaces("_===_\n(--)\n( : )\n( : )"));

    //change right arm
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));

    CHECK(nospaces(snowman(12224111)) == nospaces("_===_\n(o.o)\n( : )>\n( : )"));

    CHECK(nospaces(snowman(13334211)) == nospaces("_===_\n(O_O)/\n( : )\n( : )"));

    //change torso
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));

    CHECK(nospaces(snowman(12224421)) == nospaces("_===_\n(o.o)\n( ][ )\n( : )"));

    CHECK(nospaces(snowman(13334431)) == nospaces("_===_\n(O_O)\n( __ )\n( : )"));

    CHECK(nospaces(snowman(14444441)) == nospaces("_===_\n(--)\n(   )\n( : )"));

    //change base
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));

    CHECK(nospaces(snowman(12224422)) == nospaces("_===_\n(o.o)\n( ][ )\n( " " )"));

    CHECK(nospaces(snowman(13334433)) == nospaces("_===_\n(O_O)\n( __ )\n( __ )"));

    CHECK(nospaces(snowman(14444444)) == nospaces("_===_\n(--)\n(   )\n(   )"));


}

////TEST_CASE("Bad snowman code") {
    
    TEST_CASE("small/big number input"){
        CHECK_THROWS(snowman(555));
        CHECK_THROWS(snowman(1114411)); // we have 7 characters
        CHECK_THROWS(snowman(111111111)); // we have 9 characters
        
        }
    TEST_CASE("Invalid characters"){
        CHECK_THROWS(snowman(01114411)); 
        CHECK_THROWS(snowman(15114411));
        CHECK_THROWS(snowman(11614411));
        CHECK_THROWS(snowman(11174411));
        CHECK_THROWS(snowman(11118411));
        CHECK_THROWS(snowman(11114911));
        CHECK_THROWS(snowman(11114401));
        CHECK_THROWS(snowman(11114417));
    }
      TEST_CASE("negtive number"){
        CHECK_THROWS(snowman(-1));
        CHECK_THROWS(snowman(-1231111));

    }


