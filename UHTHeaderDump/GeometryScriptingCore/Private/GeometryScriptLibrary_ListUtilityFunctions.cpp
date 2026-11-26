#include "GeometryScriptLibrary_ListUtilityFunctions.h"

UGeometryScriptLibrary_ListUtilityFunctions::UGeometryScriptLibrary_ListUtilityFunctions() {
}

void UGeometryScriptLibrary_ListUtilityFunctions::SetVectorListItem(FGeometryScriptVectorList& VectorList, int32 Index, FVector NewValue, bool& bIsValidIndex) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::SetUVListItem(FGeometryScriptUVList& UVList, int32 Index, FVector2D NewUV, bool& bIsValidIndex) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::SetScalarListItem(FGeometryScriptScalarList& ScalarList, int32 Index, double NewValue, bool& bIsValidIndex) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::SetIndexListItem(FGeometryScriptIndexList& IndexList, int32 Index, int32 NewValue, bool& bIsValidIndex) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::SetColorListItem(FGeometryScriptColorList& ColorList, int32 Index, FLinearColor NewColor, bool& bIsValidIndex) {
}

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListLength(FGeometryScriptVectorList VectorList) {
    return 0;
}

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListLastIndex(FGeometryScriptVectorList VectorList) {
    return 0;
}

FVector UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListItem(FGeometryScriptVectorList VectorList, int32 Index, bool& bIsValidIndex) {
    return FVector{};
}

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetUVListLength(FGeometryScriptUVList UVList) {
    return 0;
}

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetUVListLastIndex(FGeometryScriptUVList UVList) {
    return 0;
}

FVector2D UGeometryScriptLibrary_ListUtilityFunctions::GetUVListItem(FGeometryScriptUVList UVList, int32 Index, bool& bIsValidIndex) {
    return FVector2D{};
}

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListLength(FGeometryScriptTriangleList TriangleList) {
    return 0;
}

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListLastTriangle(FGeometryScriptTriangleList TriangleList) {
    return 0;
}

FIntVector UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListItem(FGeometryScriptTriangleList TriangleList, int32 Triangle, bool& bIsValidTriangle) {
    return FIntVector{};
}

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListLength(FGeometryScriptScalarList ScalarList) {
    return 0;
}

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListLastIndex(FGeometryScriptScalarList ScalarList) {
    return 0;
}

double UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListItem(FGeometryScriptScalarList ScalarList, int32 Index, bool& bIsValidIndex) {
    return 0.0;
}

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListLength(FGeometryScriptIndexList IndexList) {
    return 0;
}

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListLastIndex(FGeometryScriptIndexList IndexList) {
    return 0;
}

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListItem(FGeometryScriptIndexList IndexList, int32 Index, bool& bIsValidIndex) {
    return 0;
}

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetColorListLength(FGeometryScriptColorList ColorList) {
    return 0;
}

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetColorListLastIndex(FGeometryScriptColorList ColorList) {
    return 0;
}

FLinearColor UGeometryScriptLibrary_ListUtilityFunctions::GetColorListItem(FGeometryScriptColorList ColorList, int32 Index, bool& bIsValidIndex) {
    return FLinearColor{};
}

void UGeometryScriptLibrary_ListUtilityFunctions::ExtractColorListChannels(FGeometryScriptColorList ColorList, FGeometryScriptVectorList& VectorList, int32 XChannelIndex, int32 YChannelIndex, int32 ZChannelIndex) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ExtractColorListChannel(FGeometryScriptColorList ColorList, FGeometryScriptScalarList& ScalarList, int32 ChannelIndex) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateVectorList(FGeometryScriptVectorList VectorList, FGeometryScriptVectorList& DuplicateList) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateUVList(FGeometryScriptUVList UVList, FGeometryScriptUVList& DuplicateList) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateScalarList(FGeometryScriptScalarList ScalarList, FGeometryScriptScalarList& DuplicateList) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateIndexList(FGeometryScriptIndexList IndexList, FGeometryScriptIndexList& DuplicateList) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateColorList(FGeometryScriptColorList ColorList, FGeometryScriptColorList& DuplicateList) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertVectorListToArray(FGeometryScriptVectorList VectorList, TArray<FVector>& VectorArray) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertUVListToArray(FGeometryScriptUVList UVList, TArray<FVector2D>& UVArray) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertTriangleListToArray(FGeometryScriptTriangleList TriangleList, TArray<FIntVector>& TriangleArray) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertScalarListToArray(FGeometryScriptScalarList ScalarList, TArray<double>& ScalarArray) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertIndexListToArray(FGeometryScriptIndexList IndexList, TArray<int32>& IndexArray) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertColorListToArray(FGeometryScriptColorList ColorList, TArray<FLinearColor>& ColorArray) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToVectorList(const TArray<FVector>& VectorArray, FGeometryScriptVectorList& VectorList) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToUVList(const TArray<FVector2D>& UVArray, FGeometryScriptUVList& UVList) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToTriangleList(const TArray<FIntVector>& TriangleArray, FGeometryScriptTriangleList& TriangleList) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToScalarList(const TArray<double>& VectorArray, FGeometryScriptScalarList& ScalarList) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToIndexList(const TArray<int32>& IndexArray, FGeometryScriptIndexList& IndexList, EGeometryScriptIndexType IndexType) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToColorList(const TArray<FLinearColor>& ColorArray, FGeometryScriptColorList& ColorList) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ClearVectorList(FGeometryScriptVectorList& VectorList, FVector ClearValue) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ClearUVList(FGeometryScriptUVList& UVList, FVector2D ClearUV) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ClearScalarList(FGeometryScriptScalarList& ScalarList, double ClearValue) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ClearIndexList(FGeometryScriptIndexList& IndexList, int32 ClearValue) {
}

void UGeometryScriptLibrary_ListUtilityFunctions::ClearColorList(FGeometryScriptColorList& ColorList, FLinearColor ClearColor) {
}


