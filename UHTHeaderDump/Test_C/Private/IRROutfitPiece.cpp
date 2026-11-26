#include "IRROutfitPiece.h"

FIRROutfitPiece::FIRROutfitPiece() {
    this->Mesh = NULL;
    this->View = EIRROutfitView::Everyone;
    this->bFirstPerson = false;
    this->Groom = NULL;
    this->Binding = NULL;
    this->bCastShadow = false;
    this->StaticMesh = NULL;
    this->bCarriedGroom = false;
}

