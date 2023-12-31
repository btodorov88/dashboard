/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include "BitmapDatabase.hpp"

MainViewBase::MainViewBase()
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    backgroundBox.setPosition(0, 0, 800, 480);
    backgroundBox.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    CltDecsriptor.setXY(218, 220);
    CltDecsriptor.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 220, 0));
    CltDecsriptor.setLinespacing(0);
    CltDecsriptor.setTypedText(touchgfx::TypedText(T_SINGLEUSEID41));

    LambdaDescriptor.setXY(223, 139);
    LambdaDescriptor.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 220, 0));
    LambdaDescriptor.setLinespacing(0);
    LambdaDescriptor.setTypedText(touchgfx::TypedText(T_SINGLEUSEID33));

    TrgtDescriptor.setXY(24, 136);
    TrgtDescriptor.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 220, 0));
    TrgtDescriptor.setLinespacing(0);
    TrgtDescriptor.setTypedText(touchgfx::TypedText(T_SINGLEUSEID32));

    LambdaValue.setPosition(187, 77, 114, 62);
    LambdaValue.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    LambdaValue.setLinespacing(0);
    Unicode::snprintf(LambdaValueBuffer, LAMBDAVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID90).getText());
    LambdaValue.setWildcard(LambdaValueBuffer);
    LambdaValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID9));

    SpeedValue.setPosition(23, 95, 71, 41);
    SpeedValue.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    SpeedValue.setLinespacing(0);
    Unicode::snprintf(SpeedValueBuffer, SPEEDVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID8).getText());
    SpeedValue.setWildcard(SpeedValueBuffer);
    SpeedValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID7));

    backgroundImage.setXY(179, 63);
    backgroundImage.setVisible(false);

    rpm1.setPosition(54, 64, 18, 14);
    rpm1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    rpm1.setLinespacing(0);
    Unicode::snprintf(rpm1Buffer, RPM1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID60).getText());
    rpm1.setWildcard(rpm1Buffer);
    rpm1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID11));

    rpm2.setPosition(115, 64, 18, 14);
    rpm2.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    rpm2.setLinespacing(0);
    Unicode::snprintf(rpm2Buffer, RPM2_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID61).getText());
    rpm2.setWildcard(rpm2Buffer);
    rpm2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID12));

    rpm3.setPosition(173, 64, 18, 14);
    rpm3.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    rpm3.setLinespacing(0);
    Unicode::snprintf(rpm3Buffer, RPM3_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID62).getText());
    rpm3.setWildcard(rpm3Buffer);
    rpm3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID13));

    rpm4.setPosition(231, 64, 18, 14);
    rpm4.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    rpm4.setLinespacing(0);
    Unicode::snprintf(rpm4Buffer, RPM4_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID63).getText());
    rpm4.setWildcard(rpm4Buffer);
    rpm4.setTypedText(touchgfx::TypedText(T_SINGLEUSEID14));

    rpm5.setPosition(292, 64, 18, 14);
    rpm5.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    rpm5.setLinespacing(0);
    Unicode::snprintf(rpm5Buffer, RPM5_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID64).getText());
    rpm5.setWildcard(rpm5Buffer);
    rpm5.setTypedText(touchgfx::TypedText(T_SINGLEUSEID15));

    rpm6.setPosition(349, 64, 18, 14);
    rpm6.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    rpm6.setLinespacing(0);
    Unicode::snprintf(rpm6Buffer, RPM6_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID65).getText());
    rpm6.setWildcard(rpm6Buffer);
    rpm6.setTypedText(touchgfx::TypedText(T_SINGLEUSEID16));

    rpm7.setPosition(411, 64, 18, 15);
    rpm7.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    rpm7.setLinespacing(0);
    Unicode::snprintf(rpm7Buffer, RPM7_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID66).getText());
    rpm7.setWildcard(rpm7Buffer);
    rpm7.setTypedText(touchgfx::TypedText(T_SINGLEUSEID17));

    rpm8.setPosition(462, 64, 18, 14);
    rpm8.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    rpm8.setLinespacing(0);
    Unicode::snprintf(rpm8Buffer, RPM8_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID67).getText());
    rpm8.setWildcard(rpm8Buffer);
    rpm8.setTypedText(touchgfx::TypedText(T_SINGLEUSEID18));

    line11.setPosition(-2, 59, 490, 5);
    line11Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line11.setPainter(line11Painter);
    line11.setStart(0, 3);
    line11.setEnd(490, 3);
    line11.setLineWidth(2);
    line11.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);

    IATDescriptor.setXY(132, 136);
    IATDescriptor.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 220, 0));
    IATDescriptor.setLinespacing(0);
    IATDescriptor.setTypedText(touchgfx::TypedText(T_SINGLEUSEID30));

    IATValue.setPosition(114, 95, 60, 42);
    IATValue.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    IATValue.setLinespacing(0);
    Unicode::snprintf(IATValueBuffer, IATVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID23).getText());
    IATValue.setWildcard(IATValueBuffer);
    IATValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID22));

    IATDescriptor_1.setXY(116, 220);
    IATDescriptor_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 220, 0));
    IATDescriptor_1.setLinespacing(0);
    IATDescriptor_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID34));

    ECTDescriptor_1.setXY(320, 137);
    ECTDescriptor_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 220, 0));
    ECTDescriptor_1.setLinespacing(0);
    ECTDescriptor_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID35));

    OILTempValue.setPosition(107, 177, 75, 42);
    OILTempValue.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    OILTempValue.setLinespacing(0);
    Unicode::snprintf(OILTempValueBuffer, OILTEMPVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID37).getText());
    OILTempValue.setWildcard(OILTempValueBuffer);
    OILTempValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID36));

    OILPressureValue.setPosition(312, 93, 71, 40);
    OILPressureValue.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    OILPressureValue.setLinespacing(0);
    Unicode::snprintf(OILPressureValueBuffer, OILPRESSUREVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID57).getText());
    OILPressureValue.setWildcard(OILPressureValueBuffer);
    OILPressureValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID38));

    IATDescriptor_1_1.setXY(407, 240);
    IATDescriptor_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 220, 0));
    IATDescriptor_1_1.setLinespacing(0);
    IATDescriptor_1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID42));

    TPSProgress.setXY(367, 226);
    TPSProgress.setProgressIndicatorPosition(2, 2, 100, 10);
    TPSProgress.setRange(0, 100);
    TPSProgress.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    TPSProgress.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_SMALL_PROGRESS_INDICATOR_BG_SQUARE_0_DEGREES_ID));
    TPSProgress.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 220, 0));
    TPSProgress.setValue(0);

    line10.setPosition(14, 258, 180, 10);
    line10Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line10.setPainter(line10Painter);
    line10.setStart(0, 5);
    line10.setEnd(180, 5);
    line10.setLineWidth(2);
    line10.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);

    line10_1.setPosition(287, 258, 180, 10);
    line10_1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line10_1.setPainter(line10_1Painter);
    line10_1.setStart(0, 5);
    line10_1.setEnd(180, 5);
    line10_1.setLineWidth(2);
    line10_1.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);

    BatteryVoltage.setPosition(210, 253, 60, 21);
    BatteryVoltage.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    BatteryVoltage.setLinespacing(0);
    Unicode::snprintf(BatteryVoltageBuffer, BATTERYVOLTAGE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID45).getText());
    BatteryVoltage.setWildcard(BatteryVoltageBuffer);
    BatteryVoltage.setTypedText(touchgfx::TypedText(T_SINGLEUSEID44));

    RPMProgressBar.setXY(1, 2);
    RPMProgressBar.setProgressIndicatorPosition(2, 2, 478, 55);
    RPMProgressBar.setRange(0, 8000);
    RPMProgressBar.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    RPMProgressBar.setBitmap(BITMAP_BLUE_PROGRESSINDICATORS_FILL_TILING_RED_YELLOW_FADEYELLOWRED_SMALL_TRANSPARENT_ID);
    RPMProgressBar.setValue(7200);
    RPMProgressBar.setAnchorAtZero(true);

    RPMValue.setPosition(11, 4, 55, 22);
    RPMValue.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    RPMValue.setLinespacing(0);
    Unicode::snprintf(RPMValueBuffer, RPMVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID47).getText());
    RPMValue.setWildcard(RPMValueBuffer);
    RPMValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID46));

    CltValue_1_1.setXY(61, 15);
    CltValue_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    CltValue_1_1.setLinespacing(0);
    CltValue_1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID50));

    CLTValue.setPosition(195, 158, 96, 60);
    CLTValue.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    CLTValue.setLinespacing(0);
    Unicode::snprintf(CLTValueBuffer, CLTVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID56).getText());
    CLTValue.setWildcard(CLTValueBuffer);
    CLTValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID55));

    FuelPValue.setPosition(398, 94, 68, 42);
    FuelPValue.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    FuelPValue.setLinespacing(0);
    Unicode::snprintf(FuelPValueBuffer, FUELPVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID72).getText());
    FuelPValue.setWildcard(FuelPValueBuffer);
    FuelPValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID71));

    FuelPDescriptor.setXY(395, 137);
    FuelPDescriptor.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 220, 0));
    FuelPDescriptor.setLinespacing(0);
    FuelPDescriptor.setTypedText(touchgfx::TypedText(T_SINGLEUSEID73));

    TpsNumberValue.setPosition(408, 226, 19, 17);
    TpsNumberValue.setColor(touchgfx::Color::getColorFrom24BitRGB(13, 13, 13));
    TpsNumberValue.setLinespacing(0);
    Unicode::snprintf(TpsNumberValueBuffer, TPSNUMBERVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID75).getText());
    TpsNumberValue.setWildcard(TpsNumberValueBuffer);
    TpsNumberValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID74));

    MinFuelPValue.setPosition(430, 137, 43, 19);
    MinFuelPValue.setColor(touchgfx::Color::getColorFrom24BitRGB(185, 184, 184));
    MinFuelPValue.setLinespacing(0);
    Unicode::snprintf(MinFuelPValueBuffer, MINFUELPVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID77).getText());
    MinFuelPValue.setWildcard(MinFuelPValueBuffer);
    MinFuelPValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID76));

    MaxOilTValue.setPosition(144, 220, 43, 20);
    MaxOilTValue.setColor(touchgfx::Color::getColorFrom24BitRGB(185, 184, 184));
    MaxOilTValue.setLinespacing(0);
    Unicode::snprintf(MaxOilTValueBuffer, MAXOILTVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID81).getText());
    MaxOilTValue.setWildcard(MaxOilTValueBuffer);
    MaxOilTValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID80));

    MaxCltValue.setPosition(233, 220, 43, 20);
    MaxCltValue.setColor(touchgfx::Color::getColorFrom24BitRGB(185, 184, 184));
    MaxCltValue.setLinespacing(0);
    Unicode::snprintf(MaxCltValueBuffer, MAXCLTVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID83).getText());
    MaxCltValue.setWildcard(MaxCltValueBuffer);
    MaxCltValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID82));

    MaxRPMValue.setPosition(85, 14, 36, 13);
    MaxRPMValue.setColor(touchgfx::Color::getColorFrom24BitRGB(230, 230, 230));
    MaxRPMValue.setLinespacing(0);
    Unicode::snprintf(MaxRPMValueBuffer, MAXRPMVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID85).getText());
    MaxRPMValue.setWildcard(MaxRPMValueBuffer);
    MaxRPMValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID84));

    MaxSpeedValue.setPosition(61, 136, 43, 20);
    MaxSpeedValue.setColor(touchgfx::Color::getColorFrom24BitRGB(185, 184, 184));
    MaxSpeedValue.setLinespacing(0);
    Unicode::snprintf(MaxSpeedValueBuffer, MAXSPEEDVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID89).getText());
    MaxSpeedValue.setWildcard(MaxSpeedValueBuffer);
    MaxSpeedValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID88));

    FuelTValue.setPosition(25, 177, 68, 42);
    FuelTValue.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    FuelTValue.setLinespacing(0);
    Unicode::snprintf(FuelTValueBuffer, FUELTVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID92).getText());
    FuelTValue.setWildcard(FuelTValueBuffer);
    FuelTValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID91));

    FuelTDescriptor.setXY(35, 220);
    FuelTDescriptor.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 220, 0));
    FuelTDescriptor.setLinespacing(0);
    FuelTDescriptor.setTypedText(touchgfx::TypedText(T_SINGLEUSEID93));

    BatIndicator.setXY(236, -1);
    BatIndicator.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 3, 3));
    BatIndicator.setLinespacing(0);
    BatIndicator.setTypedText(touchgfx::TypedText(T_SINGLEUSEID94));

    MilIndicator.setXY(125, -1);
    MilIndicator.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 0));
    MilIndicator.setLinespacing(0);
    MilIndicator.setTypedText(touchgfx::TypedText(T_SINGLEUSEID95));

    OilIndicator.setXY(182, -1);
    OilIndicator.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
    OilIndicator.setLinespacing(0);
    OilIndicator.setTypedText(touchgfx::TypedText(T_SINGLEUSEID96));

    MinOilPValue.setPosition(347, 137, 43, 20);
    MinOilPValue.setColor(touchgfx::Color::getColorFrom24BitRGB(185, 184, 184));
    MinOilPValue.setLinespacing(0);
    Unicode::snprintf(MinOilPValueBuffer, MINOILPVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID98).getText());
    MinOilPValue.setWildcard(MinOilPValueBuffer);
    MinOilPValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID97));

    add(backgroundBox);
    add(CltDecsriptor);
    add(LambdaDescriptor);
    add(TrgtDescriptor);
    add(LambdaValue);
    add(SpeedValue);
    add(backgroundImage);
    add(rpm1);
    add(rpm2);
    add(rpm3);
    add(rpm4);
    add(rpm5);
    add(rpm6);
    add(rpm7);
    add(rpm8);
    add(line11);
    add(IATDescriptor);
    add(IATValue);
    add(IATDescriptor_1);
    add(ECTDescriptor_1);
    add(OILTempValue);
    add(OILPressureValue);
    add(IATDescriptor_1_1);
    add(TPSProgress);
    add(line10);
    add(line10_1);
    add(BatteryVoltage);
    add(RPMProgressBar);
    add(RPMValue);
    add(CltValue_1_1);
    add(CLTValue);
    add(FuelPValue);
    add(FuelPDescriptor);
    add(TpsNumberValue);
    add(MinFuelPValue);
    add(MaxOilTValue);
    add(MaxCltValue);
    add(MaxRPMValue);
    add(MaxSpeedValue);
    add(FuelTValue);
    add(FuelTDescriptor);
    add(BatIndicator);
    add(MilIndicator);
    add(OilIndicator);
    add(MinOilPValue);
}

void MainViewBase::setupScreen()
{

}
