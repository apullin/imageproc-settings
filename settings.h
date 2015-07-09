/*
 * Settings
 *
 * created on 2012-5-14 by fgb (derived from or_const.h by apullin)
 */

#ifndef __SETTINGS_H
#define __SETTINGS_H

#define IDENT_STR "APULLIN-OCTOROACH;FREERTOS;EXPERIMENTAL"

/////// Radio settings ///////
/////// Radio settings ///////
#define RADIO_CHANNEL       0x19
#define RADIO_PAN_ID        0x2050
#define RADIO_SRC_ADDR      0x2052

#define RADIO_DST_ADDR      0x2051 //for compatibility, to be removed soon

#define RADIO_RX_QUEUE_MAX_SIZE 8
#define RADIO_TX_QUEUE_MAX_SIZE	8

#define CMD_QUEUE_MAX_SIZE      8

//Telemetry type setup
#define TELEM_TYPE orTelemStruct_t
#define TELEM_INCLUDE "or_telem.h"
#define TELEMPACKFUNC(x) orTelemGetData(x)

#endif //_SETTINGS_H