

/* Define the exception here */
class BadLengthException{
    int n;
    public:
    BadLengthException(int d)
    {
        n=d;
    }
    int what()
    {
        return n;
    }
};
