#include "stdafx.h"



CSocServer::CSocServer()
{
}


CSocServer::~CSocServer()
{
}


void CSocServer::Init(HWND hWnd)
{
	m_hWnd = hWnd;
}

void CSocServer::OnAccept(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	Accept(m_socCom[wait]);
	SendMessage(m_hWnd, UM_ACCEPT, 0, 0);
	wait++;
	CSocket::OnAccept(nErrorCode);
}



CSocCom* CSocServer::GetAcceptSocCom()
{
	return &m_socCom[wait];
}
