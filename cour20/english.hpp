#if !defined(ENGLISH)
    #define ENGLISH
    #include <string>
    #include "someone.hpp"

    class English : public someone
    {
        using someone::someone;
    public:
        void sayGoodNight() const noexcept override;
    };
    
    


#endif // English