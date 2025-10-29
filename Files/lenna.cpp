#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
  Mat img;
  img = imread("lenna.png");

  if(img.empty()){
    cerr << "loading failed!" << endl;
  }

  vector<int> params;
  params.push_back(IMWRITE_JPEG_QUALITY);
  params.push_back(99);
  imwrite("lenna.jpg", img, params);
}