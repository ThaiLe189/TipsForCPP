std::vector<std::string> get_files(/*const char* path*/) {
	std::vector<std::string> listImage;
    std::vector<cv::String> fn1;
    cv::glob("./img/*.jpg", fn1, false);
    //cv::glob("E:/libtorch/TEST/*.jpg", fn, false);
    size_t count1 = fn1.size(); //number of png files in images folder
    for (size_t i = 0; i < count1; i++)
        listImage.push_back(fn1[i]);
    
    return listImage
}
