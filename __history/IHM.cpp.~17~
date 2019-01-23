//---------------------------------------------------------------------------


#pragma hdrstop
#include "IHM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	serveur->Active = true;
	memoTCP->Lines->Add("Serveur en marche !");
	timerTCP->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnCoRS232Click(TObject *Sender)
{
	bool co=MonObjetRS232.ouverture();

	if(co==true){
		shpRS232->Brush->Color=clLime;
	}
	else
	{
		shpRS232->Brush->Color=clRed;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnDecoRS232Click(TObject *Sender)
{
   MonObjetRS232.fermeture();
   shpRS232->Brush->Color=clRed;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
	serveur->Active = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::serveurConnect(TIdContext *AContext)
{
	memoTCP->Lines->Add("Connexion effectuée");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::serveurExecute(TIdContext *AContext)
{
	memoTCP->Lines->Add("Message reçu :");
	UnicodeString d_assaut = AContext->Connection->Socket->ReadLn();
	memoTCP->Lines->Add(d_assaut);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::serveurDisconnect(TIdContext *AContext)
{
	memoTCP->Lines->Add("Déconnexion effectuée");
}
//---------------------------------------------------------------------------


