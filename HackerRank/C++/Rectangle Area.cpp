
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
  public:
  int h,w;
  void display()
  {
      cout<< h<< " "<<w<<endl;
  }  
};
class RectangleArea : public Rectangle
{
    public:
    void read_input()
    {
        cin>>h>>w;
    }
    void display()
    {
        cout<< h*w<<endl;
    }    
};
