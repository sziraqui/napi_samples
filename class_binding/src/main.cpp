//
// Created by sziraqui on 31/5/19.
//
#include <napi.h>
#include "myclassbind.h"

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
    Bind::Elog::Init(env, exports);
    return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, InitAll)
