/*
 * SettersGetters.cpp
 *
 *  Created on: Jul 9, 2018
 *      Author: Nathaniel Joel Parizi
 */

#include <iostream>
#include "Player.h"

using namespace std;

int main() {

	Player player;
	string name;
	string type;
	cout << "Enter your name " << endl;
	cin >> name;
	player.setName(name);
	cout << player.toString() << endl;
	cout << player.getName() << endl;

	cout << "What type of player are you? " << endl;
	cin >> type;
	player.setType(type);
	cout << player.getType() << endl;



	return 0;
}

