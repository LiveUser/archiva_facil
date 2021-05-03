# archiva_facil Library
A c++ library to make interacting with files more human friendly in c++
----------------------------------------------------
Hecho en 🇵🇷Puerto Rico por Radamés J. Valentín Reyes

----------------------------------------------------
## Version

1.0

## Getting started

- Download this project

- Place this project's folder inside the working directory of your program

- import the library as shown below

  ~~~c++
  #include "./pathToFile/archiva_facil.cpp"
  ~~~

  Congratulations. You're done with the setup and now you can get started.

## Important details

The entire library is a class with static methods so you can access all functionality through the <strong>archiva_facil</strong> class

## Reading file as string

Parameters:

- string filePath = Path to the file that you want to interact with
- bool withLineBreaks = Wether or not to include "\n" for each line break on the returned string

Method:

~~~c++
string readAsString(string filePath,bool withLineBreak)
~~~

## Reading a vector of lines as strings

Parameters:

- string filePath = Path to the file that you want to interact with

Method:

~~~c++
vector<string> readEachLineAsString(string filePath)
~~~

## Write/Overwrite to file

Parameters:

- string filePath = Path to the file that you want to interact with
- string contents =  the string that you want the file to contain

Method:

~~~c++
void writeAsString(string filePath,string contents)
~~~

## Append one line to the file(write one line)

Parameters:

- string filePath = Path to the file that you want to interact with
- string lineContents = Data to be contained on the line

Method:

~~~c++
void appendStringLine(string filePath,string lineContents)
~~~

# Write/Overwrite the file with multiple lines

Parameters:

- string filePath = Path to the file that you want to interact with
- vector<string> lineContents = List of strings, each belonging to a line on the file

Method:

~~~c++
void writeLinesAsString(string filePath,vector<string> lineContents)
~~~

