#include "time.hpp"

namespace ti
{
    time::time(std::size_t h, std::size_t m, std::size_t s): hours(h), minutes(m) , seconds(s)
    {}

    time time::operator+(const time& other)const
    {
        return time{hours+other.hours,minutes+other.minutes,seconds + other.seconds};
    }
    time time::operator+(const time& t,int i)
    {
        return time{hours,minutes,seconds + i};
    }

    time time::operator+(int i,const time& t)
    {
        return t+i;
    }

    std::ostream& operator <<(std::ostream& os, const time& t)
    {
        os << t.hours<<':'<<t.minutes<<':'<<t.seconds;
        return os;
    }
} // namespace ti
