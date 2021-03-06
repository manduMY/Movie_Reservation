
// ChatServerDlg.h: 헤더 파일
//

#pragma once
#include "afxwin.h"
#include <vector>
// CChatServerDlg 대화 상자
class CChatServerDlg : public CDialog
{
// 생성입니다.
public:
	std::vector<CSocCom> v;
	CChatServerDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.
	CSocServer m_socServer;
	CSocCom *m_socCom[10];
	int wait = 0;
	int now = 0;
	int waiting = 0;
// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHATSERVER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClickedIdclose();
	afx_msg void OnClickedButtonSend();
	afx_msg LPARAM OnAccept(UINT wParam, LPARAM IParam);
	afx_msg LPARAM OnReceive(UINT wParam, LPARAM IParam);
	DECLARE_MESSAGE_MAP()


public:
	CListBox m_list;
	CString m_strSend;
	CString m_strStatus;
	CString count;
	CString m_count;
};
