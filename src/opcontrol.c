

#include "main.h"


void operatorControl() {

	int TARGET = 224;
	int Kp;
	int MAX_OUT = 62;
	int FINAL = 0;

 int error = TARGET - encoderGet(shoulderencoder);
 int output = Kp * error;


	while (1) {

 if(0 > abs(error) < MAX_OUT){
 motorSet(8, -output);

 }
 else if(abs(error) < MAX_OUT){
	 motorSet(8, -output/abs(output)*MAX_OUT);

 }
	else if(abs(error) > MAX_OUT){
motorSet(8, -output);

	}
	else if(abs(error) ){
motorSet(8, 0);

	}

}
}
