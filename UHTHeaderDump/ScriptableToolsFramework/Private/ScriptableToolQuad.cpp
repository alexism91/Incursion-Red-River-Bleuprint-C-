#include "ScriptableToolQuad.h"

UScriptableToolQuad::UScriptableToolQuad() {
    this->bIsDirty = false;
    this->TriangleAID = 0;
    this->TriangleBID = 0;
}

void UScriptableToolQuad::SetQuadUVs(FVector2D A, FVector2D B, FVector2D C, FVector2D D) {
}

void UScriptableToolQuad::SetQuadPoints(FVector A, FVector B, FVector C, FVector D) {
}

void UScriptableToolQuad::SetQuadNormals(FVector A, FVector B, FVector C, FVector D) {
}

void UScriptableToolQuad::SetQuadMaterial(UMaterialInterface* Material) {
}

void UScriptableToolQuad::SetQuadColors(FColor A, FColor B, FColor C, FColor D) {
}


