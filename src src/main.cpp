#include <print>
#include <Interop/Interop-swift.h>

int main()
{
    SwiftInteroppenheimer::sayHello();
    // default namespace if not changed via set_target_properties Swift_MODULE_NAME
    //Interop::sayHello();
    std::println("Hello from C++");
    return 0;
}