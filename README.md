# learn-sorting
Sorting algorithms implemented in different languages.

## C++ reference

`#include <filename>`
+ The preprocessor searches in an implementation dependent manner, normally in search directories pre-designated by the compiler/IDE.
+ This method is normally used to include standard library header files.
  
`#include "filename"`
+ The preprocessor searches first in the same directory and then follows the search path used for the #include \<filename\> form.
+ This method is normally used to include programmer defined header files.

`using namespace std;`
+ `std` is an abbreviation of standard. `std` is the standard `namespace`. `cout`, `cin` and a lot of other things are defined in it. We can also call these functions using `std::cout` , `std::cin`, etc.
+ A `namespace` is designed to overcome difficulty of knowing which version of functions, variables etc. to be used by working as an additional information to differentiate similar functions, variables etc. with the same name available in different libraries.
+ The keyword `using` technically means, use this whenever we can. This refers, in this case, to the `std` `namespace`. So whenever the compiler comes across `cout`, `cin` or anything of that matter, it will read it as `std::cout`, `std::cin`, etc.