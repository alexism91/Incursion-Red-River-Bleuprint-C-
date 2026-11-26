#include "ScriptableToolTriangleSet.h"

UScriptableToolTriangleSet::UScriptableToolTriangleSet() {
    this->ToolDrawableGeometry = NULL;
    this->TriangleSet = NULL;
}

void UScriptableToolTriangleSet::SetAllTrianglesMaterial(UMaterialInterface* Material) {
}

void UScriptableToolTriangleSet::SetAllTrianglesColor(FColor Color) {
}

void UScriptableToolTriangleSet::RemoveTriangle(UScriptableToolTriangle* Triangle) {
}

void UScriptableToolTriangleSet::RemoveQuad(UScriptableToolQuad* Quad) {
}

void UScriptableToolTriangleSet::RemoveAllFaces() {
}

UScriptableToolTriangle* UScriptableToolTriangleSet::AddTriangle() {
    return NULL;
}

UScriptableToolQuad* UScriptableToolTriangleSet::AddQuad() {
    return NULL;
}


