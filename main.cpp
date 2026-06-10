#include <cmath>
#include <string>
#include <vector>
#include <iostream>

#include "quickcg.h"
using namespace QuickCG;
using namespace std;

int main(int argc, char *argv[])
{
  unsigned long w = 0, h = 0;
  std::vector<ColorRGB> image;
  loadImage(image, w, h, "pics/flower.png");
  screen(w, h, 0, "RGB Color");

  ColorRGB color; //the color for the pixels

  for(int y = 0; y < h; y++)
  for(int x = 0; x < w; x++)
  {
    //here the negative color is calculated!
    color.r = image[y * w + x].r;
    //red component set to zero
    color.g = image[y * w + x].g;
    color.b = 0;

    pset(x, y, color);
  }

  redraw();
  sleep();
  return 0;
}