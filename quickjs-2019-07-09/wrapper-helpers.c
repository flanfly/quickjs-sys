#include "quickjs.h"

JSValue Helper_JS_NewFloat64(JSContext *ctx, double d) {
  return JS_NewFloat64(ctx, d);
}

JSValue Helper_JS_NewBool(JSContext *ctx, JS_BOOL val) {
  return JS_NewBool(ctx, val);
}

void Helper_JS_FreeValue(JSContext *ctx, JSValue v) {
  return JS_FreeValue(ctx, v);
}

JSValue Helper_JS_DupValue(JSContext *ctx, JSValueConst v) {
  return JS_DupValue(ctx, v);
}
