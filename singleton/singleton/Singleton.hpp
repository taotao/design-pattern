#ifndef _SINGLETON_HPP_
#define _SINGLETON_HPP_

#include <boost/noncopyable.hpp>
#include <boost/scoped_ptr.hpp>
#include <boost/shared_ptr.hpp>

namespace singleton
{

class Singleton
    : private boost::noncopyable
{
public:
    static Singleton &
        get();

private:
    Singleton();

public:
    ~Singleton();

    void
        do_something();

private:
    struct Impl;
    boost::scoped_ptr<Impl> pimpl;

private:
    static boost::shared_ptr<Singleton> instance;
};

}

#endif
