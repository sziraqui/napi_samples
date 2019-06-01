#include <napi.h>
#include "myclassbind.h"

Napi::FunctionReference Bind::Elog::constructor;

// Exporting class constructor and its methods
Napi::Object Bind::Elog::Init(Napi::Env env, Napi::Object exports) {
    /** When passing variables from Node to C++, HandleScope manages the scope of variable created in C++
     * This helps Garbage Collector to decide when to free up memory used by the created variable
     * HandleScope causes the variables that are created locally to be freed up by GC.
     */
    Napi::HandleScope scope = Napi::HandleScope(env);
    // Define constructor for node side
    // DefineClass and InstanceMethod are inherited from Napi::ObjectWrap
    Napi::Function con = DefineClass(env, "Elog", {
        InstanceMethod("exp", &Bind::Elog::Exp),
        InstanceMethod("log", &Bind::Elog::Log)
    });
    //To disable C++ destructor of node side class
    constructor = Napi::Persistent(con);
    constructor.SuppressDestruct();
    // Set key for calling constructor on node side
    exports.Set("Elog", con);
    return exports;
}
// Binding existing classes constructor
Bind::Elog::Elog(const Napi::CallbackInfo& info) : Napi::ObjectWrap<Bind::Elog>(info) {
    Napi::Env env = info.Env();
    Napi::HandleScope scope = Napi::HandleScope(env);
    // Get arguments from node side
    if(info.Length() < 1 || !info[0].IsNumber()) {
        Napi::TypeError::New(env, "Exactly one argument as Number is expected").ThrowAsJavaScriptException();
    }
    Napi::Number num = info[0].As<Napi::Number>();
    // Call the underlying C++ class constructor
    this->elog = new ActualElog(num.DoubleValue());
}
// Binding Exp method of existing class
Napi::Value Bind::Elog::Exp(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    Napi::EscapableHandleScope scope(env);
    // There are no arguments to original method
    // Executing the code from existing class
    double val = this->elog->Exp(); //  local variable may be deleted because of HandleScope
    return scope.Escape(Napi::Number::New(env, val));
}
// Binding Log method of existing class and use of EscapableHandleScope
Napi::Value Bind::Elog::Log(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    Napi::EscapableHandleScope scope(env); // to prevent a local variable from being GCed
    // There are no arguments to method method
    // Executing the code from existing class
    double val = this->elog->Log();
    return scope.Escape(Napi::Number::New(env, val)); // prevent val from being deleted after returning
}