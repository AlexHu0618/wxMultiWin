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
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/toolbar.h>
#include <wx/slider.h>
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
        //*)

        //(*Identifiers(wxMultiWinFrame)
        static const long ID_BUTTON1;
        static const long ID_SLIDER1;
        static const long ID_TEXTCTRL1;
        static const long ID_MENUITEM1;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        static const long ID_BITMAPBUTTON1;
        static const long ID_BITMAPBUTTON2;
        static const long ID_TOOLBAR1;
        //*)

        //(*Declarations(wxMultiWinFrame)
        wxSlider* Slider1;
        wxToolBar* ToolBar1;
        wxButton* Button1;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl1;
        wxBitmapButton* BtnSetting;
        wxBitmapButton* BtnUser;
        //*)
        LoginDialog* LoginDia;

    public:
        void AddSettingBtn();

        DECLARE_EVENT_TABLE()
};

#endif // WXMULTIWINMAIN_H
