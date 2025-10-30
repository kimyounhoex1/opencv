#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
// typedef std::string String;
int main() {
  String str1 = "Hello";
  String str2 = "world";
  String str3 = str1 + " " + str2;

  Mat imgs[3];
  for(int i = 0; i<3; i++) {
    String filename = format("./static/test%d.jpg", i);
    imgs[i] = imread(filename);
    namedWindow("images");
    imshow("image", imgs[i]);
    waitKey(5000);
  }

  return 0;
}