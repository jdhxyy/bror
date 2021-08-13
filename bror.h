// Copyright 2021-2021 The jdh99 Authors. All rights reserved.
// 操作系统中间件.屏蔽操作系统的差异,提供统一的API
// Authors: jdh99 <jdh821@163.com>

#ifndef BROR_H
#define BROR_H

#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>

// 线程优先级
typedef enum {
    BROR_THREAD_PRIORITY_HIGHEST = 0,
    BROR_THREAD_PRIORITY_HIGH,
    BROR_THREAD_PRIORITY_MIDDLE,
    BROR_THREAD_PRIORITY_LOW,
    BROR_THREAD_PRIORITY_LOWEST
} BrorThreadPriority;

// BrorFunc 入口函数类型
typedef void (*BrorFunc)(void* param);

// 用户模块必须实现的函数
// BrorThreadCreate 创建线程
// func:线程函数
// name:线程名
// priority:线程优先级
// stackSize:堆栈大小
bool BrorThreadCreate(BrorFunc func, const char* name, BrorThreadPriority priority, int stackSize);
// BrorThreadDeleteMe 删除本线程
// 注意:本函数需要在线程结束处调用
void BrorThreadDeleteMe(void);
// BrorDelay 延时
void BrorDelay(int second);
// BrorDelayMS 毫秒级延时
void BrorDelayMS(int ms);
// BrorYield 暂停执行让出CPU
void BrorYield(void);
// BrorMutexInit 初始化锁
intptr_t BrorMutexInit(void);
// BrorMutexLock 上锁
void BrorMutexLock(intptr_t lock);
// BrorMutexUnlock 解锁
void BrorMutexUnlock(intptr_t lock);

#endif
