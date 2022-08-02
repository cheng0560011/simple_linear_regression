# simple_linear_regression
A chip is used for input DC to DUT and will read back measured DC with ADC sample.

There will be a folder of xxpxx.csv files.
The files will be measurement of a voltage command and a 250k samples of ADC back.
This project is to merge the csv files in the folder into 1 csv file with voltage command and ADC sample averaged float number.
After that, simple linear regression of input voltage command and read code equation will be returned as a, b of y = ax + b
