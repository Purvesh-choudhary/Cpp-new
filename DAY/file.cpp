#include <iostream>
#include <fstream>
using namespace std;

int main() {
    system("cls");
    ofstream file("secret.txt"); // create file
    file << "this is the file text ..."; // writes text in file
    file.close(); // close file
    string reader;
    ifstream File_read("secret.txt"); // read file
    while (getline (File_read, reader)) { // print file
       cout << reader;
    }
    File_read.close(); // close file
}