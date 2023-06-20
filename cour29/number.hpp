#if !defined(_DATACONTAINER__)
    #define _DATACONTAINER__

    template <typename T>
    class DataContainer
    {
    private:
        T _n;
       
    public:
        DataContainer(T n ):_n(n)  {};
        T getData() const {return _n;}
    };
    
    
    // template <typename T>
    // T sum(T a ,T b);

    // #include"number.tpp"
    


#endif // _
