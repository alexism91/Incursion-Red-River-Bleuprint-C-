#include "GeometryScriptRenderCaptureTextures.h"

FGeometryScriptRenderCaptureTextures::FGeometryScriptRenderCaptureTextures() {
    this->BaseColorMap = NULL;
    this->bHasBaseColorMap = false;
    this->NormalMap = NULL;
    this->bHasNormalMap = false;
    this->PackedMRSMap = NULL;
    this->bHasPackedMRSMap = false;
    this->MetallicMap = NULL;
    this->bHasMetallicMap = false;
    this->RoughnessMap = NULL;
    this->bHasRoughnessMap = false;
    this->SpecularMap = NULL;
    this->bHasSpecularMap = false;
    this->EmissiveMap = NULL;
    this->bHasEmissiveMap = false;
    this->OpacityMap = NULL;
    this->bHasOpacityMap = false;
    this->SubsurfaceColorMap = NULL;
    this->bHasSubsurfaceColorMap = false;
}

