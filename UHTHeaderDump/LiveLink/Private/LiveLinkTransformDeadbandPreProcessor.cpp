#include "LiveLinkTransformDeadbandPreProcessor.h"

ULiveLinkTransformDeadbandPreProcessor::ULiveLinkTransformDeadbandPreProcessor() {
    this->bEnableDeadband = true;
    this->TranslationDeadband = 0.00f;
    this->RotationDeadbandInDegrees = 0.00f;
}


