/***************************************************************
 * Name:      wxMultiWinApp.h
 * Purpose:   Defines Application Class
 * Author:    Alex (jthu4alex@163.com)
 * Created:   2016-12-12
 * Copyright: Alex (www.gzrobot.net)
 * License:
 **************************************************************/

#ifndef WXMULTIWINAPP_H
#define WXMULTIWINAPP_H

#include <wx/app.h>

class wxMultiWinApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // WXMULTIWINAPP_H
