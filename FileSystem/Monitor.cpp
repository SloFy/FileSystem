#include "FileSystem.h"



int main()
{
	FileSystem f;
	Block r;
	r.Clean();
	r.InsertString(0,"12234455667");
	//f.createFile("test");
	f.openFile("test");
	f.format("23","tom","otherString","last");
	f.writeBlock(r,6);

};
