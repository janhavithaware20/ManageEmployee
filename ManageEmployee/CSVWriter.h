#pragma once
#include<string>
#include<vector>
#include"CEmployee.cpp"
using namespace std;
class CSVWriter
{
	string fileName;
	string delimiter;
	int linescount;
public:
	CSVWriter(string name, string delm = ",") :fileName(name), delimiter(delm), linescount(0) {}
	template<typename T> void DownloadData(T start, T endt);
};

