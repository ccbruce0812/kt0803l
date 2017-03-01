/*
 * BSD 3-Clause License
 * 
 * KT0803L driver for ESP8266
 * Copyright (c) 2017, ccbruce0812 (ccbruce@gmail.com)
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 * * Redistributions of source code must retain the above copyright notice, this
 *   list of conditions and the following disclaimer.
 * 
 * * Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 * 
 * * Neither the name of the copyright holder nor the names of its
 *   contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

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
