
// MovieDlg.h: 헤더 파일
//

#pragma once


// CMovieDlg 대화 상자
class CMovieDlg : public CDialog
{
// 생성입니다.
public:
	CMovieDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MOVIE_DIALOG };
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
	DECLARE_MESSAGE_MAP()
public:
	/*데이터베이스에 있는 id와 Password 입니다.*/
	CString DBid;
	CString DBpass;

	CString m_loginuser="admin"; // 채팅 서버에 접속할 때 관리자 로그인인지 확인하기 위해 선언
	afx_msg void OnBnClickedCancel();
	afx_msg void OnClickedLogin(); // 로그인 버튼
	afx_msg void OnClickedJoin();// 회원가입 버튼

	CString m_strEdId; // Edit 창에 쓴 아이디
	CString m_strEdPw; // Edit 창에 쓴 패스워드
};
