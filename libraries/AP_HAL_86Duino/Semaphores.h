#pragma once

#include "AP_HAL_86Duino.h"

class x86Duino::Semaphore : public AP_HAL::Semaphore {
public:
    Semaphore() : _taken(false) {}
    bool give();
    bool take(uint32_t timeout_ms);
    bool take_nonblocking();
private:
    bool _taken;
};
