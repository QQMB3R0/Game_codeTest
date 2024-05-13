#include "Game.h"
void Game::encryptedWord(std::string word, std::string guessedLetters)
{
	int length = word.length();
	int m = (23 - length / 2);
	draw->setXY(m, 15);
	for (char c : word) {
		if (guessedLetters.find(c) != std::string::npos) {
			std::cout << c;
		}
		else { std::cout << "_"; }
	}
}
bool Game::isWordGuessed(std::string word, std::string guessedLetters)
{
	for (char c : word) {
		if (guessedLetters.find(c) == std::string::npos) {
			return false;
		}
	}
	return true;
}

bool Game::isCorrectTheme(int theme)
{
	if (theme >= 0 && theme < 6)
		return true;
	else
		return false;
}

bool Game::DupChooseTheme(int key)
{
	static int prevKey = -1;
	if (key == prevKey) {
		return false;
	}
	else {
		prevKey = key;
		return true;
	}
}

bool Game::reEentryChar(char c)
{
	static int prevChar = ' ';

	if (c == prevChar) {
		return false;
	}
	else {
		prevChar = c;
		return true;
	}
}

bool Game::specialCharacters(char c)
{
	if (isdigit(c) || ispunct(c) || isspace(c)) {
		return false;
	}
	else {
		return true;
	}
}


void Game::Start()
{
	int score, key,length;
	std::string word;
	std::string guessedLetters;

	do
	{
		draw->setXY(12, 3);
		std::cout << "To start the game, select a theme:" << std::endl;
		draw->setXY(12, 5);
		std::cout << "Animals - 1.       Plants - 2." << std::endl;
		draw->setXY(24, 7);
		std::cout << "Food - 3." << std::endl;
		draw->setXY(12, 9);
		std::cout << "Clothes - 4.        Items - 5." << std::endl;
		draw->setXY(20, 11);
		std::cout << "Random theme - 0." << std::endl;
		draw->setXY(10, 13);
		std::cout << "(To select, press the appropriate key)" << std::endl;
		draw->setXY(29, 15);
		std::cin >> key;
		system("cls");
	} while (key < 0 || key > 5);
	draw->Field();
	if (key == 1) {
		word = quest->getQuestions(key, rand() % quest->getWordASize());
		draw->setXY(3, 17);
		std::cout << "Theme: animals." << std::endl;
	}
	else if (key == 2) {
		word = quest->getQuestions(key, rand() % quest->getWordPSize());
		draw->setXY(3, 17);
		std::cout << "Theme: plants." << std::endl;
	}
	else if (key == 3) {
		word = quest->getQuestions(key, rand() % quest->getWordFSize());
		draw->setXY(3, 17);
		std::cout << "Theme: food." << std::endl;
	}
	else if (key == 4) {
		word = quest->getQuestions(key, rand() % quest->getWordCSize());
		draw->setXY(3, 17);
		std::cout << "Theme: clothes." << std::endl;
	}
	else if (key == 5) {
		word = quest->getQuestions(key, rand() % quest->getWordISize());
		draw->setXY(3, 17);
		std::cout << "Theme: item." << std::endl;
	}
	length = word.length();
	int attemptsLeft = 7;
	draw->setXY(3, 18);
	std::cout << "Enter the letter: ";

	int enterX = 20;
	char guess;
	while (attemptsLeft > 0 && !isWordGuessed(word, guessedLetters))
	{
		draw->setXY(5, 2);
		std::cout << "You have   attempts to guess the word.";
		draw->setXY(14, 2);
		std::cout << attemptsLeft;
		draw->printHuman(attemptsLeft);
		encryptedWord(word, guessedLetters);
		enterX++;
		draw->setXY(enterX, 18);
		std::cin >> guess;
		if (word.find(guess) != std::string::npos) {
			draw->setXY(19, 4);
			std::cout << "Correct!" << std::endl;
			guessedLetters += guess;
		}
		else {
			draw->setXY(19, 4);
			std::cout << " Wrong! " << std::endl;
			attemptsLeft--;
		}
	}
}
#include "pch.h"