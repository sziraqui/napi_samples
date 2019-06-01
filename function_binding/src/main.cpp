//
// Created by sziraqui on 30/5/19.
//
#include <napi.h>
#include "funcs.h"

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
    mymath::Init(env, exports);
    return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, InitAll)