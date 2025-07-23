#include "gmock/gmock.h"
#include "baseball.cpp"

TEST(BaseballGame, ThrowExceptionWHenInputLengthIsUnmached) {
    Baseball game;
    EXPECT_THROW(game.guess(string("12")), length_error);
}