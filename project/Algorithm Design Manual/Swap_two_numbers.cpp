//
//  Devide and conqure.cpp
//  project
//
//  Created by Pradeep Maurya on 25/02/19.
//  Copyright © 2019 pradeep maurya. All rights reserved.
//

#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int t=x;
    x=y;
    y=t;
}
int main()
{
    int x=2;
    int y=5;
    
    cout<<"Value of X and Y before swap "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"Value of X and Y after swap "<<x<<" "<<y<<endl;

}
