// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#define ZLIB_WINAPI
// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�
#include <Windows.h>
#include <initguid.h>
#include "usb100.h"
#include "adb_api.h"
#include "usb.h"

/// Opens usb interface (device) by interface (device) name.
//usb_handle* do_usb_open(const wchar_t* interface_name);

void sleep(int seconds);
void get_my_path(char *path);
#define PATH_MAX MAX_PATH

#pragma comment(lib, "AdbWinUsbApi.lib")
#pragma comment(lib, "AdbWinApi.lib")
#pragma comment(lib, "zlibstat.lib")