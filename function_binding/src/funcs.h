//
// Created by sziraqui on 31/5/19.
//
#include <napi.h>

namespace mymath {
    Napi::Number Log(const Napi::CallbackInfo& info);
    Napi::Number Exp(const Napi::CallbackInfo& info);
    Napi::Object Init(Napi::Env env, Napi::Object exports);
}
