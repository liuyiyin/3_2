// 3_2.cpp : �������̨Ӧ�ó������ڵ㡣
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

	imshow("��򷨶�ֵ��", dajinMat);
	imshow("��������Ӧ��ֵ��", quyuMat);
	waitKey(0);
    return 0;
}

