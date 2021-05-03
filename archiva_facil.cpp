//Hecho en 🇵🇷Puerto Rico por Radamés J. Valentín Reyes
#ifndef archiva_facil_heading
#define archiva_facil_heading

#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class archiva_facil{
  public:
    //Read full file as one string
    static string readAsString(string filePath,bool withLineBreak){
      string fullString = "";
      //Read the lines
      vector<string> allLines = readEachLineAsString(filePath);
      //Concatenate lines
      for(int i = 0; i < allLines.size(); i++){
        fullString += withLineBreak ? (allLines.at(i) + "\n") : allLines.at(i);
      }
      return fullString;
    }
    //Get a List of the strings at each line of the text file
    static vector<string> readEachLineAsString(string filePath){
      string lineText;
      ifstream MyFile(filePath);
      vector<string> allLines;
      while (getline (MyFile, lineText)) {
        allLines.push_back(lineText);
      }
      MyFile.close();
      return allLines;
    }
    static void writeAsString(string filePath,string contents){
      //https://stackoverflow.com/questions/478075/creating-files-in-c
      ofstream MyFile(filePath);
      //TODO: Create folders in path recursively
      //Create file
      MyFile << contents;
      MyFile.close();
    }
    static void appendStringLine(string filePath,string lineContents){
      //Read file lines
      vector<string> allLines = readEachLineAsString(filePath);
      //Add the new data
      allLines.push_back(lineContents);
      //Join all lines
      string concatenatedLines = "";
      for(int i = 0; i < allLines.size(); i++){
        concatenatedLines += allLines.at(i) + "\n";
      }
      //Update the file with the new contents
      writeAsString(filePath,concatenatedLines);
    }
    static void writeLinesAsString(string filePath,vector<string> lineContents){
      //Join all lines
      string concatenatedLines = "";
      for(int i = 0; i < lineContents.size(); i++){
        concatenatedLines += lineContents.at(i) + "\n";
      }
      //Update the file with the new contents
      writeAsString(filePath,concatenatedLines);
    }
};
#endif