// Copyright 2020-2020 The TZIOT Authors. All rights reserved.
// ����ϵͳ�м��.���β���ϵͳ�Ĳ���,�ṩͳһ��API
// Authors: jdh99 <jdh821@163.com>

#include "bror.h"

// BrorDelay ��ʱ
void BrorDelay(int second) {
    BrorDelayMS(second * 1000);
}

// BrorGetTickMs ��ȡ��ǰ�δ��Ӧ�ĺ���
void BrorGetTickMs(void) {
    return BrorGetTick() * 1000 / BrorGetTickRate();
}

// BrorGetTickToMs �δ�ת��λ����
uint32_t BrorTickToMs(uint32_t tick) {
    return 1000 / BrorGetTickRate() * tick;
}
