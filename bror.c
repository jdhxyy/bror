// Copyright 2020-2020 The TZIOT Authors. All rights reserved.
// 操作系统中间件.屏蔽操作系统的差异,提供统一的API
// Authors: jdh99 <jdh821@163.com>

#include "bror.h"

// BrorDelay 延时
void BrorDelay(int second) {
    BrorDelayMS(second * 1000);
}

// BrorGetTickMs 获取当前滴答对应的毫秒
void BrorGetTickMs(void) {
    return BrorGetTick() * 1000 / BrorGetTickRate();
}

// BrorGetTickToMs 滴答转换位毫秒
uint32_t BrorTickToMs(uint32_t tick) {
    return 1000 / BrorGetTickRate() * tick;
}
