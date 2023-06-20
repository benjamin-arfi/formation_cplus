#if !defined(TIME)
    #define TIME
    #include <ostream>

    namespace ti
    {
        class time
        {
        private:
            std::size_t hours;
            std::size_t minutes;
            std::size_t seconds;
        public:
            time(std::size_t h, std::size_t m, std::size_t s);
            time operator+(const time& other)const;

        friend std::ostream& operator <<(std::ostream& os, const time& t);
        };

        
    }



#endif // __TIME__
