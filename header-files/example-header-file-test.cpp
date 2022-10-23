
#include "example-header-file-to-be-included.h"
// This header file contains regular cpp code.

#include "example-cpp-to-be-included.cpp"
// This is a cpp file that we have included. Note that only those cpp files can be included that don't have a definition of int main() within them. Otherwise, we would get an error stating that int main() has been redefined.
int main() {
    // We didn't even have to include <iostream> using the `#include` pre-processor directive, because that is included within the "example-header-file.h". We can choose not to include <iostream> within the header file, and directly include it in our main code 
    printf("%d\n", sum(1, 2));
    printf("%d\n", multiply(1, 2));
    std::cout << "hello";
}