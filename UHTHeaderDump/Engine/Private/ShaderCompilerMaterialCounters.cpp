#include "ShaderCompilerMaterialCounters.h"

FShaderCompilerMaterialCounters::FShaderCompilerMaterialCounters() {
    this->MaterialTranslateCalls = 0;
    this->MaterialTranslateTotalTimeSec = 0.00f;
    this->MaterialTranslateTranslationOnlyTimeSec = 0.00f;
    this->MaterialTranslateSerializationOnlyTimeSec = 0.00f;
    this->MaterialCacheHits = 0;
}

