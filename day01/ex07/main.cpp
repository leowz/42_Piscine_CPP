#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int     main(int ac, char **av)
{
    std::string     s1;
    std::string     s2;
    std::string     line;
    std::string     fileName;
    std::string     outFile;
    std::ifstream   ifs;
    std::ofstream   ofs;

    if (ac == 4)
    {
        fileName = av[1];
        s1 = av[2];
        s2 = av[3];
        ifs.open(fileName, std::ifstream::in);
        ofs.open(fileName + ".replace", std::ofstream::out);
        if (ifs.fail() || ofs.fail())
        {
            std::cout << "File opening fails" << std::endl; 
            return (1);
        }
        while (std::getline(ifs, line))
        {
            while (line.find(s1) != std::string::npos)
                line.replace(line.find(s1), s1.length(), s2);
            ofs << line << std::endl;
        }
        ifs.close();
        ofs.close();
    }
    else
        std::cout << "usage: file <string1> <string2>" << std::endl;
    return (0);
}
