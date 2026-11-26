#include "ConstantQAnalyzer.h"
#include "ConstantQSettings.h"

UConstantQAnalyzer::UConstantQAnalyzer() {
    this->Settings = CreateDefaultSubobject<UConstantQSettings>(TEXT("DefaultConstantQSettings"));
}

int32 UConstantQAnalyzer::GetNumCenterFrequencies() const {
    return 0;
}

void UConstantQAnalyzer::GetCenterFrequencies(TArray<float>& OutCenterFrequencies) {
}


