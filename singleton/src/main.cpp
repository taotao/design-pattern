#include <iostream>

#include <singleton/Singleton.hpp>

using singleton::Singleton;

using std::cout;
using std::endl;

namespace
{

void
    call_function_1();

void
    call_function_2();

}

int
    main(
        int,
        const char **)
{
    Singleton::get().do_something();

    call_function_1();

    call_function_2();

    return 0;
}

namespace
{

void
    call_function_1()
{
    cout << "Do something when call_function_1()." << endl;
    Singleton::get().do_something();
}


void
    call_function_2()
{
    cout << "Do something when call_function_2()." << endl;
    Singleton::get().do_something();
}

}
