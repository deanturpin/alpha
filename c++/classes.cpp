#include <iostream>

namespace tst
{
	void classes()
	{
		using namespace std;

		// Explicit
		{
			struct A
			{
				A(int) { ; }
			};

			struct B
			{
				explicit B(int) { ; }
			};

			A(1);
			B(1);
			// Error - candidate constructor (the implicit copy constructor) not
			// viable:
			// B("blah");
		}

		// Overload not override
		{
			class A
			{
				public:
					void foo()
					{
						cout << "foo" << endl;
					}
			};

			class B : public A
			{
				public:
					void foo() const
					{
						cout << "bar" << endl;
					}
			};

			cout << "Overload not override" << endl;
			A a;
			B b;

			a.foo();
			b.foo();
		}

		// final keyword 1
		{
			struct A
			{
				virtual void foo() final;
				void bar();
			};

			struct B final : public A
			{
				// Error - A::foo is final
				// void foo();

				void bar(){};
			};

			cout << "Is A final? " << boolalpha << is_final<A>::value << endl;
			cout << "Is B final? " << boolalpha << is_final<B>::value << endl;

			// Error - B is final
			// struct C final : public B {};

			// Error - A is incomplete
			// A a;

			// Error - A is incomplete
			// B b;
		}

		// override keyword
		{
			class A
			{
				void foo();
				// virtual void bar();
			};

			class B : public A
			{
				void foo(){};
			};

			// A a;
			// B b;
		}

		// override keyword
		#if 0
		{
			struct A
			{
				void foo();
				virtual void bar();
				// void bar2();
			};

			struct B final : public A
			{
				// Error - A::foo is final
				void foo() { cout << "foo" << endl; }

				// OK - bar overrides ::bar
				void bar() { cout << "bah" << endl; }

				// Error - signature mismatch
				// void bar(int) override {};

				// Error - can't override non-virtual
				// void bar2() override {};
			};

			// Error: B is final
			// struct C final : public B {};

			// A a;
			// cout << "Size A " << sizeof a << endl;
			// Error - foo is not implemented
			// a.foo();

			B b;
			cout << "Size B " << sizeof b << endl;
			b.foo();
		}
		#endif
	}
}
