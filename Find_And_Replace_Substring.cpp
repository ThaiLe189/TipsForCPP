#include <iostream>
#include <string>
void findAndReplaceAll(std::string & data, std::string toSearch, std::string replaceStr)
{
    size_t pos = data.find(toSearch);
    while( pos != std::string::npos)
    {
        data.replace(pos, toSearch.size(), replaceStr);
        pos =data.find(toSearch, pos + replaceStr.size());
    }
}
int main()
{
    std::string data = "Boost Library is simple C++ Library";
    std::cout<<data<<std::endl;
    findAndReplaceAll(data, "Lib", "XXX");
    std::cout<<data<<std::endl;
    return 0;
}
