// Andrew Farmer
// ITSE 1307
// Contact Card
// Learning how to use files

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	string strFileName = "address.vcf";
	ofstream fileAddress;
	string strFirst = "Natalie";
	string strLast = "Salavar";
	string strEmail = "nataliesalavar@gmail.com";
	string strWebsite = "Natalie.com";
	string strPhone = "(210) 555-5555";
	string strCompany = "Ebay";
	string strTitle = "System Admin";
	//cout << "Please enter a filename: ";
	//cin >> strFileName;
	fileAddress.open(strFileName);
	fileAddress << "BEGIN:VCARD" << endl;
	fileAddress << "VERSION:2.1" << endl;
	fileAddress << "N:" << strLast << ";" << strFirst << ";;" << endl;
	fileAddress << "FN:" << strFirst << " " << strLast << endl;
	fileAddress << "TEL;WORK;VOICE:" << strPhone << endl;
	fileAddress << "URL:" << strWebsite << endl;
	fileAddress << "TITLE:" << strTitle << endl;
	fileAddress << "EMAIL:" << strEmail << endl;
	fileAddress << "ORG:" << strCompany << endl;
	fileAddress << "END:VCARD" << endl;
	fileAddress.close();
	cout << "Wrote " << strFileName << endl;
    return 0;
}

