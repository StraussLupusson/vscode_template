#include <iostream>
#include "a.h"
#include "b.h"

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(){
	cout<< "main "<<endl;
	a();
	a();
	b();
	Mat img = imread("/home/strauss/Documents/multi_build_vscode/1.jpg");
	imshow("img",img);
	waitKey(0);

	return 0;
}
