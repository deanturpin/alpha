#include <iostream>

namespace tst
{
	using namespace std;

	void classes()
	{
		cout << "Classes" << endl;

		// Explicit
		{
			struct A
			{
				A(int) { }
			};

			struct B
			{
				explicit B(int) { }
			};

			A(1);
			B(1);
		}

		// Final
		{
			struct A
			{
				virtual void foo() final {};
				virtual void bar(){};
			};

			struct B final : public A
			{
				// Can't do this: A::foo is final
				// void foo(){};
				void bar(){};
			};

			// Can't do this: B is final
			// struct C final : public B {};
		}
	}
}
