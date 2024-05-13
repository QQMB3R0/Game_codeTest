#pragma once
#include <iostream>
#include <vector>
class Questions
{
public:
    Questions() {};
	std::string getQuestions(int keyWord, int i)
	{
		if (keyWord == 1) {
			this->wordCollections.push_back(wordsA[i]);
			return this->wordsA[i];
		}
		else if (keyWord == 2) {
			this->wordCollections.push_back(wordsP[i]);
			return this->wordsP[i];
		}
		else if (keyWord == 3) {
			this->wordCollections.push_back(wordsF[i]);
			return this->wordsF[i];
		}
		else if (keyWord == 4) {
			this->wordCollections.push_back(wordsC[i]);
			return this->wordsC[i];
		}
		else if (keyWord == 5) {
			this->wordCollections.push_back(wordsI[i]);
			return this->wordsI[i];
		}
		else
			std::cout << "Not correct number!" << std::endl;


	}
	int getWordCollectionsCount() {
		return this->wordCollections.size();
	}
	int getWordASize();
    int getWordPSize();
    int getWordFSize();
    int getWordCSize();
    int getWordISize();
    ~Questions() {};

private:
    std::vector <std::string> wordsA = { "fish", "dog", "cat", "elephant", "lion", "tiger", "monkey", "zebra", "giraffe", "bear", "kangaroo", "koala", "penguin", "seal", "hippo", "chiken", "wolf", "panda", "frog", "owl", "bunny", "ladybug", "fox", "dragonfly", "sheep", "octopus", "butterfly", "whale", "sheep", "horse", "goat", "pig", "snake" };
    std::vector <std::string> wordsP = { "flower", "tree", "grass", "sunflower", "rose", "cactus", "lily", "dandelion", "tulip",  "oak", "birch", "pine", "iris", "lotus", "violet", "dandelion" };
    std::vector <std::string> wordsF = { "apple", "peach", "banana", "orange", "strawberry", "grapefruit", "carrot", "potato", "sandwich", "chicken", "beef", "salad", "cake" };
    std::vector <std::string> wordsC = { "dress", "shirt", "pants", "skirt", "jeans", "sweater", "jacket", "hat", "shoes", "socks", "gloves", "scarf", "bra", "panties", "boots", "junper", "blouse" };
    std::vector <std::string> wordsI = { "pencil", "book", "chair", "table", "computer", "desk", "notebook", "pen", "calculator", "clock", "backpack", "ruler", "scissors", "marker", "board" };
	std::vector<std::string>wordCollections;
};
