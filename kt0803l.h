/*
	Description:
		A FM transmittor API for KT0803L.
	Author
		Bruce Hsu
*/

#ifndef KT0803L_H
#define KT0803L_H

#ifdef __cplusplus
extern "C" {
#endif

#include "kt0803l_reg.h"
#include "kt0803l_data.h"

//KT0803L's I2C addresses
#define KT0803L_ADDR				(0x3e)

void KT0803L_dump(void);

//Initialization
int KT0803L_init(const KT0803L_SETTING *pSetting);

//Frequency related
int KT0803L_setFreq(unsigned short freq);
int KT0803L_getFreq(unsigned short *pFreq);

//Output related
int KT0803L_setRFGain(unsigned char gain, KT0803L_BOOL isPABias);
int KT0803L_getRFGain(unsigned char *pGain, KT0803L_BOOL *pIsPABias);

int KT0803L_setAutoPADown(KT0803L_BOOL flag);
int KT0803L_isAutoPADown(KT0803L_BOOL *pFlag);

int KT0803L_PADown(KT0803L_BOOL flag);
int KT0803L_isPADown(KT0803L_BOOL *pFlag);

int KT0803L_mute(KT0803L_BOOL flag);
int KT0803L_isMute(KT0803L_BOOL *pFlag);

int KT0803L_setMono(KT0803L_BOOL flag);
int KT0803L_isMono(KT0803L_BOOL *pFlag);

int KT0803L_setBBLevel(unsigned char level);
int KT0803L_getBBLevel(unsigned char *pLevel);

int KT0803L_enableAUENHANCE(KT0803L_BOOL flag);
int KT0803L_isAUENHANCEEnable(KT0803L_BOOL *pFlag);

//Input related
int KT0803L_setALCSetting(const KT0803L_ALC_SETTING *pSetting);
int KT0803L_getALCSetting(KT0803L_ALC_SETTING *pSetting);

int KT0803L_enableALC(KT0803L_BOOL flag);
int KT0803L_isALCEnable(KT0803L_BOOL *pFlag);

int KT0803L_setPGAGain(unsigned char gain, KT0803L_BOOL is1dBStep);
int KT0803L_getPGAGain(unsigned char *pGain, KT0803L_BOOL *is1dBStep);

int KT0803L_setSDSetting(const KT0803L_SD_SETTING *pSetting);
int KT0803L_getSDSetting(KT0803L_SD_SETTING *pSetting);

int KT0803L_disableSD(KT0803L_BOOL flag);
int KT0803L_isSDDisable(KT0803L_BOOL *pFlag);

//Power related
int KT0803L_standby(KT0803L_BOOL flag);
int KT0803L_isStandby(KT0803L_BOOL *pFlag);

//Status related
int KT0803L_getStatus(KT0803L_BOOL *pIsPwrOk, KT0803L_BOOL *pIsSilence);

#ifdef __cplusplus
}
#endif

#endif
