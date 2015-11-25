#include <singleton/Singleton.hpp>

#include <iostream>

using boost::shared_ptr;

using std::cout;
using std::endl;

namespace singleton
{

shared_ptr<Singleton> Singleton::instance;

Singleton &
    Singleton::get()
{
    if (!instance)
        instance.reset(new Singleton());

    return *instance;
}

struct Singleton::Impl
{
    Impl()
        : count(0)
    {
    }

    int     count;
};

Singleton::Singleton()
    : pimpl(new Impl())
{
}

Singleton::~Singleton()
{
}

void
    Singleton::do_something()
{
    pimpl->count++;
    cout << "Call do_something() " << pimpl->count << " times." << endl;
}

}
