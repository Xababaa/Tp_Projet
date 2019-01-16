//---------------------------------------------------------------------------

#ifndef IHMH
#define IHMH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "RS232.h"
#include <Vcl.ExtCtrls.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <IdCustomTCPServer.hpp>
#include <IdTCPServer.hpp>
#include <IdContext.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TButton *btnCoRS232;
	TButton *btnDecoRS232;
	TShape *shpRS232;
	TLabel *lblRS232;
	TMemo *memoTCP;
	TTimer *timerTCP;
	TButton *Button1;
	TIdTCPServer *serveur;
	void __fastcall btnCoRS232Click(TObject *Sender);
	void __fastcall btnDecoRS232Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall serveurConnect(TIdContext *AContext);
	void __fastcall serveurExecute(TIdContext *AContext);
	void __fastcall serveurDisconnect(TIdContext *AContext);


private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
	RS232 MonObjetRS232;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
