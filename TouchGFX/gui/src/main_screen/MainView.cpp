#include <gui/main_screen/MainView.hpp>
#include <message_types.h>

#include <touchgfx/Color.hpp>

static int color_index = 0;
static int rev_limit = 9000;

static int prev_rpm = 100;
static int prev_max_rpm = 100;
static int prev_speed = 0;
static int prev_max_speed = 0;
static int prev_clt = 0;
static int prev_max_clt = 0;
static float prev_lambda = 0.01f;

static int prev_oil_tmp = 0;
static int prev_max_oil_tmp = 0;
static float prev_oil_press = 0;
static int prev_fuel_tmp = 0;
static float prev_fuel_press = 0;
static float prev_min_fuel_press = 0;
static int prev_iat = 0;
static int prev_tps = 0;
static float prev_batt_v = 0;

static bool prev_mil_indicator = true;
static bool prev_oil_indicator = true;
static bool prev_bat_indicator = true;

MainView::MainView()
{
    // Support of larger displays for this example
    // is handled by showing a black box in the
    // unused part of the display.
    if (HAL::DISPLAY_WIDTH > backgroundImage.getWidth() ||
            HAL::DISPLAY_HEIGHT > backgroundImage.getHeight())
    {
        backgroundBox.setVisible(true);
    }
}

void MainView::setupScreen()
{
}

void MainView::tearDownScreen()
{
}

static colortype getBlackColor()
{
	colortype black_color = touchgfx::Color::getColorFrom24BitRGB(0,0,0);
}

static colortype getColorFromRevLimit()
{

	color_index ++;
	if(color_index >= 3)
	{
		color_index = 0;
	}

	colortype red_color = touchgfx::Color::getColorFrom24BitRGB(255,0,0);
	colortype black_color = touchgfx::Color::getColorFrom24BitRGB(0,0,0);
	colortype white_color = touchgfx::Color::getColorFrom24BitRGB(255,255,255);

	colortype color_to_set;

	if(color_index == 0)
	{
		color_to_set = red_color;
	}
	if(color_index == 1)
	{
		color_to_set = black_color;
	}
	if(color_index == 2)
	{
		color_to_set = white_color;
	}

	return color_to_set;
}

void MainView::updateSettings(uint8_t* settings)
{
	settings_message* new_settings = (settings_message*) settings;

	rev_limit = (int)new_settings->rpm_limit;

	RPMProgressBar.setRange(0, (int)(new_settings->rpm8*1000.0f), 0, 0);
	RPMProgressBar.invalidate();

	Unicode::snprintf(rpm1Buffer, RPM1_SIZE, "%d", new_settings->rpm1);
	rpm1.resizeToCurrentText();
	rpm1.invalidate();
	Unicode::snprintf(rpm2Buffer, RPM2_SIZE, "%d", new_settings->rpm2);
	rpm2.resizeToCurrentText();
	rpm2.invalidate();
	Unicode::snprintf(rpm3Buffer, RPM3_SIZE, "%d", new_settings->rpm3);
	rpm3.resizeToCurrentText();
	rpm3.invalidate();
	Unicode::snprintf(rpm4Buffer, RPM4_SIZE, "%d", new_settings->rpm4);
	rpm4.resizeToCurrentText();
	rpm4.invalidate();
	Unicode::snprintf(rpm5Buffer, RPM5_SIZE, "%d", new_settings->rpm5);
	rpm5.resizeToCurrentText();
	rpm5.invalidate();
	Unicode::snprintf(rpm6Buffer, RPM6_SIZE, "%d", new_settings->rpm6);
	rpm6.resizeToCurrentText();
	rpm6.invalidate();
	Unicode::snprintf(rpm7Buffer, RPM7_SIZE, "%d", new_settings->rpm7);
	rpm7.resizeToCurrentText();
	rpm7.invalidate();
	Unicode::snprintf(rpm8Buffer, RPM8_SIZE, "%d", new_settings->rpm8);
	rpm8.resizeToCurrentText();
	rpm8.invalidate();

}

void MainView::updateVal(uint8_t* newValue)
{

	static bool background_is_black = false;
	display_values* values = (display_values*) newValue;

	bool on_rev_limiter = values->rpm >= rev_limit;
	if(on_rev_limiter)
	{
		background_is_black = false;
		backgroundBox.setColor(getColorFromRevLimit());
		backgroundBox.invalidate();
	}
	else if(!background_is_black){
		backgroundBox.setColor(getBlackColor());
		backgroundBox.invalidate();
		background_is_black = true;
	}

	if(values->rpm != prev_rpm) {
		prev_rpm = values->rpm;
		RPMProgressBar.setValue(values->rpm);
		RPMProgressBar.invalidate();

		Unicode::snprintf(RPMValueBuffer, RPMVALUE_SIZE, "%d", values->rpm);
		RPMValue.invalidate();
	}

	if(values->max_rpm != prev_max_rpm) {
		prev_max_rpm = values->max_rpm;
		Unicode::snprintf(MaxRPMValueBuffer, MAXRPMVALUE_SIZE, "%d", prev_max_rpm);
		MaxRPMValue.invalidate();
	}

	if(values->clt != prev_clt) {
		prev_clt = values->clt;
		Unicode::snprintf(CLTValueBuffer, CLTVALUE_SIZE, "%d", values->clt);
		if(values->clt >= 100){
			CLTValue.setColor(touchgfx::Color::getColorFrom24BitRGB(255,0,0));
		} else {
			CLTValue.setColor(touchgfx::Color::getColorFrom24BitRGB(255,255,255));
		}
		CLTValue.invalidate();
	}

	if(values->max_clt != prev_max_clt) {
		prev_max_clt = values->max_clt;
		Unicode::snprintf(MaxCltValueBuffer, MAXCLTVALUE_SIZE, "%d", values->max_clt);
		if(values->max_clt >= 100){
			MaxCltValue.setColor(touchgfx::Color::getColorFrom24BitRGB(255,0,0));
		}
		MaxCltValue.invalidate();
	}

	if(values->lambda != prev_lambda) {
		prev_lambda = values->lambda;
		Unicode::snprintfFloat(LambdaValueBuffer, LAMBDAVALUE_SIZE, "%.2f",values->lambda);
		LambdaValue.invalidate();
	}

	if(values->oil_tmp != prev_oil_tmp) {
		prev_oil_tmp = values->oil_tmp;
		Unicode::snprintf(OILTempValueBuffer, OILTEMPVALUE_SIZE, "%d",values->oil_tmp);
		OILTempValue.invalidate();
	}

	if(values->max_oil_tmp != prev_max_oil_tmp) {
		prev_max_oil_tmp = values->max_oil_tmp;
		Unicode::snprintf(MaxOilTValueBuffer, MAXOILTVALUE_SIZE, "%d",values->max_oil_tmp);
		MaxOilTValue.invalidate();
	}

	if(values->oil_press != prev_oil_press) {
		prev_oil_press = values->oil_press;
		Unicode::snprintfFloat(OILPressureValueBuffer, OILPRESSUREVALUE_SIZE, "%.1f",values->oil_press);
		OILPressureValue.invalidate();
	}

	if(values->fuel_tmp != prev_fuel_tmp) {
		prev_fuel_tmp = values->fuel_tmp;
		Unicode::snprintf(FuelTValueBuffer, FUELTVALUE_SIZE, "%d",values->fuel_tmp);
		FuelTValue.invalidate();
	}

	if(values->fuel_press != prev_fuel_press) {
		prev_fuel_press = values->fuel_press;
		Unicode::snprintfFloat(FuelPValueBuffer, FUELPVALUE_SIZE, "%.1f",values->fuel_press);
		FuelPValue.invalidate();
	}

	if(values->min_fuel_press != prev_min_fuel_press) {
		prev_min_fuel_press = values->min_fuel_press;
		Unicode::snprintfFloat(MinFuelPValueBuffer, MINFUELPVALUE_SIZE, "%.1f",values->min_fuel_press);
		MinFuelPValue.invalidate();
	}

	if(values->speed != prev_speed) {
		prev_speed = values->speed;
		Unicode::snprintf(SpeedValueBuffer, SPEEDVALUE_SIZE, "%d",values->speed);
		SpeedValue.invalidate();
	}

	if(values->max_speed != prev_max_speed) {
		prev_max_speed = values->max_speed;
		Unicode::snprintf(MaxSpeedValueBuffer, MAXSPEEDVALUE_SIZE, "%d",values->max_speed);
		MaxSpeedValue.invalidate();
	}

	if(values->iat != prev_iat) {
		prev_iat = values->iat;
		Unicode::snprintf(IATValueBuffer, IATVALUE_SIZE, "%d",values->iat);
		IATValue.invalidate();
	}

	if(values->tps != prev_tps) {
		prev_tps = values->tps;
		TPSProgress.setValue(values->tps);
		RPMProgressBar.invalidate();
		Unicode::snprintf(TpsNumberValueBuffer, TPSNUMBERVALUE_SIZE, "%d",values->tps);
		TpsNumberValue.invalidate();
	}

	if(values->batt_v != prev_batt_v) {
		prev_batt_v = values->batt_v;
		Unicode::snprintfFloat(BatteryVoltageBuffer, BATTERYVOLTAGE_SIZE, "%.2f",values->batt_v);
		if(values->batt_v < 13){
			BatteryVoltage.setColor(touchgfx::Color::getColorFrom24BitRGB(255,0,0));
		} else {
			BatteryVoltage.setColor(touchgfx::Color::getColorFrom24BitRGB(255,255,255));
		}
		BatteryVoltage.invalidate();
	}

	if(values->mil_indicator != prev_mil_indicator) {
		prev_mil_indicator = values->mil_indicator;
		MilIndicator.setVisible(values->mil_indicator);
		MilIndicator.invalidate();
	}

	if(values->oil_indicator != prev_oil_indicator) {
		prev_oil_indicator = values->oil_indicator;
		OilIndicator.setVisible(values->oil_indicator);
		OilIndicator.invalidate();
	}

	if(values->bat_indicator != prev_bat_indicator) {
		prev_bat_indicator = values->bat_indicator;
		BatIndicator.setVisible(values->bat_indicator);
		BatIndicator.invalidate();
	}
}
