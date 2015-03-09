// This #include statement was automatically added by the Spark IDE.
#include "Tinker/Tinker.h"

void setup() {
	//Register all the Tinker functions
	Spark.function("digitalread", tinkerDigitalRead);
	Spark.function("digitalwrite", tinkerDigitalWrite);
	Spark.function("analogread", tinkerAnalogRead);
	Spark.function("analogwrite", tinkerAnalogWrite);
}

void loop() {
}
