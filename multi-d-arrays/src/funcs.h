//
// Created by sziraqui on 5/6/19.
//

#ifndef NAPI_SAMPLES_FUNCS_H
#define NAPI_SAMPLES_FUNCS_H
#include <napi.h>

Napi::Object Init(Napi::Env env, Napi::Object exports);
void printArray(const Napi::CallbackInfo& info);

#endif //NAPI_SAMPLES_FUNCS_H
