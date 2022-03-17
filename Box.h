class Box {
    private:
       int length;
       int width;
       int height;
    public:
      void setlength(int l);
      void setwidth(int w);
      void setheight(int h);
       // write prototypes of setters for length, width and height 
      int getlength();
      int getwidth();
      int getheight();
       // write prototypes of getters for length, width and height
 
       int calcVolume();
};
