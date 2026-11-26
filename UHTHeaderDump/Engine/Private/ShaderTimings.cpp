#include "ShaderTimings.h"

FShaderTimings::FShaderTimings() {
    this->MinCompileTime = 0.00f;
    this->MaxCompileTime = 0.00f;
    this->TotalCompileTime = 0.00f;
    this->TotalPreprocessTime = 0.00f;
    this->NumCompiled = 0;
    this->AverageCompileTime = 0.00f;
}

