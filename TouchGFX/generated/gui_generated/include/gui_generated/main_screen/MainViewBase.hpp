/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAINVIEWBASE_HPP
#define MAINVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/main_screen/MainPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/canvas/Line.hpp>
#include <touchgfx/widgets/canvas/PainterRGB888.hpp>
#include <touchgfx/containers/progress_indicators/BoxProgress.hpp>
#include <touchgfx/containers/progress_indicators/ImageProgress.hpp>

class MainViewBase : public touchgfx::View<MainPresenter>
{
public:
    MainViewBase();
    virtual ~MainViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box backgroundBox;
    touchgfx::TextArea CltDecsriptor;
    touchgfx::TextArea LambdaDescriptor;
    touchgfx::TextArea TrgtDescriptor;
    touchgfx::TextAreaWithOneWildcard LambdaValue;
    touchgfx::TextAreaWithOneWildcard SpeedValue;
    touchgfx::Image backgroundImage;
    touchgfx::TextAreaWithOneWildcard rpm1;
    touchgfx::TextAreaWithOneWildcard rpm2;
    touchgfx::TextAreaWithOneWildcard rpm3;
    touchgfx::TextAreaWithOneWildcard rpm4;
    touchgfx::TextAreaWithOneWildcard rpm5;
    touchgfx::TextAreaWithOneWildcard rpm6;
    touchgfx::TextAreaWithOneWildcard rpm7;
    touchgfx::TextAreaWithOneWildcard rpm8;
    touchgfx::Line line11;
    touchgfx::PainterRGB888 line11Painter;
    touchgfx::TextArea IATDescriptor;
    touchgfx::TextAreaWithOneWildcard IATValue;
    touchgfx::TextArea IATDescriptor_1;
    touchgfx::TextArea ECTDescriptor_1;
    touchgfx::TextAreaWithOneWildcard OILTempValue;
    touchgfx::TextAreaWithOneWildcard OILPressureValue;
    touchgfx::TextArea IATDescriptor_1_1;
    touchgfx::BoxProgress TPSProgress;
    touchgfx::Line line10;
    touchgfx::PainterRGB888 line10Painter;
    touchgfx::Line line10_1;
    touchgfx::PainterRGB888 line10_1Painter;
    touchgfx::TextAreaWithOneWildcard BatteryVoltage;
    touchgfx::ImageProgress RPMProgressBar;
    touchgfx::TextAreaWithOneWildcard RPMValue;
    touchgfx::TextArea CltValue_1_1;
    touchgfx::TextAreaWithOneWildcard CLTValue;
    touchgfx::TextAreaWithOneWildcard FuelPValue;
    touchgfx::TextArea FuelPDescriptor;
    touchgfx::TextAreaWithOneWildcard TpsNumberValue;
    touchgfx::TextAreaWithOneWildcard MinFuelPValue;
    touchgfx::TextAreaWithOneWildcard MaxOilTValue;
    touchgfx::TextAreaWithOneWildcard MaxCltValue;
    touchgfx::TextAreaWithOneWildcard MaxRPMValue;
    touchgfx::TextAreaWithOneWildcard MaxSpeedValue;
    touchgfx::TextAreaWithOneWildcard FuelTValue;
    touchgfx::TextArea FuelTDescriptor;
    touchgfx::TextArea BatIndicator;
    touchgfx::TextArea MilIndicator;
    touchgfx::TextArea OilIndicator;
    touchgfx::TextAreaWithOneWildcard MinOilPValue;

    /*
     * Wildcard Buffers
     */
    static const uint16_t LAMBDAVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar LambdaValueBuffer[LAMBDAVALUE_SIZE];
    static const uint16_t SPEEDVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar SpeedValueBuffer[SPEEDVALUE_SIZE];
    static const uint16_t RPM1_SIZE = 2;
    touchgfx::Unicode::UnicodeChar rpm1Buffer[RPM1_SIZE];
    static const uint16_t RPM2_SIZE = 2;
    touchgfx::Unicode::UnicodeChar rpm2Buffer[RPM2_SIZE];
    static const uint16_t RPM3_SIZE = 2;
    touchgfx::Unicode::UnicodeChar rpm3Buffer[RPM3_SIZE];
    static const uint16_t RPM4_SIZE = 2;
    touchgfx::Unicode::UnicodeChar rpm4Buffer[RPM4_SIZE];
    static const uint16_t RPM5_SIZE = 2;
    touchgfx::Unicode::UnicodeChar rpm5Buffer[RPM5_SIZE];
    static const uint16_t RPM6_SIZE = 2;
    touchgfx::Unicode::UnicodeChar rpm6Buffer[RPM6_SIZE];
    static const uint16_t RPM7_SIZE = 2;
    touchgfx::Unicode::UnicodeChar rpm7Buffer[RPM7_SIZE];
    static const uint16_t RPM8_SIZE = 2;
    touchgfx::Unicode::UnicodeChar rpm8Buffer[RPM8_SIZE];
    static const uint16_t IATVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar IATValueBuffer[IATVALUE_SIZE];
    static const uint16_t OILTEMPVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar OILTempValueBuffer[OILTEMPVALUE_SIZE];
    static const uint16_t OILPRESSUREVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar OILPressureValueBuffer[OILPRESSUREVALUE_SIZE];
    static const uint16_t BATTERYVOLTAGE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar BatteryVoltageBuffer[BATTERYVOLTAGE_SIZE];
    static const uint16_t RPMVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar RPMValueBuffer[RPMVALUE_SIZE];
    static const uint16_t CLTVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar CLTValueBuffer[CLTVALUE_SIZE];
    static const uint16_t FUELPVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar FuelPValueBuffer[FUELPVALUE_SIZE];
    static const uint16_t TPSNUMBERVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar TpsNumberValueBuffer[TPSNUMBERVALUE_SIZE];
    static const uint16_t MINFUELPVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar MinFuelPValueBuffer[MINFUELPVALUE_SIZE];
    static const uint16_t MAXOILTVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar MaxOilTValueBuffer[MAXOILTVALUE_SIZE];
    static const uint16_t MAXCLTVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar MaxCltValueBuffer[MAXCLTVALUE_SIZE];
    static const uint16_t MAXRPMVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar MaxRPMValueBuffer[MAXRPMVALUE_SIZE];
    static const uint16_t MAXSPEEDVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar MaxSpeedValueBuffer[MAXSPEEDVALUE_SIZE];
    static const uint16_t FUELTVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar FuelTValueBuffer[FUELTVALUE_SIZE];
    static const uint16_t MINOILPVALUE_SIZE = 5;
    touchgfx::Unicode::UnicodeChar MinOilPValueBuffer[MINOILPVALUE_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // MAINVIEWBASE_HPP
