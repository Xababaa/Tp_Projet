//---------------------------------------------------------------------------

#pragma hdrstop

#include "RS232.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
bool RS232::ouverture()
{
   hcom = CreateFile("COM1", GENERIC_READ |GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_FLAG_NO_BUFFERING, NULL); //on initialise le port com

   if(hcom == INVALID_HANDLE_VALUE) {
		return false;
   }

   GetCommState(hcom, &serie);
   serie.BaudRate = 9600; //on param�tre la classe DCB
   serie.ByteSize = 8;
   serie.Parity = NOPARITY;
   serie.StopBits = ONESTOPBIT;
   SetCommState(hcom, &serie);

   return true;

}
//------------------------------------------------------------------------------

bool RS232::ecriture(char* str, int taille)
{
	if(hcom ==INVALID_HANDLE_VALUE){
		  return false;
    }

	unsigned long pt = 0;

	/*over.Internal = 0;
	over.InternalHigh = 0;
	over.Offset = 0;
	over.OffsetHigh = 0;
	over.Pointer = NULL;
	over.hEvent = NULL;*/

	WriteFile(hcom, str, taille, &pt, NULL);//permet d'envoyer les donn�es sur le port
	PurgeComm(hcom, PURGE_TXCLEAR);

	return true;

}
//------------------------------------------------------------------------------
void RS232::fermeture()
{
	CloseHandle(hcom);

}
//------------------------------------------------------------------------------
char* RS232::lecture() //permet de recevoir ce qui arrive sur le port com
{
	int taille = 10;
	char *chaine;
	unsigned long pt;

	pt = 0;
	chaine = new char[taille+1];
	chaine[0]='\0';
	ReadFile(hcom,chaine,taille,&pt,NULL);
	PurgeComm(hcom,PURGE_RXCLEAR);

	return chaine;
}
