/*
 * Player.h
 *
 *  Created on: Jul 9, 2018
 *      Author: Nathaniel Parizi
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>
using namespace std;

class Player {
private:
	string name;

public:
	Player();
	string toString();
	void setName(string newName);


};

#endif /* PLAYER_H_ */
