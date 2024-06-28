
double area(triangle t)
{
    double s= (double)(t.a+t.b+t.c)/2;
    double area= (double)sqrt(s*(s-t.a)*(s-t.b) * (s-t.c));
    return area;
}
void sort_by_area(triangle* t, int n) {
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            double d=area(t[j]), dd=area(t[j+1]);
            if(d>dd)
            {
                triangle temp;
                temp= t[j];
                t[j]=t[j+1];
                t[j+1]=temp;
            }
        }    
    }
	
}

