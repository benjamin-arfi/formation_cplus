#if !defined(FRANCAIS)
    #define FRANCAIS
    #include <string>
    #include "someone.hpp"

    class Francais : public someone
    {
        using someone::someone;
    public:
        void sayGoodNight() const noexcept override;
    };
    
    


#endif // FRANCAIS