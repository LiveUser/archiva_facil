#include "archiva_facil.cpp"
#include <iostream>

int main(){
  string filePath = "./database/test.txt";
  string savedText = archiva_facil::readAsString(filePath,true);
  string newFileContents;
  //Display file contents
  cout << "Your file says:" << endl;
  cout << savedText << endl;
  //--------------------------------------------------------------------------
  //Write to your file
  cout << "Write something to replace the text with?" << endl;
  //Gets input including spaces
  getline(cin,newFileContents);
  archiva_facil::writeAsString(filePath,newFileContents);
  //--------------------------------------------------------------------------
  //Display updated content
  cout << "New file contents:" << endl;
  savedText = archiva_facil::readAsString(filePath,true);
  cout << savedText;
  //--------------------------------------------------------------------------
  cout << "Write something to append to the file?" << endl;
  getline(cin,newFileContents);
  archiva_facil::appendStringLine(filePath,newFileContents);
  //--------------------------------------------------------------------------
  //Display updated content
  cout << "New file contents:" << endl;
  savedText = archiva_facil::readAsString(filePath,true);
  cout << savedText;
  //--------------------------------------------------------------------------
  //Test writeLinesAsString
  vector<string> multiLineText = {};
  int howManyLines;
  cout << "How many lines of text do you want to write?" << endl;
  cin >> howManyLines;
  for(int i = 0; i < howManyLines; ++i){
    string nLine;
    system("clear");
    cout << "Text for line " << (i+1) << endl;
    //Make getline a blocking process https://stackoverflow.com/questions/15056120/wont-wait-for-getline-c
    cin.ignore();
    getline(cin,nLine);
    multiLineText.push_back(nLine);
  }
  archiva_facil::writeLinesAsString(filePath,multiLineText);
  //--------------------------------------------------------------------------
  //Display updated content
  cout << "New file contents:" << endl;
  savedText = archiva_facil::readAsString(filePath,true);
  cout << savedText;
  //--------------------------------------------------------------------------
}