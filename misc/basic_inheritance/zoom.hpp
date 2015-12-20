/**
 * @file    zoom.hpp
 * @brief   継承の基本.
 */

#ifndef _ZOOM_HPP_
#define _ZOOM_HPP_

#include <iostream>

using namespace std;

class Zoom
{
public:
    Zoom()
    {
        cout << "Create Zoom Instance" << endl;
    }
    virtual ~Zoom()
    {
        cout << "Delete Zoom Instance" << endl;
    }
    virtual void zoom(const int distance, int& ratio){}
};

#endif
