//
// Created by sziraqui on 4/6/19.
//

#ifndef NODOFACE_NAPIEXTRATYPES_H
#define NODOFACE_NAPIEXTRATYPES_H
#include <napi.h>
#include <iostream>
#include <array>

namespace NapiExtra {

class NdArray : public Napi::Array {
public:
    NdArray();
    NdArray(Napi::Array);
    Napi::Number GetNumberAt(int dims[], int dimCount);
    Napi::String GetStringAt(int dims[], int dimCount);
    Napi::Value GetValueAt(int dims[], int dimCount);
    void SetNumberAt(int dims[], int dimCount, int val);
    void SetValueAt(int dims[], int dimCount, Napi::Value nval);

};


}
#endif //NODOFACE_NAPIEXTRATYPES_H
