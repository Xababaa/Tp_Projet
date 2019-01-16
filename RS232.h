//---------------------------------------------------------------------------

#ifndef RS232H
#define RS232H
#include <windows.h>

//---------------------------------------------------------------------------
class RS232
{
	private:
		HANDLE hcom;
		DCB serie;
		OVERLAPPED over;

	public:
		bool ouverture();//permet d'initialiser le port com
		bool ecriture(char* str, int taille);//permet d'�crire dans le port com

		void fermeture();//permet de fermer le port com
		char* lecture();//permet d'initialiser le port com

};
#endif
