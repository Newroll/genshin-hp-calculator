#include <iostream>
#include <string>


int main ()
{

	std::string enemyname;
	double level;
	double levelmodifierone;
	double levelmodifiertwo;
	double hp;

	std::cout << "What's the level?\n";
	std::cin >> level;

	if (level == 69) {

		levelmodifierone = 11949.945;
		levelmodifiertwo = 14030.204;

	}

	else {

		std::cout << "Please specify a valid level! (1 - 100)\n";

	}

	std::cout << "What's the enemy?\n";
	std::cin >> enemyname;

	if (enemyname == "azhdaha") {

		hp = (36 * levelmodifierone);

	}

	else {

		std::cout << "Please specify a valid enemy!\n";

	}

	std::cout << "The HP of " << enemyname << " is " << hp;

}
