#include "GeometryScriptLibrary_MeshVertexColorFunctions.h"

UGeometryScriptLibrary_MeshVertexColorFunctions::UGeometryScriptLibrary_MeshVertexColorFunctions() {
}

UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::TransferVertexColorsFromMesh(UDynamicMesh* SourceMesh, UDynamicMesh* TargetMesh, FGeometryScriptTransferMeshVertexColorsOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshSelectionVertexColor(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bCreateColorSeam, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshPerVertexColors(UDynamicMesh* TargetMesh, FGeometryScriptColorList VertexColorList, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshConstantVertexColor(UDynamicMesh* TargetMesh, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bClearExisting, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::GetMeshPerVertexColors(UDynamicMesh* TargetMesh, FGeometryScriptColorList& ColorList, bool& bIsValidColorSet, bool& bHasVertexIDGaps, bool bBlendSplitVertexValues) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsSRGBToLinear(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsLinearToSRGB(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::BlurMeshVertexColors(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, int32 NumIterations, double Strength, EGeometryScriptBlurColorMode BlurMode, FGeometryScriptBlurMeshVertexColorsOptions Options, UGeometryScriptDebug* Debug) {
    return NULL;
}


