/***************************************************************
 * Name:      wxMultiWinMain.h
 * Purpose:   Defines Application Frame
 * Author:    Alex (jthu4alex@163.com)
 * Created:   2016-12-12
 * Copyright: Alex (www.gzrobot.net)
 * License:
 **************************************************************/

#ifndef WXMULTIWINMAIN_H
#define WXMULTIWINMAIN_H

//(*Headers(wxMultiWinFrame)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/toolbar.h>
#include <wx/grid.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)
#include "LoginDialog.h"

class wxMultiWinFrame: public wxFrame
{
    public:

        wxMultiWinFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~wxMultiWinFrame();

    private:

        //(*Handlers(wxMultiWinFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnGrid1CellLeftClick(wxGridEvent& event);
        void OnGrid1Resize(wxSizeEvent& event);
        //*)

        //(*Identifiers(wxMultiWinFrame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT2;
        static const long ID_TEXTCTRL2;
        static const long ID_STATICTEXT3;
        static const long ID_TEXTCTRL3;
        static const long ID_GRID1;
        static const long ID_STATICTEXT4;
        static const long ID_TEXTCTRL4;
        static const long ID_STATICTEXT5;
        static const long ID_TEXTCTRL5;
        static const long ID_GRID2;
        static const long ID_MENUITEM1;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        static const long ID_BITMAPBUTTON1;
        static const long ID_BITMAPBUTTON2;
        static const long ID_TOOLBAR1;
        //*)

        //(*Declarations(wxMultiWinFrame)
        wxTextCtrl* TextCtrl4;
        wxToolBar* ToolBar1;
        wxButton* Button4;
        wxStaticText* StaticText2;
        wxButton* Button1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText3;
        wxGrid* Grid1;
        wxButton* Button2;
        wxGrid* Grid2;
        wxButton* Button3;
        wxStaticText* StaticText5;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl2;
        wxTextCtrl* TextCtrl1;
        wxTextCtrl* TextCtrl5;
        wxStaticText* StaticText4;
        wxTextCtrl* TextCtrl3;
        wxBitmapButton* BtnSetting;
        wxBitmapButton* BtnUser;
        //*)
        LoginDialog* LoginDia;

    public:
        void AddSettingBtn();

        DECLARE_EVENT_TABLE()
};

#endif // WXMULTIWINMAIN_H
