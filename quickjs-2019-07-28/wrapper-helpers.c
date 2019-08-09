#include "quickjs.h"

JSValue Helper_JS_NewFloat64(JSContext *ctx, double d) {
  return JS_NewFloat64(ctx, d);
}

JSValue Helper_JS_NewBool(JSContext *ctx, JS_BOOL val) {
  return JS_NewBool(ctx, val);
}

JSValue Helper_JS_NewNull(void) {
  return JS_NULL;
}

JSValue Helper_JS_NewUndefined(void) {
  return JS_UNDEFINED;
}

JSValue Helper_JS_NewException(void) {
  return JS_EXCEPTION;
}

void Helper_JS_FreeValue(JSContext *ctx, JSValue v) {
  return JS_FreeValue(ctx, v);
}

JSValue Helper_JS_DupValue(JSContext *ctx, JSValueConst v) {
  return JS_DupValue(ctx, v);
}

int Helper_JS_IsInteger(JSValueConst v) {
  return JS_IsInteger(v);
}

int Helper_JS_IsString(JSValueConst v) {
  return JS_IsString(v);
}

int Helper_JS_IsBool(JSValueConst v) {
  return JS_IsBool(v);
}

int Helper_JS_IsSymbol(JSValueConst v)
{
  return JS_IsSymbol(v);
}

int Helper_JS_IsObject(JSValueConst v)
{
  return JS_IsObject(v);
}

int Helper_JS_IsNull(JSValueConst v)
{
  return JS_IsNull(v);
}

int Helper_JS_IsUndefined(JSValueConst v)
{
  return JS_IsUndefined(v);
}

int Helper_JS_IsException(JSValueConst v)
{
  return JS_IsException(v);
}

int Helper_JS_IsUninitialized(JSValueConst v)
{
  return JS_IsUndefined(v);
}
