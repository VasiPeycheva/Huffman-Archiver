#ifndef __FOLDER__INPUT__OUTPUT__HEADER__INCLUDED__
#define __FOLDER__INPUT__OUTPUT__HEADER__INCLUDED__

#include <fstream>
#include <dirent.h>
#include <direct.h>
#include <sys/stat.h>
#include "ZipFile.h"
#include "UnzipFile.h"

class FolderIO
{
public:
	FolderIO();
	~FolderIO();

	void readFolder(const char *, std::ifstream &);
	void writeFolder(const char *, std::ofstream &);

private:
	FolderIO(const FolderIO &);
	FolderIO& operator=(const FolderIO &);

	void createFolder(const char *);

private:
	DIR * dir;
	struct dirent *entry;
	struct stat info;
	unsigned short completedFiles;
};

#endif // !__FOLDER__INPUT__OUTPUT__HEADER__INCLUDED__
