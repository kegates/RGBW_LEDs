/**
** RGBW_Strip.cpp - Library meant to 
** control RGBW LED Strips using an Arduino.
** Contains Class Definitions for the Strips as well
** As Color Profiles
**
** Author - Kevin Gates, 2018
**
*/

#include "Arduino.h"
#include "RGBW_Strip.h"

Color::Color(){
    red = 0;
    green = 0;
    blue = 0;
    white = 0;
}

Color::Color(int r, int g, int b, int w){
    red = r;
    green = g;
    blue = b;
    white = w;
}

int Color::getr(){
    return red;
}

int Color::getg(){
    return green;
}

int Color::getb(){
    return blue;
}

int Color::getw(){
    return white;
}

void Color::set(int r, int g, int b, int w){
    red = r;
    green = g;
    blue = b;
    white = w;
}

Strip::Strip(int rpin, int gpin, int bpin, int wpin){
    pinMode(rpin, OUTPUT);
    pinMode(gpin, OUTPUT);
    pinMode(bpin, OUTPUT);
    pinMode(wpin, OUTPUT);
    _rpin = rpin;
    _gpin = gpin;
    _bpin = bpin;
    _wpin = wpin; 
}

Color Strip::getCol(){
    return curr_color;
}

void Strip::setCol(Color color){
    analogWrite(_rpin, color.getr());
    analogWrite(_gpin, color.getg());
    analogWrite(_bpin, color.getb());
    analogWrite(_wpin, color.getw());
    curr_color = color;

}
