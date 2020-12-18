#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_12.3(ітер.)/Lab_12.3(ітер.).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab123ітер
{
	TEST_CLASS(UnitTestLab123ітер)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Spusok* first = NULL;
			Spusok* last = NULL;

			int x = 0;
			for (int i = 0; i < 4; i++)
			{
				x = i;
				Creata(first, last, x);
			}

			Spusok* T = first;

			int v1 = 0, v2 = 10;

			T = first;
			Process(T, v1, v2, last);
			T = first;

			int l = T->link1->inf;
			Assert::AreEqual(l, 10);
		}
	};
}
