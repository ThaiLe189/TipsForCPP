cv::Rect roi( cv::Point( originX, originY ), smallImage.size() );
smallImage.copyTo( bigImage( roi ) );
