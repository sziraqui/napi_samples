//
// Created by sziraqui on 5/6/19.
//
#include <vector>
#include <string>
#include <iostream>
#include "funcs.h"
#include "napiextratypes.h"

void printArray(const Napi::CallbackInfo& info) {
    // works
    if(info[0].IsArray()) {
        std::cout<<"c++: IsArray true" << std::endl;
        NapiExtra::NdArray arr(info[0].As<Napi::Array>());
        for(uint i = 0; i < arr.Length(); ++i) {
            int a[1]; a[0] = i;
            Napi::Number str = arr.GetNumberAt(a, 1);
            std::cout << str.Int32Value() << ",";
        }
        std::cout<<std::endl;
    }
}
// works
void print2dArray(const Napi::CallbackInfo& info) {
    if(info[0].IsArray()) {
        std::cout <<"2d array"<< std::endl;
        NapiExtra::NdArray arr(info[0].As<Napi::Array>());
        for(uint i = 0; i < arr.Length(); ++i) {
            for(uint j = 0; j < arr.Get(0u).As<Napi::Array>().Length(); ++j) {
                int a[2];
                a[0] = i;
                a[1] = j;
                Napi::Number num = arr.GetNumberAt(a, 2);
                std::cout<< num.Int32Value()<<",";
            }
            std::cout<<std::endl;
        }
    }
}

// works
void zerofy(const Napi::CallbackInfo& info) {
    if(info[0].IsArray()) {
        std::cout <<"2d array"<< std::endl;
        NapiExtra::NdArray arr(info[0].As<Napi::Array>());
        for(uint i = 0; i < arr.Length(); ++i) {
            for(int j = 0; j < arr.Get(0u).As<Napi::Array>().Length(); ++j) {
                int a[2];
                a[0] = i;
                a[1] = j;
                arr.SetNumberAt(a, 2, 0);
            }
        }
    }
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    exports.Set("printArray", Napi::Function::New(env, printArray));
    exports.Set("print2dArray", Napi::Function::New(env, print2dArray));
    exports.Set("zerofy", Napi::Function::New(env, zerofy));
    return exports;
}