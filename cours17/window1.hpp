#ifndef __WINDOW1__
    #define __WINDOW1__
    #include <string>
   class window1
   {
   private:
        std::string title;
   public:
        window1(std::string t);
        std::string getTitle() const;
        void set_title(std::string title);

    
   };
   
   
#endif