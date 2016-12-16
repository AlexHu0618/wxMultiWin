#include "LoginDialog.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(LoginDialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(LoginDialog)
const long LoginDialog::ID_STATICTEXT1 = wxNewId();
const long LoginDialog::ID_TEXTCTRL1 = wxNewId();
const long LoginDialog::ID_STATICTEXT2 = wxNewId();
const long LoginDialog::ID_TEXTCTRL2 = wxNewId();
const long LoginDialog::ID_BUTTON1 = wxNewId();
const long LoginDialog::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(LoginDialog,wxDialog)
	//(*EventTable(LoginDialog)
	//*)
END_EVENT_TABLE()

LoginDialog::LoginDialog(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(LoginDialog)
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, id, _("Login"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetToolTip(_("your name"));
	SetHelpText(_("my name"));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	FlexGridSizer1 = new wxFlexGridSizer(0, 2, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("User name"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextUser = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(130,22), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextUser->SetToolTip(_("please input your name"));
	FlexGridSizer1->Add(TextUser, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Password"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer1->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextPW = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(130,22), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextPW->SetToolTip(_("please input the password"));
	FlexGridSizer1->Add(TextPW, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(FlexGridSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	BtnLogin = new wxButton(this, ID_BUTTON1, _("Login"), wxDefaultPosition, wxSize(80,36), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer2->Add(BtnLogin, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BtnCancal = new wxButton(this, ID_BUTTON2, _("Cancal"), wxDefaultPosition, wxSize(80,36), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer2->Add(BtnCancal, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LoginDialog::OnBtnLoginClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LoginDialog::OnBtnCancalClick);
	//*)
	IsA=false;
	parentFrame=parent;
}

LoginDialog::~LoginDialog()
{
	//(*Destroy(LoginDialog)
	//*)
}


void LoginDialog::OnBtnLoginClick(wxCommandEvent& event)
{
    /*if(!IsAdmin())
    {
        wxMessageBox("it is not the administrator!");
    }
    else
    {
        //wxWindowBase::Destroy();
        Close();
    }*/
    IsAdmin();
    Close();
}

void LoginDialog::OnBtnCancalClick(wxCommandEvent& event)
{
    Close();
    parentFrame->Close();
}

bool LoginDialog::IsAdmin()
{
    wxString user = TextUser->GetValue();
    if(user != "admin")
    {
        IsA=false;
        return false;
    }
    else
    {
        IsA=true;
        return true;
    }
}
