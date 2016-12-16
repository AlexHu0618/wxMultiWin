/***************************************************************
 * Name:      wxMultiWinMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Alex (jthu4alex@163.com)
 * Created:   2016-12-12
 * Copyright: Alex (www.gzrobot.net)
 * License:
 **************************************************************/

#include "wxMultiWinMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(wxMultiWinFrame)
#include <wx/bitmap.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(wxMultiWinFrame)
const long wxMultiWinFrame::ID_BUTTON1 = wxNewId();
const long wxMultiWinFrame::ID_SLIDER1 = wxNewId();
const long wxMultiWinFrame::ID_TEXTCTRL1 = wxNewId();
const long wxMultiWinFrame::ID_MENUITEM1 = wxNewId();
const long wxMultiWinFrame::idMenuAbout = wxNewId();
const long wxMultiWinFrame::ID_STATUSBAR1 = wxNewId();
const long wxMultiWinFrame::ID_BITMAPBUTTON1 = wxNewId();
const long wxMultiWinFrame::ID_BITMAPBUTTON2 = wxNewId();
const long wxMultiWinFrame::ID_TOOLBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(wxMultiWinFrame,wxFrame)
    //(*EventTable(wxMultiWinFrame)
    //*)
END_EVENT_TABLE()

wxMultiWinFrame::wxMultiWinFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(wxMultiWinFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxBoxSizer* BoxSizer1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE | wxMAXIMIZE, _T("wxID_ANY"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Button1 = new wxButton(this, ID_BUTTON1, _("Label"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider1 = new wxSlider(this, ID_SLIDER1, 0, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER1"));
    BoxSizer1->Add(Slider1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    BoxSizer1->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    ToolBar1 = new wxToolBar(this, ID_TOOLBAR1, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxNO_BORDER, _T("ID_TOOLBAR1"));
    ToolBar1->SetToolBitmapSize(wxSize(-1,48));
    BtnUser = new wxBitmapButton(ToolBar1, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T(".\\resources\\icons\\user.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    ToolBar1->AddControl(BtnUser);
    BtnSetting = new wxBitmapButton(ToolBar1, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T(".\\resources\\icons\\setting.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
    //ToolBar1->AddControl(BtnSetting);
    /***** add BtnSetting to the ToolBar1 if the user is administrator  *******/
    LoginDia = new LoginDialog(this);
    LoginDia->ShowModal();
    if(LoginDia->IsA)
    {
        ToolBar1->AddControl(BtnSetting);
    }
    /*************************************************************************/
    ToolBar1->Realize();
    SetToolBar(ToolBar1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);
    Center();

    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxMultiWinFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxMultiWinFrame::OnAbout);
    //*)
}

wxMultiWinFrame::~wxMultiWinFrame()
{
    //(*Destroy(wxMultiWinFrame)
    //*)
}

void wxMultiWinFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void wxMultiWinFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void wxMultiWinFrame::AddSettingBtn()
{

}
