#include <iostream>
#include <memory>
#include <vector>
#include <string>
using namespace std;

struct RValue {
   RValue():sources("hello!!!") {
       cout << "qianwu2" << endl;
   }
   RValue(RValue&& a) {
       sources = std::move(a.sources);
       cout << "&& RValue" << endl;
   }

   RValue(const RValue & a) {
       sources = a.sources;
       cout << "& RValue" << endl;
   }

   void operator=(const RValue&& a) {
       sources = std::move(a.sources);
       cout << "&& ==" <<endl;
   }

   void operator=(const RValue& a) {
       sources = a.sources;
       cout << "& ==" << endl;
   }

   string sources;
};
