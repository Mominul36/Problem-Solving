

/*Write the class AddElements here*/
template<class t>
class AddElements
{
    t a,b;
    public:
     AddElements(t x)
    {
        a=x;
    }
    t add(t y)
    {
        b=y;
        return a+b;
    }
    t concatenate(t y)
    {
        b=y;
        return a+b;
    }
};

