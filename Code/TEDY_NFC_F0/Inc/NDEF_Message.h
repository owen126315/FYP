#ifndef __NDEF_Message_H
#define __NDEF_Message_H

#include "stm32f0xx_hal.h"
#include "NDEF_Record.h"
#include "NFC_Tag.h"
#include "string.h"
#include "stdlib.h"
#define MAX_NDEF_RECORDS 	4

struct NDEF_Message{
	uint8_t record_Count;
	struct NDEF_Record record[MAX_NDEF_RECORDS];
};

void NDEF_Message_Init(struct NDEF_Message *message);
int Get_NDEF_Message(uint8_t *data, uint8_t numBytes, struct NDEF_Message *message);
int NDEF_Message_AddRecord(struct NDEF_Record *record, struct NDEF_Message *message);
int NDEF_Message_GetEncodeSize(struct NDEF_Message *message);
void NDEF_Message_Encode(uint8_t *data, struct NDEF_Message *message); 
//struct NDEF_Message NDEF_Message_Create_Message(struct NDEF_Record *record);
#endif //__NDEF_Message_H
