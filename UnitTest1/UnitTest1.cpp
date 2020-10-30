#include "pch.h"
#include "CppUnitTest.h"
#include "../ComponentA/componentA.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1) {

	public:
		TEST_METHOD(TestMethod1) {
			OrdenTrabajo ejemplo("A1A-123");
			string a = "Sin Observaciones";
			ejemplo.addObserv(a);
			Assert::AreEqual(a, ejemplo.getObserv());
		}

		TEST_METHOD(TestMethod2) {
			OrdenTrabajo ejemplo("A1A-123");
			string a = "Sin Observaciones";
			ejemplo.addObserv(a);
			Assert::IsTrue((ejemplo.getObserv().size() < 100));
		}
	};
}
