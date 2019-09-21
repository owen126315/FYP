#include "NFC_Tag.h"

//char* NFC_Tag_GetText(struct NFC_Tag *tag)
//{
//	if(tag->ndefMessage == NULL)
//		return NULL;
//	
//	for(int i=0; i< tag->ndefMessage->record_Count; i++)
//	{
//		for(int j=0; j < tag->ndefMessage->record[i].payloadLength; j++)
//		{
//			if(tag->ndefMessage->record[i].payload[j])
//		}
//	}
//}

void NFC_Clear_Tag(struct NFC_Tag *tag)
{
	if(tag->ndefMessage != NULL)
	{
		for(int i=0; i<tag->ndefMessage->record_Count;i++)
		{
			memset(tag->ndefMessage->record[i].payload, 0, tag->ndefMessage->record[i].payloadLength);
			
			free(tag->ndefMessage->record[i].payload);
			free(tag->ndefMessage->record[i].type);
//			free(tag->ndefMessage->record[i].id);
		}
		tag->ndefMessage->record_Count = 0;
		free(tag->uid);
		tag->type = NULL;
		tag->uid_len = NULL;
	}
}
