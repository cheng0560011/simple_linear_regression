// this is pseudo

void avg_csv(string inF, float &v, float &codevalue, string outF){

        fstream fin(filename);
        
        int time;
        float value, old_value;
        char c;
        
        // first time
        fin >> time >> c >> old_value;
        // after 2nd
        while( fin >> time >> c >> value ){
                // assume each line will be format time, value
                fin >> time >> c >> value;
                old_value = avg2(value; old_value); // value avg with old avg
                                                    // also renew old avg to new one
        }
        
        fstream fout(outputpath, std::ios::app); // append file name and avg value to end of output file
        fout <<  << filename2voltaage(outF) << ',' << old_value << endl;
}

float filename2voltaage(string n) {
        // this function convert input string "*p*.csv" into a float number
        // 1p0 will be 1.0
}

float simple_linear_regression(){
  // not sure how to implement
  // return a, b as float
}
