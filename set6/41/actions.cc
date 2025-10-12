#include "charcount.ih"

void (CharCount::*CharCount::d_actions[CharCount::NUM_ACTIONS])
     (std::size_t idx, unsigned char ch) = {
    &CharCount::appendChar,
    &CharCount::insertChar,
    &CharCount::increaseChar
};