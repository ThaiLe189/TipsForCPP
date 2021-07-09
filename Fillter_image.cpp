cv::Mat Filter(const cv::Mat& src, int num_filter)
{
    assert(src.type() == CV_32SC1);
    cv::Mat after_filter;
    inRange(src, cv::Scalar(num_filter), cv::Scalar(num_filter), after_filter);
    return after_filter;
}

int main()
{
	cv::Mat filter = Filter(mask_res_resized, label_value);	
}
