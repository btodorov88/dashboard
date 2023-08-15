/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#ifndef APPLICATIONFONTPROVIDER_HPP
#define APPLICATIONFONTPROVIDER_HPP

#include <touchgfx/FontManager.hpp>

struct Typography
{
    static const touchgfx::FontId DEFAULT = 0;
    static const touchgfx::FontId RPMTEXT = 1;
    static const touchgfx::FontId VALUES = 2;
    static const touchgfx::FontId LAMBDA = 3;
    static const touchgfx::FontId SMALL = 4;
    static const touchgfx::FontId LARGE = 5;
    static const touchgfx::FontId RPM_LETTERS = 6;
    static const touchgfx::FontId RPM_DESCRIPTOR = 7;
};

struct TypographyFontIndex
{
    static const touchgfx::FontId DEFAULT = 0;        // Asap_Bold_14_4bpp
    static const touchgfx::FontId RPMTEXT = 1;        // Asap_Bold_40_4bpp
    static const touchgfx::FontId VALUES = 2;         // Asap_Bold_30_4bpp
    static const touchgfx::FontId LAMBDA = 2;         // Asap_Bold_30_4bpp
    static const touchgfx::FontId SMALL = 3;          // Asap_Bold_12_4bpp
    static const touchgfx::FontId LARGE = 4;          // Asap_Bold_60_4bpp
    static const touchgfx::FontId RPM_LETTERS = 5;    // Asap_Bold_21_4bpp
    static const touchgfx::FontId RPM_DESCRIPTOR = 6; // Asap_Bold_10_4bpp
    static const uint16_t NUMBER_OF_FONTS = 7;
};

class ApplicationFontProvider : public touchgfx::FontProvider
{
public:
    virtual touchgfx::Font* getFont(touchgfx::FontId typography);
};

#endif // APPLICATIONFONTPROVIDER_HPP
