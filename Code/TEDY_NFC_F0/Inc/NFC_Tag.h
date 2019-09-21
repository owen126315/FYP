#ifndef __NFC_Tag_H
#define __NFC_Tag_H

#include "NDEF_Message.h"

#define TAG_TYPE_MIFARE_CLASSIC				(0)
#define TAG_TYPE_MIFARE_ULTRALIGHT		(2)

struct NFC_Tag{
	uint8_t type;
	uint8_t *uid;
	uint8_t uid_len;
	struct NDEF_Message *ndefMessage;
};

void NFC_Clear_Tag(struct NFC_Tag *tag);
//char* NFC_Tag_GetText(struct NFC_Tag *tag);
#endif //NFC_Tag_H
