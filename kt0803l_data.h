#ifndef KT0803L_DATA_H
#define KT0803L_DATA_H

#ifdef __cplusplus
extern "C" {
#endif

//Data types
#define KT0803L_BOOL		unsigned char
#define KT0803L_TRUE		(0xff)
#define KT0803L_FALSE		(0x00)

#define KT0803L_OK			(0)
#define KT0803L_ERR_FAILED	(-1)

enum {
	KT0803L_CLK_FREQ_32_768KHZ=0,
	KT0803L_CLK_FREQ_6_5MHZ,
	KT0803L_CLK_FREQ_7_6MHZ,
	KT0803L_CLK_FREQ_12MHZ,
	KT0803L_CLK_FREQ_13MHZ,
	KT0803L_CLK_FREQ_15_2MHZ,
	KT0803L_CLK_FREQ_19_2MHZ,
	KT0803L_CLK_FREQ_24MHZ,
	KT0803L_CLK_FREQ_26MHZ
};

enum {
	KT0803L_SD_TIME_50MS=0,
	KT0803L_SD_TIME_100MS,
	KT0803L_SD_TIME_200MS,
	KT0803L_SD_TIME_400MS,
	KT0803L_SD_TIME_1S,
	KT0803L_SD_TIME_2S,
	KT0803L_SD_TIME_4S,
	KT0803L_SD_TIME_8S,
	KT0803L_SD_TIME_16S,
	KT0803L_SD_TIME_24S,
	KT0803L_SD_TIME_32S,
	KT0803L_SD_TIME_40S,
	KT0803L_SD_TIME_48S,
	KT0803L_SD_TIME_56S,
	KT0803L_SD_TIME_60S,
	KT0803L_SD_TIME_64S,
};

enum {
	KT0803L_SD_LTH_0_25MV=0,
	KT0803L_SD_LTH_0_5MV,
	KT0803L_SD_LTH_1MV,
	KT0803L_SD_LTH_2MV,
	KT0803L_SD_LTH_4MV,
	KT0803L_SD_LTH_8MV,
	KT0803L_SD_LTH_16MV,
	KT0803L_SD_LTH_32MV
};

enum {
	KT0803L_SD_HTH_0_5MV=0,
	KT0803L_SD_HTH_1MV,
	KT0803L_SD_HTH_2MV,
	KT0803L_SD_HTH_4MV,
	KT0803L_SD_HTH_8MV,
	KT0803L_SD_HTH_16MV,
	KT0803L_SD_HTH_32MV,
	KT0803L_SD_HTH_64MV
};

enum {
	KT0803L_SD_LCNT_1=0,
	KT0803L_SD_LCNT_2,
	KT0803L_SD_LCNT_4,
	KT0803L_SD_LCNT_8,
	KT0803L_SD_LCNT_16,
	KT0803L_SD_LCNT_32,
	KT0803L_SD_LCNT_64,
	KT0803L_SD_LCNT_128
};

enum {
	KT0803L_SD_HCNT_15=0,
	KT0803L_SD_HCNT_31,
	KT0803L_SD_HCNT_63,
	KT0803L_SD_HCNT_127,
	KT0803L_SD_HCNT_255,
	KT0803L_SD_HCNT_511,
	KT0803L_SD_HCNT_1023,
	KT0803L_SD_HCNT_2047
};

enum {
	KT0803L_BB_DISABLE=0,
	KT0803L_BB_LVL_5DB,
	KT0803L_BB_LVL_11DB,
	KT0803L_BB_LVL_17DB
};

enum {
	KT0803L_PGA_GAIN_12DB=0x1f,
	KT0803L_PGA_GAIN_11DB=0x1e,
	KT0803L_PGA_GAIN_10DB=0x1d,
	KT0803L_PGA_GAIN_9DB=0x1c,
	KT0803L_PGA_GAIN_8DB=0x1b,
	KT0803L_PGA_GAIN_7DB=0x1a,
	KT0803L_PGA_GAIN_6DB=0x19,
	KT0803L_PGA_GAIN_5DB=0x18,
	KT0803L_PGA_GAIN_4DB=0x17,
	KT0803L_PGA_GAIN_3DB=0x16,
	KT0803L_PGA_GAIN_2DB=0x15,
	KT0803L_PGA_GAIN_1DB=0x14,
	KT0803L_PGA_GAIN_0DB=0x00,
	KT0803L_PGA_GAIN_M1DB=0x01,
	KT0803L_PGA_GAIN_M2DB=0x02,
	KT0803L_PGA_GAIN_M3DB=0x03,
	KT0803L_PGA_GAIN_M4DB=0x04,
	KT0803L_PGA_GAIN_M5DB=0x05,
	KT0803L_PGA_GAIN_M6DB=0x06,
	KT0803L_PGA_GAIN_M7DB=0x07,
	KT0803L_PGA_GAIN_M8DB=0x08,
	KT0803L_PGA_GAIN_M9DB=0x09,
	KT0803L_PGA_GAIN_M10DB=0x0a,
	KT0803L_PGA_GAIN_M11DB=0x0b,
	KT0803L_PGA_GAIN_M12DB=0x0c,
	KT0803L_PGA_GAIN_M13DB=0x0d,
	KT0803L_PGA_GAIN_M14DB=0x0e,
	KT0803L_PGA_GAIN_M15DB=0x0f
};

enum {
	KT0803L_RF_GAIN_95_5DBUV=0,
	KT0803L_RF_GAIN_96_5DBUV,
	KT0803L_RF_GAIN_97_5DBUV,
	KT0803L_RF_GAIN_98_2DBUV,
	KT0803L_RF_GAIN_98_9DBUV,
	KT0803L_RF_GAIN_100DBUV,
	KT0803L_RF_GAIN_101_5DBUV,
	KT0803L_RF_GAIN_102_8DBUV,
	KT0803L_RF_GAIN_105_1DBUV,
	KT0803L_RF_GAIN_105_6DBUV,
	KT0803L_RF_GAIN_106_2DBUV,
	KT0803L_RF_GAIN_106_5DBUV,
	KT0803L_RF_GAIN_107DBUV,
	KT0803L_RF_GAIN_107_4DBUV,
	KT0803L_RF_GAIN_107_7DBUV,
	KT0803L_RF_GAIN_108DBUV
};

enum {
	KT0803L_ALC_ATK_TIME_25US=0,
	KT0803L_ALC_ATK_TIME_50US,
	KT0803L_ALC_ATK_TIME_75US,
	KT0803L_ALC_ATK_TIME_100US,
	KT0803L_ALC_ATK_TIME_125US,
	KT0803L_ALC_ATK_TIME_150US,
	KT0803L_ALC_ATK_TIME_175US,
	KT0803L_ALC_ATK_TIME_200US,
	KT0803L_ALC_ATK_TIME_50MS,
	KT0803L_ALC_ATK_TIME_100MS,
	KT0803L_ALC_ATK_TIME_150MS,
	KT0803L_ALC_ATK_TIME_200MS,
	KT0803L_ALC_ATK_TIME_250MS,
	KT0803L_ALC_ATK_TIME_300MS,
	KT0803L_ALC_ATK_TIME_350MS,
	KT0803L_ALC_ATK_TIME_400MS
};

enum {
	KT0803L_ALC_DCY_TIME_25US=0,
	KT0803L_ALC_DCY_TIME_50US,
	KT0803L_ALC_DCY_TIME_75US,
	KT0803L_ALC_DCY_TIME_100US,
	KT0803L_ALC_DCY_TIME_125US,
	KT0803L_ALC_DCY_TIME_150US,
	KT0803L_ALC_DCY_TIME_175US,
	KT0803L_ALC_DCY_TIME_200US,
	KT0803L_ALC_DCY_TIME_50MS,
	KT0803L_ALC_DCY_TIME_100MS,
	KT0803L_ALC_DCY_TIME_150MS,
	KT0803L_ALC_DCY_TIME_200MS,
	KT0803L_ALC_DCY_TIME_250MS,
	KT0803L_ALC_DCY_TIME_300MS,
	KT0803L_ALC_DCY_TIME_350MS,
	KT0803L_ALC_DCY_TIME_400MS
};

enum {
	KT0803L_ALC_CMP_GAIN_6DB=0x04,
	KT0803L_ALC_CMP_GAIN_3DB=0x05,
	KT0803L_ALC_CMP_GAIN_0DB=0x06,
	KT0803L_ALC_CMP_GAIN_M3DB=0x07,
	KT0803L_ALC_CMP_GAIN_M6DB=0x00,
	KT0803L_ALC_CMP_GAIN_M9DB=0x01,
	KT0803L_ALC_CMP_GAIN_M12DB=0x02,
	KT0803L_ALC_CMP_GAIN_M15DB=0x03
};

enum {
	KT0803L_ALC_HOLD_TIME_50MS=0,
	KT0803L_ALC_HOLD_TIME_100MS,
	KT0803L_ALC_HOLD_TIME_150MS,
	KT0803L_ALC_HOLD_TIME_200MS,
	KT0803L_ALC_HOLD_TIME_1S,
	KT0803L_ALC_HOLD_TIME_5S,
	KT0803L_ALC_HOLD_TIME_10S,
	KT0803L_ALC_HOLD_TIME_15S
};

enum {
	KT0803L_ALC_LTH_0_25=0,
	KT0803L_ALC_LTH_0_2,
	KT0803L_ALC_LTH_0_15,
	KT0803L_ALC_LTH_0_1,
	KT0803L_ALC_LTH_0_05,
	KT0803L_ALC_LTH_0_03,
	KT0803L_ALC_LTH_0_02,
	KT0803L_ALC_LTH_0_01,
	KT0803L_ALC_LTH_0_005,
	KT0803L_ALC_LTH_0_001,
	KT0803L_ALC_LTH_0_0005,
	KT0803L_ALC_LTH_0_0001
};

enum {
	KT0803L_ALC_HTH_0_6=0,
	KT0803L_ALC_HTH_0_5,
	KT0803L_ALC_HTH_0_4,
	KT0803L_ALC_HTH_0_3,
	KT0803L_ALC_HTH_0_2,
	KT0803L_ALC_HTH_0_1,
	KT0803L_ALC_HTH_0_05,
	KT0803L_ALC_HTH_0_01
};

typedef struct {
	KT0803L_BOOL useExtInductor;
	struct {
		KT0803L_BOOL isUpToSW;
		KT0803L_BOOL isXTAL;
		unsigned char freq;
	} clkSetting;
	KT0803L_BOOL isPLTAmpHigh;
	KT0803L_BOOL isPHTCNST50us;
	KT0803L_BOOL isFDEV112_5KHZ;
	KT0803L_BOOL isCHSELPAOff;
} KT0803L_SETTING;

typedef struct {
	unsigned char window;
	unsigned char lowThreshold;
	unsigned char highThreshold;
	unsigned char lowCount;
	unsigned char highCount;
} KT0803L_SD_SETTING;

typedef struct {
	unsigned char attackTime;
	unsigned char decayTime;
	unsigned char ALCCMPGain;
	unsigned char holdTime;
	unsigned char lowThreshold;
	unsigned char highThreshold;
} KT0803L_ALC_SETTING;

#ifdef __cplusplus
}
#endif

#endif