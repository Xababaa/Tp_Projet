object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 300
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object shpRS232: TShape
    Left = 104
    Top = 41
    Width = 33
    Height = 49
    Shape = stCircle
  end
  object lblRS232: TLabel
    Left = 8
    Top = 8
    Width = 85
    Height = 13
    Caption = 'Connexion RS232'
  end
  object btnCoRS232: TButton
    Left = 8
    Top = 41
    Width = 75
    Height = 25
    Caption = 'Connexion'
    TabOrder = 0
    OnClick = btnCoRS232Click
  end
  object btnDecoRS232: TButton
    Left = 8
    Top = 72
    Width = 75
    Height = 25
    Caption = 'D'#233'connexion'
    TabOrder = 1
    OnClick = btnDecoRS232Click
  end
  object memoTCP: TMemo
    Left = 456
    Top = 160
    Width = 161
    Height = 132
    Lines.Strings = (
      'memoTCP')
    ReadOnly = True
    TabOrder = 2
    OnChange = memoTCPChange
  end
  object Button1: TButton
    Left = 456
    Top = 120
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 3
  end
  object timerTCP: TTimer
    Left = 576
    Top = 104
  end
  object serveur: TIdTCPServer
    Bindings = <>
    DefaultPort = 0
    OnConnect = serveurConnect
    OnDisconnect = serveurDisconnect
    OnExecute = serveurExecute
    Left = 336
    Top = 248
  end
end
