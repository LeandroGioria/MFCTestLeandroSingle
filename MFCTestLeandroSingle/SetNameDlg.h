#pragma once


// SetNameDlg dialog

class SetNameDlg : public CDialog
{
	DECLARE_DYNAMIC(SetNameDlg)

public:
	SetNameDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~SetNameDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SETNAME };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString m_sName;
};
