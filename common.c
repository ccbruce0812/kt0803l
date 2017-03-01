#include "common.h"
#include "kt0803l.h"

/*
  The reading procedure of KT0803L is slightly different from
  standard way, so we cannot use i2c_slave_read() here.
 */
int readReg(unsigned char regAddr, unsigned char *pData) {
	if(!pData) {
		DBG("Bad argument. Check your code.\n");
		assert(false);
	}
	
	i2c_start();
	if(!i2c_write(KT0803L_ADDR<<1)) {
		DBG("Failed to send write address.\n");
		goto failed;
	}
	if(!i2c_write(regAddr)) {
		DBG("Failed to send register address.\n");
		goto failed;
	}
	i2c_start();
	if(!i2c_write((KT0803L_ADDR<<1)|0x1)) {
		DBG("Failed to send read address.\n");
		goto failed;
	}
	*pData=i2c_read(true);
	i2c_stop();
	
	return 0;

failed:
	i2c_stop();
	return -1;
}

int writeReg(unsigned char regAddr, unsigned char data) {
	unsigned char buf[2]={regAddr, data};

	if(!i2c_slave_write(KT0803L_ADDR, buf, sizeof(buf)))
		goto failed;

	return 0;

failed:
	return -1;
}
