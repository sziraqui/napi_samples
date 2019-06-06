//
// Created by sziraqui on 5/6/19.
//
#include <vector>
#include <string>
#include <iostream>
#include "funcs.h"

void printArray(const Napi::CallbackInfo& info) {
    // works
    if(info[0].IsArray()) {
        std::cout<<"c++: IsArray true" << std::endl;
        Napi::Array arr = info[0].As<Napi::Array>();
        for(uint i = 0; i < arr.Length(); ++i) {
            Napi::String str = arr.Get(i).As<Napi::String>();
            std::cout<<"arr["<< i <<"] " << str.Utf8Value() << std::endl;
        }
    }
    // works
    if(info[0].IsArray()) {
        std::cout<<"Using [] overload" << std::endl;
        const Napi::Array arr = info[0].As<Napi::Array>();
        for(uint i = 0; i < arr.Length(); ++i) {
            Napi::String str = arr[i].As<Napi::String>();
            std::cout<<"arr["<< i <<"] " << str.Utf8Value() << std::endl;
        }
    }
    // breaks on nodejs with "Invalid argument error"
    if(info[0].IsArray()) {
        std::cout<<"Using TypedArray" << std::endl;
        const Napi::TypedArray arr = info[0].As<Napi::TypedArray>();
        for(uint i = 0; i < arr.ElementLength(); ++i) {
            Napi::String str = arr[i].As<Napi::String>();
            std::cout<<"arr["<< i <<"] " << str.Utf8Value() << std::endl;
        }
    }
    // breaks on nodejs with "Invalid argument error"
    if(info[0].IsArray()) {
        std::cout<<"Using TypedArrayOf<String>" << std::endl;
        const Napi::TypedArrayOf<Napi::String> arr = info[0].As<Napi::TypedArrayOf<Napi::String>>();
        for(uint i = 0; i < arr.ElementLength(); ++i) {
            Napi::String str = arr[i].As<Napi::String>();
            std::cout<<"arr["<< i <<"] " << str.Utf8Value() << std::endl;
        }
    }
}
//// not working, compiler error
//void print2dArray(const Napi::CallbackInfo& info) {
//    if(info[0].IsArray()) {
//        std::cout <<"2d array"<< std::endl;
//        const Napi::Array arr = info[0].As<Napi::Array>();
//        for(uint i = 0; i < arr.Length(); ++i) {
//            for(uint j = 0; j < arr[0].As<Napi::Array>().Length(); ++j) {
//                Napi::Number num = arr[i].As<Napi::Array>().[j].As<Napi::Number>();
//                std::cout<< num.Int32Value()<<",";
//            }
//            std::cout<<std::endl;
//        }
//    }
//}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    exports.Set("printArray", Napi::Function::New(env, printArray));
    // exports.Set("print2dArray", Napi::Function::New(env, print2dArray));
    return exports;
}