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
const long wxMultiWinFrame::ID_BUTTON2 = wxNewId();
const long wxMultiWinFrame::ID_BUTTON3 = wxNewId();
const long wxMultiWinFrame::ID_BUTTON4 = wxNewId();
const long wxMultiWinFrame::ID_STATICTEXT1 = wxNewId();
const long wxMultiWinFrame::ID_TEXTCTRL1 = wxNewId();
const long wxMultiWinFrame::ID_STATICTEXT2 = wxNewId();
const long wxMultiWinFrame::ID_TEXTCTRL2 = wxNewId();
const long wxMultiWinFrame::ID_STATICTEXT3 = wxNewId();
const long wxMultiWinFrame::ID_TEXTCTRL3 = wxNewId();
const long wxMultiWinFrame::ID_GRID1 = wxNewId();
const long wxMultiWinFrame::ID_STATICTEXT4 = wxNewId();
const long wxMultiWinFrame::ID_TEXTCTRL4 = wxNewId();
const long wxMultiWinFrame::ID_STATICTEXT5 = wxNewId();
const long wxMultiWinFrame::ID_TEXTCTRL5 = wxNewId();
const long wxMultiWinFrame::ID_GRID2 = wxNewId();
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
    wxBoxSizer* BoxSizer4;
    wxStaticBoxSizer* StaticBoxSizer2;
    wxBoxSizer* BoxSizer6;
    wxBoxSizer* BoxSizer5;
    wxBoxSizer* BoxSizer10;
    wxBoxSizer* BoxSizer7;
    wxBoxSizer* BoxSizer8;
    wxMenuItem* MenuItem2;
    wxBoxSizer* BoxSizer13;
    wxStaticBoxSizer* StaticBoxSizer4;
    wxMenuItem* MenuItem1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer11;
    wxMenu* Menu1;
    wxBoxSizer* BoxSizer12;
    wxBoxSizer* BoxSizer14;
    wxStaticBoxSizer* StaticBoxSizer3;
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer9;
    wxMenuBar* MenuBar1;
    wxStaticBoxSizer* StaticBoxSizer1;
    wxFlexGridSizer* FlexGridSizer1;
    wxBoxSizer* BoxSizer3;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Processing"));
    FlexGridSizer1 = new wxFlexGridSizer(0, 7, 0, 0);
    Button1 = new wxButton(this, ID_BUTTON1, _("Label"), wxDefaultPosition, wxSize(101,125), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    FlexGridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(54,20,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(this, ID_BUTTON2, _("Label"), wxDefaultPosition, wxSize(101,125), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    FlexGridSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(55,20,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button3 = new wxButton(this, ID_BUTTON3, _("Label"), wxDefaultPosition, wxSize(101,125), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    FlexGridSizer1->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(58,20,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button4 = new wxButton(this, ID_BUTTON4, _("Label"), wxDefaultPosition, wxSize(101,125), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    FlexGridSizer1->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer1->Add(FlexGridSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(StaticBoxSizer1, 1, wxALL|wxALIGN_TOP|wxALIGN_CENTER_HORIZONTAL, 5);
    BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer4 = new wxBoxSizer(wxVERTICAL);
    StaticBoxSizer2 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Label info"));
    BoxSizer8 = new wxBoxSizer(wxVERTICAL);
    BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("saomiaojiubiaoqian"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    BoxSizer9->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    BoxSizer9->Add(TextCtrl1, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer8->Add(BoxSizer9, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("chuangjianxinbiaoqian"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    BoxSizer10->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    BoxSizer10->Add(TextCtrl2, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer8->Add(BoxSizer10, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("saomiaoxinbiaoqian"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    BoxSizer11->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl3 = new wxTextCtrl(this, ID_TEXTCTRL3, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    BoxSizer11->Add(TextCtrl3, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer8->Add(BoxSizer11, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer2->Add(BoxSizer8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4->Add(StaticBoxSizer2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer3 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Info"));
    BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
    Grid1 = new wxGrid(this, ID_GRID1, wxDefaultPosition, wxDefaultSize, 0, _T("ID_GRID1"));
    Grid1->CreateGrid(4,1);
    Grid1->EnableEditing(false);
    Grid1->EnableGridLines(true);
    Grid1->SetRowLabelSize(150);
    Grid1->SetDefaultRowSize(30, true);
    Grid1->SetDefaultColSize(200, true);
    Grid1->SetColLabelValue(0, _("value"));
    Grid1->SetRowLabelValue(0, _("zongChengHao"));
    Grid1->SetRowLabelValue(1, _("zongShuLiang"));
    Grid1->SetRowLabelValue(2, _("ceShiChengGong"));
    Grid1->SetRowLabelValue(3, _("daiShuaXie"));
    Grid1->SetDefaultCellFont( Grid1->GetFont() );
    Grid1->SetDefaultCellTextColour( Grid1->GetForegroundColour() );
    BoxSizer6->Add(Grid1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer3->Add(BoxSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4->Add(StaticBoxSizer3, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3->Add(BoxSizer4, 1, wxALL|wxALIGN_TOP|wxALIGN_CENTER_HORIZONTAL, 5);
    BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
    StaticBoxSizer4 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("ECU Info"));
    BoxSizer7 = new wxBoxSizer(wxVERTICAL);
    BoxSizer12 = new wxBoxSizer(wxVERTICAL);
    BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("S19wenjianming"), wxDefaultPosition, wxSize(103,14), 0, _T("ID_STATICTEXT4"));
    BoxSizer13->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl4 = new wxTextCtrl(this, ID_TEXTCTRL4, _("Text"), wxDefaultPosition, wxSize(313,22), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    BoxSizer13->Add(TextCtrl4, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer12->Add(BoxSizer13, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
    StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("peizhiwenjianming"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    BoxSizer14->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl5 = new wxTextCtrl(this, ID_TEXTCTRL5, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    BoxSizer14->Add(TextCtrl5, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer12->Add(BoxSizer14, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer7->Add(BoxSizer12, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Grid2 = new wxGrid(this, ID_GRID2, wxDefaultPosition, wxDefaultSize, 0, _T("ID_GRID2"));
    Grid2->CreateGrid(8,2);
    Grid2->EnableEditing(false);
    Grid2->EnableGridLines(true);
    Grid2->SetRowLabelSize(150);
    Grid2->SetDefaultRowSize(30, true);
    Grid2->SetDefaultColSize(300, true);
    Grid2->SetColLabelValue(0, _("config"));
    Grid2->SetColLabelValue(1, _("read"));
    Grid2->SetRowLabelValue(0, _("zongChengHao"));
    Grid2->SetRowLabelValue(1, _("ruanjianbanbenhao"));
    Grid2->SetRowLabelValue(2, _("ruanjianjianhao"));
    Grid2->SetRowLabelValue(3, _("yingjianjianhao"));
    Grid2->SetRowLabelValue(4, _("biaodingjianhao"));
    Grid2->SetRowLabelValue(5, _("yingjianguzhangma"));
    Grid2->SetDefaultCellFont( Grid2->GetFont() );
    Grid2->SetDefaultCellTextColour( Grid2->GetForegroundColour() );
    BoxSizer7->Add(Grid2, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer4->Add(BoxSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer5->Add(StaticBoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3->Add(BoxSizer5, 2, wxALL|wxALIGN_TOP|wxALIGN_CENTER_HORIZONTAL, 5);
    BoxSizer1->Add(BoxSizer3, 3, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
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
    BtnUser = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T(".\\resources\\icons\\user.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    ToolBar1->AddControl(BtnUser);
    BtnSetting = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T(".\\resources\\icons\\setting.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
    BtnSetting->Disable();
    BtnSetting->Hide();
    ToolBar1->AddControl(BtnSetting);
    ToolBar1->Realize();
    SetToolBar(ToolBar1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);
    Center();

    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxMultiWinFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxMultiWinFrame::OnAbout);
    //*)

    LoginDia = new LoginDialog(this);
    LoginDia->ShowModal();
    if( LoginDia->IsA )
    {
        BtnSetting->Show();
        BtnSetting->Enable();
    }
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

void wxMultiWinFrame::OnGrid1Resize(wxSizeEvent& event)
{
    Grid1->Fit();
}
