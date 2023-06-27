#include <stdio.h>

int gl_var = 1;

int f(void)
{
	return 2;
}

namespace Foo
{
	int gl_var = 3;
	int f(void)
	{
		return 4;
	}
}

namespace Bar
{
	int gl_var = 5;
	int f(void)
	{
		return 6;
	}
}

namespace Muf = Foo;

// 'namespaces' have vars and functions stored. accessible via 
// namespace_name::var_function_name. i have learned '::'
// names within namespace do not interfere with same named names in other name
// spaces or globals. In short, there is an extra level of abstraction.

int main()
{
	printf("%d\n", gl_var);
	printf("%d\n", f());
	printf("%d\n", Foo::gl_var);
	printf("%d\n", Foo::f());
	printf("%d\n", Bar::gl_var);
	printf("%d\n", Bar::f());
	printf("%d\n", Muf::gl_var);
	printf("%d\n", Muf::f());
}
