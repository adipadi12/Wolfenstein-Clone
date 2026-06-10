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
  //declare image buffers
  std::vector<ColorRGB> image1, image2, image3, result;

  //load the images into the buffers. This assumes all have the same size.
  loadImage(image1, w, h, "pics/photo1.png");
  loadImage(image2, w, h, "pics/photo2.png");
  loadImage(image3, w, h, "pics/photo3.png");
  result.resize(w * h);

  //set up the screen
  screen(w,h,0, "Image Arithmetic");

  //do the image arithmetic (here: 'average')
  for(int y = 0; y < h; y++)
  for(int x = 0; x < w; x++)
  {
    result[y * w + x].r = (image1[y * w + x].r + image2[y * w + x].r) / 2;
    result[y * w + x].g = (image1[y * w + x].g + image2[y * w + x].g) / 2;
    result[y * w + x].b = (image1[y * w + x].b + image2[y * w + x].b) / 2;
  }

  //draw the result buffer to the screen
  for(int y = 0; y < h; y++)
  for(int x = 0; x < w; x++)
  {
    pset(x, y, result[y * w + x]);
  }

  //redraw & sleep
  redraw();
  sleep();
}