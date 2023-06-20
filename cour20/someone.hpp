#if !defined(SOMEONE)
    #define SOMEONE
    #include <string>

    class someone
    {
    protected:
        std::string _name;
    public:
        someone() = delete;
        someone(const std::string& name ) noexcept;
        virtual ~someone() = 0;
        virtual void sayGoodNight() const noexcept = 0;
    };
    
    


#endif // SOMEONE
