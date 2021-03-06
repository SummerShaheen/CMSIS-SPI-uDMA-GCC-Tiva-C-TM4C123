/*
 * Copyright (c) 2016, Mohamed Saleh
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Mohamed Saleh nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY Mohamed Saleh ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL Mohamed Saleh BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * File:			uDMAC.c
 * Author:		Mohamed Saleh (mohamedsaleh.elec@gmail.com).
 * Version:		1.0.0.
 * Description:	uDMA driver.
 */

#include "cmsis/LM4F120H5QR.h"
#include "hal/uDMA.h"
#include "hal/SPID.h"
#include "ERRH/ERRH.h"

int main(void) {
	uint16_t buffer_tx[UDMA_BUFFER_SIZE];
	
	UDMA_Init();
	SPID_Init(SSI_2);
	SPID_Enable(SSI_2);
	buffer_tx[0] = 2;
	buffer_tx[1] = 10;
	buffer_tx[2] = 5;
	buffer_tx[3] = 12;
	buffer_tx[4] = 18;
	buffer_tx[5] = 14;
	buffer_tx[6] = 6;
	buffer_tx[7] = 8;
	UDMA_SetSSI2TxData(buffer_tx);
	UDMA_SetChSwRqt(13);
	while(1)
	{

	}
	return 0;
}
