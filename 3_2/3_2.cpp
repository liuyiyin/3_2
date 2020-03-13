// 3_2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
using namespace cv;

int main()
{
	cv::Mat srcMat = imread("D:\\1.jpg",0);
	cv::Mat dajinMat;
	cv::Mat quyuMat;
	threshold(srcMat, dajinMat, 100, 255, THRESH_BINARY);
	adaptiveThreshold(srcMat,quyuMat , 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);

	imshow("大津法二值化", dajinMat);
	imshow("区域自适应二值化", quyuMat);
	waitKey(0);
    return 0;
}

