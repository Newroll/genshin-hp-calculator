#include <iostream>
#include <string>


int main()
{
	while (true) {

		//declears variables
		std::string enemyname;
		double level;
		double levelmodifierone;
		double levelmodifiertwo;
		double hp;
		double multiplier;

		
		//asks for level
		while (true) {
			std::cout << "What's the level?\n";
			std::cin >> level;

			if (level == 69) {

				levelmodifierone = 11949.945;
				levelmodifiertwo = 14030.204;
				break;

			}

			else {

				std::cout << "Please specify a valid level! (1 - 100)\n";

			}
		}


		//asks for enemy
		while (true) {
			std::cout << "What's the enemy?\n";
			std::cin >> enemyname;

			if (enemyname == "azhdaha") {

				hp = (36 * levelmodifierone);
				break;

			}

			else {

				std::cout << "Please specify a valid enemy!\n";

			}
		}

		std::cout << "The HP of " << enemyname << " is " << hp;
		std::cout << "\n";


		//multiplier parts
		std::cout << "Is there an HP multiplier? (https://genshin-impact.fandom.com/wiki/Level_Scaling/Enemy#Special_HP_Multiplier)\nIf so state it.\n";
		std::cin >> multiplier;
		std::cout << (multiplier * hp);
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "\n";
	}
}
