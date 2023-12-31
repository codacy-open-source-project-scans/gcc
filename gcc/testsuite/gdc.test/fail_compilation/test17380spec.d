/* REQUIRED_ARGS: -verrors=spec
TEST_OUTPUT:
---
(spec:1) fail_compilation/test17380spec.d(15): Error: cannot resolve identifier `ThisTypeDoesNotExistAndCrashesTheCompiler`
(spec:1) fail_compilation/test17380spec.d(15): Error: no property `ThisTypeDoesNotExistAndCrashesTheCompiler` for `this.opCast()` of type `test17380spec.Uint128`
(spec:1) fail_compilation/test17380spec.d(20):        struct `Uint128` defined here
fail_compilation/test17380spec.d(15): Error: undefined identifier `ThisTypeDoesNotExistAndCrashesTheCompiler`
---
 */

struct Int128
{
    Uint128 opCast()
    {
        return ThisTypeDoesNotExistAndCrashesTheCompiler;
    }
    alias opCast this;
}

struct Uint128
{
    Int128 opCast() { return Int128.init; }
    alias opCast this;
}
