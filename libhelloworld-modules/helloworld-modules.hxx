#pragma once

#include <iosfwd>
#include <string>

#include <libhelloworld-modules/export.hxx>

namespace helloworld_modules
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBHELLOWORLD_MODULES_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
