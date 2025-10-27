#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
  std::cout << "Hello OpenCV" << CV_VERSION << std::endl;

  cv::Mat img;
  img = cv::imread("test.jpg");

  if(img.empty()){
    std::cerr << "Image Load Failed!" << std::endl;
    return -1;
  }
  
  cv::namedWindow("image");
  cv::imshow("image", img);

  cv::waitKey(5000);
  return 0;
}