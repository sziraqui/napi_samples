//
// Created by sziraqui on 4/6/19.
//
#include "napiextratypes.h"

// NdArray
// Default constructor
NapiExtra::NdArray::NdArray() : Napi::Array() {}

NapiExtra::NdArray::NdArray(Napi::Array arr) : Napi::Array(arr) {

}

Napi::Number NapiExtra::NdArray::GetNumberAt(int *dims, int dimCount) {
    Napi::Value val = this->GetValueAt(dims, dimCount);
    return val.As<Napi::Number>();
}

Napi::String NapiExtra::NdArray::GetStringAt(int *dims, int dimCount) {
    Napi::Value val = this->GetValueAt(dims, dimCount);
    return val.As<Napi::String>();
}

/** Access an element at any depth.
 * Eg
 * GetValueAt({0,1,1}, 3) will return element from a 3d Array
 */
Napi::Value NapiExtra::NdArray::GetValueAt(int *dims, int dimCount) {
    Napi::Value holder = this->As<Napi::Value>(); // returns Value
    for(int i = 0; i < dimCount && holder.IsArray(); ++i) {
        Napi::Array tmp = holder.As<Napi::Array>(); // convert Value to Array
        if(dims[i] < tmp.Length()){
            holder = tmp.Get( (uint)dims[i] ); // typecasting is required to get Value instead of PropertyLValue
        } else break;
    }
    return holder;
}

void NapiExtra::NdArray::SetNumberAt(int *dims, int dimCount, int val) {
    Napi::Value nval = Napi::Value::From(this->Env(), val);
    this->SetValueAt(dims, dimCount, nval);
}

void NapiExtra::NdArray::SetValueAt(int *dims, int dimCount, Napi::Value val) {
    Napi::Value holder = this->Get( (uint)dims[0] ); // returns Value
    for(uint i = 0; i < dimCount && holder.IsArray(); ++i) {
        Napi::Array tmp = holder.As<Napi::Array>(); // convert Value to Array
        if(dims[i] < tmp.Length()){
            tmp.Set( (uint)dims[i], val);
        } else break;
    }
}



