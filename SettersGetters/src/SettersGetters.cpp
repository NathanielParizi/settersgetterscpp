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
	cout << "Enter your name " << endl;
	cin >> name;
	player.setName(name);
	cout << player.toString() << endl;
	return 0;
}

