
// VC_TEST.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CVC_TESTApp:
// �� Ŭ������ ������ ���ؼ��� VC_TEST.cpp�� �����Ͻʽÿ�.
//

class CVC_TESTApp : public CWinApp
{
public:
	CVC_TESTApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CVC_TESTApp theApp;