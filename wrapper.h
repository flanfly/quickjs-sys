#include <quickjs.h>
#include <quickjs-libc.h>

JSValue Helper_JS_NewFloat64(JSContext *ctx, double d);
JSValue Helper_JS_NewBool(JSContext *ctx, JS_BOOL d);
void Helper_JS_FreeValue(JSContext *ctx, JSValue v);
JSValue Helper_JS_DupValue(JSContext *ctx, JSValueConst v);
