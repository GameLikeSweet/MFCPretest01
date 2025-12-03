
// MFCpretestDlg.h: 헤더 파일
//

#pragma once

#include<thread>
#include "CDlgImage.h"
#include "CProcess.h"

// CMFCpretestDlg 대화 상자
class CMFCpretestDlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCpretestDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

	CDlgImage* m_pDlgImage1;
private:
	std::thread _thread0;

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCPRETEST_DIALOG };
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
	int radius = 10;
	int border = 10;
	afx_msg void OnDestroy();
	afx_msg void OnBnClickedBtnSetData();
	afx_msg void OnBnClickedReset();
	afx_msg void OnBnClickedBtnRandom();

private:
	void ThreadProcess(CWnd* pParent, CRect rect);
public:
	afx_msg void OnBnClickedBtnThread();
};
