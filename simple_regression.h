//this is pseudo code

inlcude <stdio>
include <fstream>


class simple_linear_regression{

string folderpath; //read a folder with csv files, format not sure
                   //assume y=xi+b
                   //the csv files will be y.csv, with xi are measured
                   //each csv files need to to get average
string outputpath; //output a csv with yi and avg bar-xi


void avg_csv(string filename, float &v, float &codevalue, string outputpath); // merge the folder of csv files to 1 csv file with yi and xi
float filename2voltaage(string filename); //yi is from name of csv inside the folder
simple_linear_regression(string filename, float &a, float &b); // use merged csv file and use simple linear regression for yi = axi + b

}
