#include <HyundaiDashV1.h>

// Uncomment one of the following include blocks:

// #include "models/Elantra_MD_11-13.h"
// #include "models/Optima_TF_14-15.h"
// #include "models/Sonata_YF_11-14.h"
// #include "models/Soul_PS_14-16.h"

HyundaiDashV1* activeCluster = &cluster;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  activeCluster->beginCAN();
}

void loop() {
  // put your main code here, to run repeatedly:
  activeCluster->run();
}
