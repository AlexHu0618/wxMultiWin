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
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

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
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(wxMultiWinFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WXMULTIWINMAIN_H
