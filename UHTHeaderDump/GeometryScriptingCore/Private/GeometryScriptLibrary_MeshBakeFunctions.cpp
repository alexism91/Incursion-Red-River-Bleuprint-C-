#include "GeometryScriptLibrary_MeshBakeFunctions.h"

UGeometryScriptLibrary_MeshBakeFunctions::UGeometryScriptLibrary_MeshBakeFunctions() {
}

FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeVertexColor() {
    return FGeometryScriptBakeTypeOptions{};
}

FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeUVShell(int32 SourceUVLayer, float WireframeThickness, FLinearColor WireframeColor, FLinearColor ShellColor, FLinearColor BackgroundColor) {
    return FGeometryScriptBakeTypeOptions{};
}

FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeTexture(UTexture2D* SourceTexture, int32 SourceUVLayer) {
    return FGeometryScriptBakeTypeOptions{};
}

FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeTangentNormal() {
    return FGeometryScriptBakeTypeOptions{};
}

FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypePosition() {
    return FGeometryScriptBakeTypeOptions{};
}

FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeObjectNormal() {
    return FGeometryScriptBakeTypeOptions{};
}

FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeMultiTexture(const TArray<UTexture2D*>& MaterialIDSourceTextures, int32 SourceUVLayer) {
    return FGeometryScriptBakeTypeOptions{};
}

FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeMaterialID() {
    return FGeometryScriptBakeTypeOptions{};
}

FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeHeight(EGeometryScriptBakeHeightRangeMode RangeMode, float InnerDistance, float OuterDistance) {
    return FGeometryScriptBakeTypeOptions{};
}

FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeFaceNormal() {
    return FGeometryScriptBakeTypeOptions{};
}

FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeCurvature(EGeometryScriptBakeCurvatureTypeMode CurvatureType, EGeometryScriptBakeCurvatureColorMode ColorMapping, float ColorRangeMultiplier, float MinRangeMultiplier, EGeometryScriptBakeCurvatureClampMode Clamping) {
    return FGeometryScriptBakeTypeOptions{};
}

FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeConstant(float Value) {
    return FGeometryScriptBakeTypeOptions{};
}

FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeBentNormal(int32 OcclusionRays, float MaxDistance, float SpreadAngle, EGeometryScriptBakeNormalSpace NormalSpace) {
    return FGeometryScriptBakeTypeOptions{};
}

FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeAmbientOcclusion(int32 OcclusionRays, float MaxDistance, float SpreadAngle, float BiasAngle) {
    return FGeometryScriptBakeTypeOptions{};
}

int32 UGeometryScriptLibrary_MeshBakeFunctions::ConvertBakeResolutionToInt(EGeometryScriptBakeResolution BakeResolution) {
    return 0;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBakeFunctions::BakeVertex(UDynamicMesh* TargetMesh, FTransform TargetTransform, FGeometryScriptBakeTargetMeshOptions TargetOptions, UDynamicMesh* SourceMesh, FTransform SourceTransform, FGeometryScriptBakeSourceMeshOptions SourceOptions, FGeometryScriptBakeOutputType BakeTypes, FGeometryScriptBakeVertexOptions BakeOptions, UGeometryScriptDebug* Debug) {
    return NULL;
}

FGeometryScriptRenderCaptureTextures UGeometryScriptLibrary_MeshBakeFunctions::BakeTextureFromRenderCaptures(UDynamicMesh* TargetMesh, FTransform TargetLocalToWorld, FGeometryScriptBakeTargetMeshOptions TargetOptions, const TArray<AActor*> SourceActors, FGeometryScriptBakeRenderCaptureOptions BakeOptions, UGeometryScriptDebug* Debug) {
    return FGeometryScriptRenderCaptureTextures{};
}

TArray<UTexture2D*> UGeometryScriptLibrary_MeshBakeFunctions::BakeTexture(UDynamicMesh* TargetMesh, FTransform TargetTransform, FGeometryScriptBakeTargetMeshOptions TargetOptions, UDynamicMesh* SourceMesh, FTransform SourceTransform, FGeometryScriptBakeSourceMeshOptions SourceOptions, const TArray<FGeometryScriptBakeTypeOptions>& BakeTypes, FGeometryScriptBakeTextureOptions BakeOptions, UGeometryScriptDebug* Debug) {
    return TArray<UTexture2D*>();
}


