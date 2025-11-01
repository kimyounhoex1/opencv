#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(){
  Mat img1 = imread("./lenna.png");
  Mat img2 = img1(Rect(100, 120, 200, 220)).clone();
  img2 = ~img2;

  imshow("img1", img1);
  imshow("img2", img2);

  waitKey();
  destroyAllWindows();

  return 0;
} 