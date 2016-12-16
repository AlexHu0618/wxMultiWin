/***************************************************************
 * Name:      wxMultiWinApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Alex (jthu4alex@163.com)
 * Created:   2016-12-12
 * Copyright: Alex (www.gzrobot.net)
 * License:
 **************************************************************/

#include "wxMultiWinApp.h"

//(*AppHeaders
#include "wxMultiWinMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(wxMultiWinApp);

bool wxMultiWinApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
        wxMultiWinFrame* Frame = new wxMultiWinFrame(0);
        Frame->Show();
        SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
