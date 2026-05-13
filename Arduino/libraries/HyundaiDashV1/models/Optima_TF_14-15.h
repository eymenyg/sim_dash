// 2014-2015 Kia Optima (TF F/L), US-built VIN: 5XXGM, P/N: 94031-2T270

#include <HyundaiDashV1.h>

const uint8_t calibEctValues[12] = {138, 143, 148, 153, 158, 214, 217, 220, 225, 230, 232, 234};

HyundaiDashV1 cluster(
    // HS1Role, HS2Role
    HyundaiDashV1::HighSideRole::ILL, HyundaiDashV1::HighSideRole::SRS,
    // LS1Role, LS2Role
    HyundaiDashV1::LowSideRole::OIL, HyundaiDashV1::LowSideRole::BAT,
    // C_CANLightID, tailLightID, tailLightIndex0, tailLightIndex0Value, tailLightIndex1, tailLightIndex1Value
    0x0, 0x100, 4, 64, 0, 0,
    // highBeamID, highBeamIndex, highBeamValue
    0x104, 2, 32,
    // fogLightID, fogLightIndex, fogLightValue
    0x104, 2, 4,
    // fuseSwID, fuseSwIndex, fuseSwValue
    0x104, 5, 64,
    // extraDataID, extraDataIndex, extraDataValue
    0x44, 3, 132, //25*C
    // turnSignalID, turnSignalIndex, turnSignalLeftValue, turnSignalRightValue
    0x104, 3, 1, 2,
    // calibEctValues - calibrated ECT values
    calibEctValues,
    //hasBodyCAN, enableTurnSignalSound, maxSpeed, needleSweep
    true, true, 260, false
);