#include "pch.h"
#include "gtest/gtest.h"
#include "Game.h"

//TEST(GameThemeTest, isTrue) {
//	Game g ;
//	EXPECT_TRUE(g.isCorrectTheme(0));
//	EXPECT_TRUE(g.isCorrectTheme(1));
//	EXPECT_TRUE(g.isCorrectTheme(2));
//	EXPECT_TRUE(g.isCorrectTheme(3));
//	EXPECT_TRUE(g.isCorrectTheme(4));
//	EXPECT_TRUE(g.isCorrectTheme(5));
//}
//
//TEST(CharCorrect, isTrue) {
//	Game g ;
//	Questions quest;
//	std::string word = quest.getQuestions(1,1);
//	EXPECT_TRUE(g.isWordGuessed(word, 'd'));
//	EXPECT_TRUE(g.isWordGuessed(word, 'o'));
//	EXPECT_TRUE(g.isWordGuessed(word, 'g'));
//}
//
//TEST(GetThemeTest, count) {
//	Questions quest;
//	quest.getQuestions(1, 1);
//	quest.getQuestions(2, 1);
//	quest.getQuestions(2, 4);
//	quest.getQuestions(4, 7);
//	ASSERT_EQ(quest.getWordCollectionsCount(),4);
//}
//
//TEST(DupControlTheme, isTrue) {
//	Game g;
//	EXPECT_TRUE(g.DupChooseTheme(2));
//	EXPECT_TRUE(g.DupChooseTheme(1));
//	EXPECT_TRUE(g.DupChooseTheme(3));
//}
//
//TEST(DupControlChar, isTrue) {
//	Game g;
//	EXPECT_TRUE(g.reEentryChar('c'));
//	EXPECT_TRUE(g.reEentryChar('a'));
//	EXPECT_TRUE(g.reEentryChar('t'));
//}
//
//TEST(SpecialControlChar, isTrue) {
//	Game g;
//	EXPECT_TRUE(g.specialCharacters('c'));
//	EXPECT_TRUE(g.specialCharacters('a'));
//	EXPECT_TRUE(g.specialCharacters('t'));
//}

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
