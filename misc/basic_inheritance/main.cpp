/**
 * @file    main.cpp
 * @brief   継承の基本.
 */

#include "zoom.hpp"
#include "optical_zoom.hpp"
#include "digital_zoom.hpp"
#include "hybrid_zoom.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    OpticalZoom opt;    // スコープを抜ければメモリが開放される.スタック領域にメモリが確保される.
    DigitalZoom dig;
    HybridZoom *hbd = new HybridZoom();     // new -> delete必要.ヒープ領域にメモリが確保された.

    int zoom_ratio = 1;

    opt.zoom(2, zoom_ratio);
    cout << "Execute Optical Zoom => Magnification Ratio: " << zoom_ratio << "." << endl;
    dig.zoom(3, zoom_ratio);
    cout << "Execute Digital Zoom => Magnification Ratio: " << zoom_ratio << "." << endl;
    hbd->zoom(2, zoom_ratio);
    cout << "Execute Hybrid Zoom => Magnification Ratio: " << zoom_ratio << "." << endl;

    delete hbd;
    return 0;
}
