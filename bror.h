// Copyright 2021-2021 The jdh99 Authors. All rights reserved.
// ����ϵͳ�м��.���β���ϵͳ�Ĳ���,�ṩͳһ��API
// Authors: jdh99 <jdh821@163.com>

#ifndef BROR_H
#define BROR_H

#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>

// BrorFunc ��ں�������
typedef void (*BrorFunc)(void* param);

// �û�ģ�����ʵ�ֵĺ���
// BrorThreadCreate �����߳�
bool BrorThreadCreate(BrorFunc func);
// BrorDelay ��ʱ
void BrorDelay(int second);
// BrorDelayMS ���뼶��ʱ
void BrorDelayMS(int ms);
// BrorYield ��ִͣ���ó�CPU
void BrorYield(void);
// BrorMutexInit ��ʼ����
void BrorMutexInit(void);
// BrorMutexLock ����
void BrorMutexLock(void);
// BrorMutexUnlock ����
void BrorMutexUnlock(void);

#endif
