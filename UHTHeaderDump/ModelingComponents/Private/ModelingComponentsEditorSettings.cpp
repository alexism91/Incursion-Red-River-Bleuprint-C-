#include "ModelingComponentsEditorSettings.h"

UModelingComponentsEditorSettings::UModelingComponentsEditorSettings() {
    this->GridMode = EModelingComponentsPlaneVisualizationMode::SimpleGrid;
    this->NumGridLines = 21;
    this->GridSpacing = 100.00f;
    this->GridScale = 1.00f;
    this->GridSize = 0.50f;
}


