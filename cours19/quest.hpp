#ifndef __Quest__
    #define __Quest__
    #include <string>
    #include "questStatus.hpp"

    class quest
    {
        
        private:
            std::string _name;
            std::string _description;
            questStatus _status;
            
        public:
        quest() = delete;
        quest(const std::string& name , const std::string& description, int id) noexcept;
        void show() const noexcept;
    };
    
    

#endif