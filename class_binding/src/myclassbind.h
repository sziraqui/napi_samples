#include <napi.h>
#include "myclass.h"

namespace Bind {
    class Elog : public Napi::ObjectWrap<Bind::Elog> {
        public:
            static Napi::Object Init(Napi::Env env, Napi::Object exports);
            Elog(const Napi::CallbackInfo& info);
        private:
            static Napi::FunctionReference constructor;
            Napi::Value Exp(const Napi::CallbackInfo& info);
            Napi::Value Log(const Napi::CallbackInfo& info);
            ActualElog *elog;
    };
}