#include <quickjs.h>
#include <quickjs-libc.h>

JSValue Helper_JS_NewFloat64(JSContext *ctx, double d);
JSValue Helper_JS_NewBool(JSContext *ctx, JS_BOOL d);
JSValue Helper_JS_NewNull(void);
JSValue Helper_JS_NewUndefined(void);
JSValue Helper_JS_NewException(void);
void Helper_JS_FreeValue(JSContext *ctx, JSValue v);
JSValue Helper_JS_DupValue(JSContext *ctx, JSValueConst v);
int Helper_JS_IsInteger(JSValueConst v);
int Helper_JS_IsString(JSValueConst v);
int Helper_JS_IsBool(JSValueConst v);
int Helper_JS_IsUndefined(JSValueConst v);
int Helper_JS_IsNull(JSValueConst v);
int Helper_JS_IsObject(JSValueConst v);
int Helper_JS_IsSymbol(JSValueConst v);
int Helper_JS_IsException(JSValueConst v);
