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
	string type;

public:
	Player();
	string toString();
	void setName(string newName);
	string getName();
	string getType();
	void setType(string newType);

};

#endif /* PLAYER_H_ */
