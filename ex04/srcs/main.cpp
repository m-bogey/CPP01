#include <iostream>
#include <fstream>
#include <string>

std::string replace_content(std::string file, std::string s1, std::string s2)
{
    std::string new_s;
    size_t  pos = 0;
    size_t  found;

    while ((found = file.find(s1, pos)) != std::string::npos)
    {
        new_s.append(file, pos, found - pos);
        new_s.append(s2);
        pos = found + s1.length();
    }
    new_s.append(file, pos);
    return (new_s);
}

int main(int ac, char **ag)
{
    (void)ag;
    if (ac != 4)
    {
        std::cerr << "The program need 3 parameters" << std::endl;
        return (0);
    }
    std::string filename = ag[1];
    std::string s1 = ag[2];
    std::string s2 = ag[3];

    //ouvrir le fichier
    std::ifstream inputFile(filename.c_str());
    if (!inputFile)
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return (1);
    }

    //lire le fichier
    std::string fileContent((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
    inputFile.close();
    //remplace les occurences de s1 par s2
    std::string modified_content = replace_content(fileContent, s1, s2);
    
    // creer le new fichier
    std::string newFilename = filename + ".replace";

    //ouvrir le nouveau fichier en ecriture
    std::ofstream outputFile(newFilename.c_str());
    if (!outputFile)
    {
        std::cerr << "Error: Could not create file " << newFilename << std::endl;
        return (1);
    }
    // ecrire le contenu modifie dans le new fichier
    outputFile << modified_content;
    outputFile.close();
    return (0);
}