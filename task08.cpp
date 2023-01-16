#include <iostream>
using namespace std;
string indicatePosition(int h , int x , int y);
main()
{
    int h;
    int x;
    int y;
    string position;
    cout << "Enter the height = ";
    cin >> h;
    cout << "Enter the x coordinate = ";
    cin >> x;
    cout << "Enter the y coordinate = ";
    cin >> y;
    position = indicatePosition(h , x , y);
    cout << position ;

    

}
string indicatePosition(int h , int x , int y)
{
    if(( x >= 0 && x <= 3*h) && (y == 0))
    {
        return "Border";
    }

    else if((x >= 0 && x <= h) && (y == h))
    {
        return "Border";
    }

    else if(( x >= 2*h && x <= 3*h) && (y == h))
    {
        return "Border";
    }

    else if( x == h && ( y >= h && y <= 4*h ))
    {
        return "Border";
    }

    else if( x == 2*h && ( y >= h &&  y <= 4*h ))
    {
        return "Border";
    }

    else if( x == 0 && ( y >= 0 &&  y <= h ))
    {
        return "Border";
    }

    else if( x == 3*h && ( y >= 0 &&  y <= h ))
    {
        return "Border";
    }

    else if( x >= h && x<= 2*h  &&  y == 4*h )
    {
        return "Border";
    }

    else if( x < 0 || x > 3*h ) 
    {
        return "Outside";
    }

    else if(( x < h)&& (y > h ) )
    {
        return "Outside";
    }

    else if(( x > 2*h)&& (y > h ) )
    {
        return "Outside";
    }

    else if( y < 0  || y > 4*h ) 
    {
        return "Outside";
    }

    else 
    {
        return "Inside";
    }
}