#include <iostream>
#include <string>
//ur mom


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

			if (level == 1) {

				levelmodifierone = 72.917;
				levelmodifiertwo = 73.420;
				break;

			}

			if (level == 2) {

				levelmodifierone = 92.628;
				levelmodifiertwo = 93.289;
				break;

			}

			if (level == 3) {

				levelmodifierone = 114.394;
				levelmodifiertwo = 115.237;
				break;

			}

			if (level == 4) {

				levelmodifierone = 138.215;
				levelmodifiertwo = 139.237;
				break;

			}

			if (level == 5) {

				levelmodifierone = 164.093;
				levelmodifiertwo = 165.379;
				break;

			}

			if (level == 6) {

				levelmodifierone = 192.050;
				levelmodifiertwo = 193.599;
				break;

			}

			if (level == 7) {

				levelmodifierone = 222.075;
				levelmodifiertwo = 223.916;
				break;

			}

			if (level == 8) {

				levelmodifierone = 237.820;
				levelmodifiertwo = 239.844;
				break;

			}

			if (level == 9) {

				levelmodifierone = 261.734;
				levelmodifiertwo = 264.020;
				break;

			}

			if (level == 10) {

				levelmodifierone = 284.604;
				levelmodifiertwo = 289.169;
				break;

			}

			if (level == 11) {

				levelmodifierone = 326.883;
				levelmodifiertwo = 330.773;
				break;

			}

			if (level == 12) {

				levelmodifierone = 368.759;
				levelmodifiertwo = 374.083;
				break;

			}

			if (level == 13) {

				levelmodifierone = 412.257;
				levelmodifiertwo = 419.225;
				break;

			}

			if (level == 14) {

				levelmodifierone = 460.521;
				levelmodifiertwo = 469.225;
				break;

			}

			if (level == 15) {

				levelmodifierone = 510.583;
				levelmodifiertwo = 521.255;
				break;

			}

			if (level == 16) {

				levelmodifierone = 562.470;
				levelmodifiertwo = 575.254;
				break;

			}

			if (level == 17) {

				levelmodifierone = 624.470;
				levelmodifiertwo = 640.217;
				break;

			}

			if (level == 18) {

				levelmodifierone = 679.928;
				levelmodifiertwo = 697.853
				break;

			}

			if (level == 19) {

				levelmodifierone = 736.002;
				levelmodifiertwo = 786.963;
				break;

			}

			if (level == 20) {

				levelmodifierone = 885.200;
				levelmodifiertwo = 851.125;
				break;

			}

			if (level == 21) {

				levelmodifierone = 932.013;
				levelmodifiertwo = 916.916;
				break;

			}

			if (level == 22) {

				levelmodifierone = 979.483;
				levelmodifiertwo = 984.334;
				break;

			}

			if (level == 23) {

				levelmodifierone = 1023.665;
				levelmodifiertwo = 1052.130;
				break;

			}

			if (level == 24) {

				levelmodifierone = 1083.859;
				levelmodifiertwo = 1121.129;
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

		std::cout << "The HP of " << enemyname << " at level " << level << " is " << hp;
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
