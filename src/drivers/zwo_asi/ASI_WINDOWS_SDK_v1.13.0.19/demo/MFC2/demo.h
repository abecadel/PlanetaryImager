
// demo.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CdemoApp:
// �йش����ʵ�֣������ demo.cpp
//
#define CWinAppEx CWinApp
class CdemoApp : public CWinAppEx
{
public:
	CdemoApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CdemoApp theApp;