#include "std_lib_facilities.h"

void swap_v(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_r(int &a, int &b)
{
    int temp; 
    temp = a; 
    a = b;
    b = temp;
}

/*
void swap_cr(const int & a, const int & b)
{
    int temp;
    temp = a; 
    a = b;
    b = temp; 
}
*/

int main()
{
    int x = 7;
    int y = 9;
    swap_v(x,y);
    cout << "swap_v(x,y) = " << x << " " << y << endl;
    swap_r(x,y);
    cout << "swap_r(x,y) = " << x << " " << y << endl;
    //swap_cr(x,y);
    //cout << "swap_cr(x,y) = " << x << " " << y << endl;
    swap_v(7,9);
    cout << "swap_v(7,9) = " << x << " " << y << endl;
    //swap_r(7,9);
    //cout << "swap_r(7,9) = " << x << " " << y << endl;
    //swap_cr(7,9);
    //cout << "swap_cr(7,9) = " << x << " " << y << endl;
    const int cx = 7;
    const int cy = 9; 
    swap_v(cx, cy);
    cout << "swap_v(cx,cy) = " << cx << " " << cy << endl;
    keep_window_open();
    return 0;
}