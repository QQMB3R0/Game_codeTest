#ifndef GAME_H
#define GAME_H
#include <iostream>
#include "drawHangman.h"
#include "Questions.h"
class Game
{
public:
	Game() {};
	Game(drawHangman* _draw, Questions* _quest) : draw(_draw), quest(_quest) {};
	void encryptedWord(std::string word, std::string guessedLetters);
	bool isWordGuessed(std::string word, std::string guessedLetters);
	bool isCorrectTheme(int theme);
	bool DupChooseTheme(int key);
	bool reEentryChar(char c);
	bool specialCharacters(char c);
	bool isWordGuessed(const std::string word, char guessedChar);
	void Start();
	~Game() {};

private:
	char c;
	drawHangman* draw;
	Questions* quest;
	bool dupCntrl = false;
};
#endif