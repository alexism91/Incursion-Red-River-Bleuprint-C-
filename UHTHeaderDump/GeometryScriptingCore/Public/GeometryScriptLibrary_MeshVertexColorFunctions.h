#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGeometryScriptBlurColorMode.h"
#include "GeometryScriptBlurMeshVertexColorsOptions.h"
#include "GeometryScriptColorFlags.h"
#include "GeometryScriptColorList.h"
#include "GeometryScriptMeshSelection.h"
#include "GeometryScriptTransferMeshVertexColorsOptions.h"
#include "GeometryScriptLibrary_MeshVertexColorFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshVertexColorFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshVertexColorFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* TransferVertexColorsFromMesh(UDynamicMesh* SourceMesh, UDynamicMesh* TargetMesh, FGeometryScriptTransferMeshVertexColorsOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetMeshSelectionVertexColor(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bCreateColorSeam, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetMeshPerVertexColors(UDynamicMesh* TargetMesh, FGeometryScriptColorList VertexColorList, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetMeshConstantVertexColor(UDynamicMesh* TargetMesh, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bClearExisting, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetMeshPerVertexColors(UDynamicMesh* TargetMesh, FGeometryScriptColorList& ColorList, bool& bIsValidColorSet, bool& bHasVertexIDGaps, bool bBlendSplitVertexValues);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ConvertMeshVertexColorsSRGBToLinear(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ConvertMeshVertexColorsLinearToSRGB(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* BlurMeshVertexColors(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, int32 NumIterations, double Strength, EGeometryScriptBlurColorMode BlurMode, FGeometryScriptBlurMeshVertexColorsOptions Options, UGeometryScriptDebug* Debug);
    
};

