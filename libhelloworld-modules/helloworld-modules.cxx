#include <libhelloworld-modules/helloworld-modules.hxx>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace helloworld_modules
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
