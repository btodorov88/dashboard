/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <stdarg.h>
#include <touchgfx/Texts.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/TypedText.hpp>
#include <texts/TypedTextDatabase.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <touchgfx/TextProvider.hpp>

touchgfx::Font::StringWidthFunctionPointer touchgfx::Font::getStringWidthFunction = &touchgfx::Font::getStringWidthLTR;
touchgfx::LCD::DrawStringFunctionPointer touchgfx::LCD::drawStringFunction = &touchgfx::LCD::drawStringLTR;
touchgfx::TextProvider::UnicodeConverterInitFunctionPointer touchgfx::TextProvider::unicodeConverterInitFunction = static_cast<touchgfx::TextProvider::UnicodeConverterInitFunctionPointer>(0);
touchgfx::TextProvider::UnicodeConverterFunctionPointer touchgfx::TextProvider::unicodeConverterFunction = static_cast<touchgfx::TextProvider::UnicodeConverterFunctionPointer>(0);

//Default typed text database
extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const touchgfx::Unicode::UnicodeChar texts_all_languages[] TEXT_LOCATION_FLASH_ATTRIBUTE =
{
    0x2, 0x20, 0x56, 0x0, // @0 "<> V"
    0x2, 0x20, 0x0, // @4 "<> "
    0x2, 0x0, // @7 "<>"
    0x46, 0x55, 0x45, 0x4c, 0x20, 0x50, 0x0, // @9 "FUEL P"
    0x46, 0x55, 0x45, 0x4c, 0x20, 0x54, 0x0, // @16 "FUEL T"
    0x53, 0x50, 0x45, 0x45, 0x44, 0x0, // @23 "SPEED"
    0x4f, 0x49, 0x4c, 0x20, 0x54, 0x0, // @29 "OIL T"
    0x4f, 0x49, 0x4c, 0x20, 0x50, 0x0, // @35 "OIL P"
    0x4c, 0x41, 0x4d, 0x42, 0x2e, 0x0, // @41 "LAMB."
    0x30, 0x2e, 0x30, 0x0, // @47 "0.0"
    0x4f, 0x49, 0x4c, 0x0, // @51 "OIL"
    0x4d, 0x49, 0x4c, 0x0, // @55 "MIL"
    0x42, 0x41, 0x54, 0x0, // @59 "BAT"
    0x49, 0x41, 0x54, 0x0, // @63 "IAT"
    0x43, 0x4c, 0x54, 0x0, // @67 "CLT"
    0x54, 0x50, 0x53, 0x0, // @71 "TPS"
    0x52, 0x50, 0x4d, 0x0, // @75 "RPM"
    0x38, 0x0, // @79 "8"
    0x37, 0x0, // @81 "7"
    0x36, 0x0, // @83 "6"
    0x35, 0x0, // @85 "5"
    0x34, 0x0, // @87 "4"
    0x33, 0x0, // @89 "3"
    0x32, 0x0, // @91 "2"
    0x31, 0x0 // @93 "1"
};
extern uint32_t const indicesGb[];

//array holding dynamically installed languages
struct TranslationHeader
{
    uint32_t offset_to_texts;
    uint32_t offset_to_indices;
    uint32_t offset_to_typedtext;
};
static const TranslationHeader* languagesArray[1] = { 0 };

//Compiled and linked in languages
static const uint32_t* const staticLanguageIndices[] =
{
    indicesGb
};

touchgfx::LanguageId touchgfx::Texts::currentLanguage = static_cast<touchgfx::LanguageId>(0);
static const touchgfx::Unicode::UnicodeChar* currentLanguagePtr = 0;
static const uint32_t* currentLanguageIndices = 0;

void touchgfx::Texts::setLanguage(touchgfx::LanguageId id)
{
    const touchgfx::TypedText::TypedTextData* currentLanguageTypedText = 0;
    if (id < 1)
    {
        if (languagesArray[id] != 0)
        {
            //dynamic translation is added
            const TranslationHeader* translation = languagesArray[id];
            currentLanguagePtr = (const touchgfx::Unicode::UnicodeChar*)(((const uint8_t*)translation) + translation->offset_to_texts);
            currentLanguageIndices = (const uint32_t*)(((const uint8_t*)translation) + translation->offset_to_indices);
            currentLanguageTypedText = (const touchgfx::TypedText::TypedTextData*)(((const uint8_t*)translation) + translation->offset_to_typedtext);
        }
        else
        {
            //compiled and linked in languages
            currentLanguagePtr = texts_all_languages;
            currentLanguageIndices = staticLanguageIndices[id];
            currentLanguageTypedText = typedTextDatabaseArray[id];
        }
    }

    if (currentLanguageTypedText)
    {
        currentLanguage = id;
        touchgfx::TypedText::registerTypedTextDatabase(currentLanguageTypedText,
                                                       TypedTextDatabase::getFonts(), TypedTextDatabase::getInstanceSize());
    }
}

void touchgfx::Texts::setTranslation(touchgfx::LanguageId id, const void* translation)
{
    languagesArray[id] = (const TranslationHeader*)translation;
}

const touchgfx::Unicode::UnicodeChar* touchgfx::Texts::getText(TypedTextId id) const
{
    return &currentLanguagePtr[currentLanguageIndices[id]];
}

