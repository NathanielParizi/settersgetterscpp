/*
 * Player.cpp
 *
 *  Created on: Jul 9, 2018
 *      Author: Nathaniel Parizi
 */

#include <iostream>  // allows insertion operations and extraction operations
#include "Player.h"
using namespace std;

Player::Player(){

	cout << "Player created" << endl;
	type = "mage";


}

string Player::toString(){
return "Player's type is " + type;
}

void Player::setName(string newName){

	name = newName;

}

string Player::getName(){

	return "Player's name is " + name;
}

void Player::setType(string newType){

	type = newType;
}

string Player::getType(){

	return "Player's type is " + type;
}




