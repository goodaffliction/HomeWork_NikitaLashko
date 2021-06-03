#include <iostream>
#include <string>
#include <fstream>

void mergeFiles(const char*, const char*, const char*);
void createFile(const char*);
void findWord(const char*);

int main()
{
    createFile("firstFile.txt");
    createFile("secondFile.txt");
    mergeFiles("firstFile.txt", "secondFile.txt", "thirdFile.txt");
    findWord("thirdFile.txt");

    return 0;
}

void createFile(const char* filename)
{
    std::ofstream os(filename);

    char str[80];

    std::cout << "Enter the lines. Enter 'q' to stop." << std::endl;

    do
    {
        std::cout << "#";
        std::cin.getline(str, 80);

        os << str << std::endl;
    } while (*str != 'q');

    os.close();
    return;
}


void mergeFiles(const char* filename1, const char* filename2, const char* filename3)
{
    std::ofstream ofs(filename3);
    std::ifstream ifs;

    ifs.open(filename1);    // otkryvaem fail
    ifs.seekg(0, ifs.end);  // peretaskivaem polozhenie na konec
    int len = ifs.tellg();  // schityvaem skol'ko baitov proshli
    ifs.seekg(0, ifs.beg);  // vozvrashaem polozhenie na nachalo

    char* buffer = new char[len]; // sozdaem massiv iz charov razmerom ravnym s kolichestvom baitov
    ifs.read(buffer, len);        // schityvaem
    ofs.write(buffer, len);       // zapisyvaem
    ifs.close();                  
    delete[] buffer;

    ifs.open(filename2, std::ifstream::binary);
    ifs.seekg(0, ifs.end);
    len = ifs.tellg();
    ifs.seekg(0, ifs.beg);

    buffer = new char[len];
    ifs.read(buffer, len);
    ofs.write(buffer, len);
    ifs.close();
    delete[] buffer;
}

void findWord(const char* filename3)
{
    std::string file_in, word_in, word_fn;

    std::ifstream in(filename3);
    int i = 0;

    std::cout << "Enter word: ";
    std::cin >> word_fn;

    while (in >> word_in)
    {
        if (word_in == word_fn)
        {
            std::cout << "Word '" << word_fn << "' fined.\n";
            in.close();
            i++;
        }
    }

    if (i == 0)
    {
        std::cout << "Not found\n";
    }

    in.close();
}