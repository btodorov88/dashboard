#include <stdbool.h>

#ifndef __MESSAGE_TYPES_H
#define __MESSAGE_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
   int    rpm;
   int    max_rpm;
   int    clt;
   int    max_clt;
   int    speed;
   int    max_speed;
   float  lambda;
   int    oil_tmp;
   int    max_oil_tmp;
   float  oil_press;
   float  min_oil_press;
   int    fuel_tmp;
   float  fuel_press;
   float  min_fuel_press;
   int    iat;
   int	  tps;
   float  batt_v;
   bool   bat_indicator;
   bool   oil_indicator;
   bool   mil_indicator;
} display_values;

typedef struct {
	int    rpm_limit;
	int    rpm1;
	int    rpm2;
	int    rpm3;
	int    rpm4;
	int    rpm5;
	int    rpm6;
	int    rpm7;
	int    rpm8;
	int has_float;
} settings_message;


#ifdef __cplusplus
}
#endif

#endif /* __MESSAGE_TYPES_h */
