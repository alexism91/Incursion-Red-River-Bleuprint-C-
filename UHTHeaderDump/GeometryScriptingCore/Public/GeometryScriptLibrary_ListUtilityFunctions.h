#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGeometryScriptIndexType.h"
#include "GeometryScriptColorList.h"
#include "GeometryScriptIndexList.h"
#include "GeometryScriptScalarList.h"
#include "GeometryScriptTriangleList.h"
#include "GeometryScriptUVList.h"
#include "GeometryScriptVectorList.h"
#include "GeometryScriptLibrary_ListUtilityFunctions.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_ListUtilityFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_ListUtilityFunctions();

    UFUNCTION(BlueprintCallable)
    static void SetVectorListItem(UPARAM(Ref) FGeometryScriptVectorList& VectorList, int32 Index, FVector NewValue, bool& bIsValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetUVListItem(UPARAM(Ref) FGeometryScriptUVList& UVList, int32 Index, FVector2D NewUV, bool& bIsValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalarListItem(UPARAM(Ref) FGeometryScriptScalarList& ScalarList, int32 Index, double NewValue, bool& bIsValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetIndexListItem(UPARAM(Ref) FGeometryScriptIndexList& IndexList, int32 Index, int32 NewValue, bool& bIsValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorListItem(UPARAM(Ref) FGeometryScriptColorList& ColorList, int32 Index, FLinearColor NewColor, bool& bIsValidIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetVectorListLength(FGeometryScriptVectorList VectorList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetVectorListLastIndex(FGeometryScriptVectorList VectorList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetVectorListItem(FGeometryScriptVectorList VectorList, int32 Index, bool& bIsValidIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUVListLength(FGeometryScriptUVList UVList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUVListLastIndex(FGeometryScriptUVList UVList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetUVListItem(FGeometryScriptUVList UVList, int32 Index, bool& bIsValidIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTriangleListLength(FGeometryScriptTriangleList TriangleList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTriangleListLastTriangle(FGeometryScriptTriangleList TriangleList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector GetTriangleListItem(FGeometryScriptTriangleList TriangleList, int32 Triangle, bool& bIsValidTriangle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetScalarListLength(FGeometryScriptScalarList ScalarList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetScalarListLastIndex(FGeometryScriptScalarList ScalarList);
    
    UFUNCTION(BlueprintPure)
    static double GetScalarListItem(FGeometryScriptScalarList ScalarList, int32 Index, bool& bIsValidIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetIndexListLength(FGeometryScriptIndexList IndexList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetIndexListLastIndex(FGeometryScriptIndexList IndexList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetIndexListItem(FGeometryScriptIndexList IndexList, int32 Index, bool& bIsValidIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetColorListLength(FGeometryScriptColorList ColorList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetColorListLastIndex(FGeometryScriptColorList ColorList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetColorListItem(FGeometryScriptColorList ColorList, int32 Index, bool& bIsValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ExtractColorListChannels(FGeometryScriptColorList ColorList, FGeometryScriptVectorList& VectorList, int32 XChannelIndex, int32 YChannelIndex, int32 ZChannelIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ExtractColorListChannel(FGeometryScriptColorList ColorList, FGeometryScriptScalarList& ScalarList, int32 ChannelIndex);
    
    UFUNCTION(BlueprintCallable)
    static void DuplicateVectorList(FGeometryScriptVectorList VectorList, FGeometryScriptVectorList& DuplicateList);
    
    UFUNCTION(BlueprintCallable)
    static void DuplicateUVList(FGeometryScriptUVList UVList, FGeometryScriptUVList& DuplicateList);
    
    UFUNCTION(BlueprintCallable)
    static void DuplicateScalarList(FGeometryScriptScalarList ScalarList, FGeometryScriptScalarList& DuplicateList);
    
    UFUNCTION(BlueprintCallable)
    static void DuplicateIndexList(FGeometryScriptIndexList IndexList, FGeometryScriptIndexList& DuplicateList);
    
    UFUNCTION(BlueprintCallable)
    static void DuplicateColorList(FGeometryScriptColorList ColorList, FGeometryScriptColorList& DuplicateList);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertVectorListToArray(FGeometryScriptVectorList VectorList, TArray<FVector>& VectorArray);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertUVListToArray(FGeometryScriptUVList UVList, TArray<FVector2D>& UVArray);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertTriangleListToArray(FGeometryScriptTriangleList TriangleList, TArray<FIntVector>& TriangleArray);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertScalarListToArray(FGeometryScriptScalarList ScalarList, TArray<double>& ScalarArray);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertIndexListToArray(FGeometryScriptIndexList IndexList, TArray<int32>& IndexArray);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertColorListToArray(FGeometryScriptColorList ColorList, TArray<FLinearColor>& ColorArray);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertArrayToVectorList(const TArray<FVector>& VectorArray, FGeometryScriptVectorList& VectorList);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertArrayToUVList(const TArray<FVector2D>& UVArray, FGeometryScriptUVList& UVList);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertArrayToTriangleList(const TArray<FIntVector>& TriangleArray, FGeometryScriptTriangleList& TriangleList);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertArrayToScalarList(const TArray<double>& VectorArray, FGeometryScriptScalarList& ScalarList);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertArrayToIndexList(const TArray<int32>& IndexArray, FGeometryScriptIndexList& IndexList, EGeometryScriptIndexType IndexType);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertArrayToColorList(const TArray<FLinearColor>& ColorArray, FGeometryScriptColorList& ColorList);
    
    UFUNCTION(BlueprintCallable)
    static void ClearVectorList(UPARAM(Ref) FGeometryScriptVectorList& VectorList, FVector ClearValue);
    
    UFUNCTION(BlueprintCallable)
    static void ClearUVList(UPARAM(Ref) FGeometryScriptUVList& UVList, FVector2D ClearUV);
    
    UFUNCTION(BlueprintCallable)
    static void ClearScalarList(UPARAM(Ref) FGeometryScriptScalarList& ScalarList, double ClearValue);
    
    UFUNCTION(BlueprintCallable)
    static void ClearIndexList(UPARAM(Ref) FGeometryScriptIndexList& IndexList, int32 ClearValue);
    
    UFUNCTION(BlueprintCallable)
    static void ClearColorList(UPARAM(Ref) FGeometryScriptColorList& ColorList, FLinearColor ClearColor);
    
};

