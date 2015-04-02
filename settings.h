/*
 * Settings
 *
 * created on 2012-5-14 by fgb (derived from or_const.h by apullin)
 */

#ifndef __SETTINGS_H
#define __SETTINGS_H

#define IDENT_STR "BIOMIMETICS-ROACH;AMS-ENC;"

/////// Radio settings ///////
#define RADIO_CHANNEL       0x19
#define RADIO_PAN_ID        0x2050
#define RADIO_SRC_ADDR      0x2052


#define RADIO_TXPQ_MAX_SIZE   10
#define RADIO_RXPQ_MAX_SIZE   10

#define SYS_SERVICE_T1
#define SYS_SERVICE_T4
#define SYS_SERVICE_T5
#define SYS_SERVICE_T6

//Telemetry type setup
#define TELEM_TYPE orTelemStruct_t
#define TELEM_INCLUDE "or_telem.h"
#define TELEMPACKFUNC(x) orTelemGetData(x)

// Encoders Setup
//Left legs
#define LEFT_LEGS_PID_NUM       0       //PID module index is 0-3
#define LEFT_LEGS_ENC_NUM       0       //amsEnc module index is 0-3
#define AMS_ENC_OFFSET_1        7706
#define LEFT_LEGS_ENC_FLIP      0       //"forward" reversed for left
#define LEFT_LEGS_PWM_FLIP      1
#define LEFT_LEGS_TIH_CHAN      2       //tiH module index is 1-4
//Right legs
#define RIGHT_LEGS_PID_NUM      1       //PID module index is 0-3
#define RIGHT_LEGS_ENC_NUM      1       //amsEnc module index is 0-3
#define AMS_ENC_OFFSET_0        5758
#define RIGHT_LEGS_FLIP         1       //"forward" regular for right
#define RIGHT_LEGS_PWM_FLIP     0
#define RIGHT_LEGS_TIH_CHAN     1       //tiH module index is 1-4

//Temporary, to be removed when leg_ctrl is changed to use above defines
#define OCTOROACH_LEG1_MOTOR_CHANNEL 1
#define OCTOROACH_LEG2_MOTOR_CHANNEL 2

#define MOVE_QUEUE_SIZE 16

#endif //_SETTINGS_H