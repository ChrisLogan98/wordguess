/*
 * currentgame.h
 *
 *  Created on: Sep 23, 2019
 *      Author: cstclair
 */

#ifndef CURRENTGAME_H_
#define CURRENTGAME_H_

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class CurrentGame {
private:
	string _playerWord;
	string _gameWord;
	int _attemptsLeft;
	int win, loss;
	vector<char> _wrongChars;
	char promptUser(char letter);
public:
	CurrentGame(){}
	void reset(string newWord);
	int play();
	int placeLetter(char letter);
};

#endif /* CURRENTGAME_H_ */
