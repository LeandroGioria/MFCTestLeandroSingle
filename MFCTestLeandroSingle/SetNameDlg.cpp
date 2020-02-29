// SetNameDlg.cpp : implementation file
//

#include "pch.h"
#include "MFCTestLeandroSingle.h"
#include "SetNameDlg.h"
#include "afxdialogex.h"


// SetNameDlg dialog

IMPLEMENT_DYNAMIC(SetNameDlg, CDialog)

SetNameDlg::SetNameDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_SETNAME, pParent)
	, m_sName(_T(""))
{

}

SetNameDlg::~SetNameDlg()
{
}

void SetNameDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_NAME, m_sName);
}


BEGIN_MESSAGE_MAP(SetNameDlg, CDialog)
END_MESSAGE_MAP()


// SetNameDlg message handlers
