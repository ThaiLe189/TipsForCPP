std::locale oldlocale = std::locale::global(std::locale("LC_CTYPE=.utf8"));
std::vector<std::string> label;

std::ifstream file(/*path to file*/);

std::string str;
while (std::getline(file, str))
{
    label.push_back(str);
}
