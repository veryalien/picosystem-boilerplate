#include "game.hpp"

using namespace blit;

///////////////////////////////////////////////////////////////////////////
//
// init()
//
// setup your game here
//
void init() {
    set_screen_mode(ScreenMode::hires);
}

///////////////////////////////////////////////////////////////////////////
//
// render(time)
//
// This function is called to perform rendering of the game. time is the 
// amount if milliseconds elapsed since the start of your game
//
void render(uint32_t time) {

    // reset the screen alpha and clipping mask
    screen.alpha = 255;
    screen.mask = nullptr;

    // clear the screen -- screen is a reference to the frame buffer and can be used to draw all things with the 32blit
    screen.pen = Pen(0, 0, 0);
    screen.clear();

    // draw a white rectangle
    screen.pen = Pen(255, 255, 255);
    screen.rectangle(Rect(0, 0, 320, 14));

    // draw some black text
    screen.pen = Pen(0, 0, 0);
    screen.text("Hello PicoSystem!", minimal_font, Point(5, 4));
}

///////////////////////////////////////////////////////////////////////////
//
// update(time)
//
// This is called to update your game state. time is the 
// amount if milliseconds elapsed since the start of your game
//
void update(uint32_t time) {
}