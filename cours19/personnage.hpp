#ifndef __Personnage__
    #define __Personnage__
    #include <string>
    #include"unit.hpp"

    class personnage : public Unit
    {
        using Unit::Unit;
    private:
        int _level;
    public:
        personnage()= delete;
        personnage(int id, const std::string& name,int level ) noexcept;
        int getLevel() const noexcept;
    };
    
    

#endif