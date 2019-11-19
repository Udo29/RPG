/*

#include "damageable.h"
#include "race.h"
#include "integerItem.h"
#include "integerValue.h"
#include "dice.h"
#include "string.h"
#include <iostream>

using namespace rpg;

int main()
{


  Damageable* Knight = new Damageable(12, "Knight");
  //subit 8 pts dmg
  Knight->damage(8);
  cout << "Points de vie: " << Knight->getHitPoints() << endl;
  cout << "Mort? " << Knight->isDead() << endl;
  //heal Knight
  Knight->healRepair(6);
  cout << "Points de vie: " << Knight->getHitPoints() << endl;
  cout << "Mort? " << Knight->isDead() << endl;
  Knight->damage(52);
  cout << "Points de vie: " << Knight->getHitPoints() << endl;
  cout << "Mort? " << Knight->isDead() << endl;
  Knight->healRepair(8);
  cout << "Points de vie: " << Knight->getHitPoints() << endl;
  cout << "Mort? " << Knight->isDead() << endl;
  
  Dice d6(6, 1);
  Race humanRace(&(d6 + d6 + d6),&( d6 + d6 + d6) ); // 3d6, 3d6
  Race orcRace(&(d6 + d6 + 6), &(d6 + d6)); // 2d6+6, 2d6



  return 0;
}
*/


#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch.hpp"
#include "String.h"

using namespace rpg;

TEST_CASE("String Test") {
	const char* c1 = "Bonjour";
	const char* c2 = " et Bienvenue";
	
	String s1(c1);
	bool c1s1 = (c1 == s1);
	REQUIRE(c1s1);

	String s2(c2);
	REQUIRE(c2 == s2);

	String s3 = s1;
	REQUIRE(s3 == s1);
	
	String s4 = s1 + s2;
	REQUIRE(s4 == "Bonjour et Bienvenue");
}





