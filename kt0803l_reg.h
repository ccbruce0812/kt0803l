#ifndef KT0803L_REG_H
#define KT0803L_REG_H

#ifdef __cplusplus
extern "C" {
#endif

//KT0803L's Register addresses & maps
#define KT0803L_REG_ADDR_00		(0x00)
#define KT0803L_REG_ADDR_01		(0x01)
#define KT0803L_REG_ADDR_02		(0x02)
#define KT0803L_REG_ADDR_04		(0x04)
#define KT0803L_REG_ADDR_0B		(0x0b)
#define KT0803L_REG_ADDR_0C		(0x0c)
#define KT0803L_REG_ADDR_0E		(0x0e)
#define KT0803L_REG_ADDR_0F		(0x0f)
#define KT0803L_REG_ADDR_10		(0x10)
#define KT0803L_REG_ADDR_12		(0x12)
#define KT0803L_REG_ADDR_13		(0x13)
#define KT0803L_REG_ADDR_14		(0x14)
#define KT0803L_REG_ADDR_15		(0x15)
#define KT0803L_REG_ADDR_16		(0x16)
#define KT0803L_REG_ADDR_17		(0x17)
#define KT0803L_REG_ADDR_1E		(0x1e)
#define KT0803L_REG_ADDR_26		(0x26)
#define KT0803L_REG_ADDR_27		(0x27)

typedef union {
	struct {
		unsigned char CHSEL_8_1		: 8;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_00;

typedef union {
	struct {
		unsigned char CHSEL_11_9	: 3;
		unsigned char PGA_2_0		: 3;
		unsigned char RFGAIN_1_0	: 2;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_01;

typedef union {
	struct {
		unsigned char PHTCNST		: 1;
		unsigned char unused0		: 1;
		unsigned char PLTADJ		: 1;
		unsigned char MUTE			: 1;
		unsigned char unused1		: 2;
		unsigned char RFGAIN_3		: 1;
		unsigned char CHSEL_0		: 1;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_02;

typedef union {
	struct {
		unsigned char BASS_1_0		: 1;
		unsigned char unused0		: 3;
		unsigned char PGA_LSB_1_0	: 2;
		unsigned char MONO			: 1;
		unsigned char ALC_EN		: 1;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_04;

typedef union {
	struct {
		unsigned char unused0		: 2;
		unsigned char AUTO_PADN		: 1;
		unsigned char unused1		: 2;
		unsigned char PDPA			: 1;
		unsigned char unused2		: 1;
		unsigned char STANDBY		: 1;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_0B;

typedef union {
	struct {
		unsigned char ALC_ATTACH_TIME_3_0	: 4;
		unsigned char ALC_DECAY_TIME_3_0	: 4;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_0C;

typedef union {
	struct {
		unsigned char unused0		: 1;
		unsigned char PA_BIAS		: 1;
		unsigned char unused1		: 6;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_0E;

typedef union {
	struct {
		unsigned char unused0		: 2;
		unsigned char SLNCID		: 1;
		unsigned char unused1		: 1;
		unsigned char PW_OK			: 1;
		unsigned char unused2		: 3;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_0F;

typedef union {
	struct {
		unsigned char PGAMOD		: 1;
		unsigned char unused0		: 7;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_10;

typedef union {
	struct {
		unsigned char SW_MOD		: 1;
		unsigned char SLNCTHH_2_0	: 3;
		unsigned char SLNCTHL_2_0	: 3;
		unsigned char SLNCDIS		: 1;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_12;

typedef union {
	struct {
		unsigned char unused0		: 2;
		unsigned char PA_CTRL		: 1;
		unsigned char unused1		: 4;
		unsigned char RFGAIN_2		: 1;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_13;

typedef union {
	struct {
		unsigned char SLNCTIME_3		: 1;
		unsigned char unused0			: 1;
		unsigned char SLNCCNTHIGH_2_0	: 3;
		unsigned char SLNCTIME_2_0		: 3;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_14;

typedef union {
	struct {
		unsigned char unused0			: 5;
		unsigned char ALCCMPGAIN_2_0	: 3;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_15;

typedef union {
	struct {
		unsigned char SLNCCNTLOW_2_0	: 3;
		unsigned char unused0			: 5;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_16;

typedef union {
	struct {
		unsigned char unused0		: 3;
		unsigned char XTAL_SEL		: 1;
		unsigned char unused1		: 1;
		unsigned char AU_ENHANCE	: 1;
		unsigned char FDEV			: 1;
		unsigned char unused2		: 1;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_17;

typedef union {
	struct {
		unsigned char REF_CLK_3_0	: 4;
		unsigned char unused0		: 1;
		unsigned char XTALD			: 1;
		unsigned char DCLK			: 1;
		unsigned char unused1		: 1;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_1E;

typedef union {
	struct {
		unsigned char unused0		: 1;
		unsigned char ALCHIGHTH_2_0	: 3;
		unsigned char unused1		: 1;
		unsigned char ALCHOLD_2_0	: 3;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_26;

typedef union {
	struct {
		unsigned char ALCLOWTH_3_0	: 4;
		unsigned char unused0		: 4;
	} f;
	unsigned char b;
} __attribute__((__packed__)) KT0803L_REG_27;

#ifdef __cplusplus
}
#endif

#endif
