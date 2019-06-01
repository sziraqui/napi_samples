//
// Created by sziraqui on 30/5/19.
//
#include <napi.h>
#include <math.h>
#include "funcs.h"


Napi::Number mymath::Log(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    // check arguments arguments
    if(info.Length() < 1 || !info[0].IsNumber()) {
        Napi::TypeError::New(env, "Number expected").ThrowAsJavaScriptException();
    }
    //Type conversion from node to cpp
    Napi::Number num = info[0].As<Napi::Number>();

    double val = log(num.DoubleValue());
    // Type conversion from cpp to node
    return Napi::Number::New(env, val);
}

Napi::Number mymath::Exp(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    if(info.Length() < 1 || !info[0].IsNumber()) {
        Napi::TypeError::New(env, "Number expected").ThrowAsJavaScriptException();
    }
    Napi::Number inp = info[0].As<Napi::Number>();
    double val = exp(inp.DoubleValue());
    return Napi::Number::New(env, val);
}

Napi::Object mymath::Init(Napi::Env env, Napi::Object exports) {
    exports.Set("log", Napi::Function::New(env, mymath::Log));
    exports.Set("exp", Napi::Function::New(env, mymath::Exp));
    return exports;
}