// Include the Ruby headers and goodies
#include "ruby.h"

// Defining a space for information and references about the module to be stored internally
VALUE RequireTest = Qnil;

// Prototype for the initialization method - Ruby calls this, not you
void Init_require_test();

// Prototype for our method 'test1' - methods are prefixed by 'method_' here
VALUE method_test1(VALUE self);

// The initialization method for this module
void Init_require_test() {
	RequireTest = rb_define_module("RequireTest");
	rb_define_method(RequireTest, "test1", method_test1, 0);
}

// Our 'test1' method.. it simply returns a value of '10' for now.
VALUE method_test1(VALUE self) {
	int x = 10;
	return INT2NUM(x);
}
