#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

//(*Headers(LoginDialog)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class LoginDialog: public wxDialog
{
	public:

		LoginDialog(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~LoginDialog();

		//(*Declarations(LoginDialog)
		wxStaticText* StaticText2;
		wxButton* BtnCancal;
		wxStaticText* StaticText1;
		wxTextCtrl* TextPW;
		wxButton* BtnLogin;
		wxTextCtrl* TextUser;
		//*)

	protected:

		//(*Identifiers(LoginDialog)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(LoginDialog)
		void OnBtnLoginClick(wxCommandEvent& event);
		void OnBtnCancalClick(wxCommandEvent& event);
		//*)
		wxWindow* parentFrame;
		bool IsAccessed();

		DECLARE_EVENT_TABLE()
};

#endif
