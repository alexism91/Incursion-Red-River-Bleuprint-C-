#include "CameraCalibrationSettings.h"

UCameraCalibrationSettings::UCameraCalibrationSettings() {
    this->CalibrationInputTolerance = 0.00f;
    this->CheckerboardDetectionTimeout = 2.00f;
    this->bEnableCalibrationDatasetImportExport = true;
}


