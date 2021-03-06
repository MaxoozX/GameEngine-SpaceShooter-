/**
 * The file containg the Color class implementation
 * @file Color.cpp
 * @author Maxence
 * @version 1.0
*/

#include "Color.hpp"

Color::Color(int red, int green, int blue, float alpha): m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) {}
int Color::getRed() const { return m_red; }
int Color::getGreen() const { return m_green; }
int Color::getBlue() const { return m_blue; }
int Color::getAlpha() const { return m_alpha; }