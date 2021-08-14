// Copyright 2021-2021 The jdh99 Authors. All rights reserved.
// ����ϵͳ�м��.���β���ϵͳ�Ĳ���,�ṩͳһ��API
// Authors: jdh99 <jdh821@163.com>

#ifndef BROR_H
#define BROR_H

#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>

// �жϵδ���Ⱥ�
#define BROR_TICK_AFTER(a,b) ((long)(b) - (long)(a) < 0)) 
#define BROR_TICK_BEFORE(a,b) BROR_TICK_AFTER(b,a)

// �߳����ȼ�
typedef enum {
    BROR_THREAD_PRIORITY_HIGHEST = 0,
    BROR_THREAD_PRIORITY_HIGH,
    BROR_THREAD_PRIORITY_MIDDLE,
    BROR_THREAD_PRIORITY_LOW,
    BROR_THREAD_PRIORITY_LOWEST
} BrorThreadPriority;

// BrorFunc ��ں�������
typedef void (*BrorFunc)(void* param);

// �û�ģ�����ʵ�ֵĺ���
// BrorThreadCreate �����߳�
// func:�̺߳���
// name:�߳���
// priority:�߳����ȼ�
// stackSize:��ջ��С
bool BrorThreadCreate(BrorFunc func, const char* name, BrorThreadPriority priority, int stackSize);
// BrorThreadDeleteMe ɾ�����߳�
// ע��:��������Ҫ���߳̽���������
void BrorThreadDeleteMe(void);
// BrorDelayMS ���뼶��ʱ
void BrorDelayMS(int ms);
// BrorYield ��ִͣ���ó�CPU
void BrorYield(void);
// BrorMutexInit ��ʼ����
intptr_t BrorMutexInit(void);
// BrorMutexLock ����
void BrorMutexLock(intptr_t lock);
// BrorMutexUnlock ����
void BrorMutexUnlock(intptr_t lock);
// BrorGetTick ��ȡϵͳ��ǰ�δ�
uint32_t BrorGetTick(void);
// BrorGetTickRate ��ȡÿ��δ���
int BrorGetTickRate(void);

// ģ���Լ�ʵ�ֵĺ���
// BrorDelay ��ʱ
void BrorDelay(int second);

// BrorGetTickMs ��ȡ��ǰ�δ��Ӧ�ĺ���
uint32_t BrorGetTickMs(void);

// BrorGetTickToMs �δ�ת��λ����
uint32_t BrorTickToMs(uint32_t tick);

#endif
