#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "BlueprintFunctionLibrary.h"
#include "EStructUtilsResult.h"
#include "BlueprintInstancedStructLibrary.generated.h"

class UScriptStruct;

UCLASS(Blueprintable, MinimalAPI)
class UBlueprintInstancedStructLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintInstancedStructLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetInstancedStructValue(UPARAM(Ref) FInstancedStruct& InstancedStruct, const int32& Value);
    
    UFUNCTION(BlueprintCallable)
    static void Reset(UPARAM(Ref) FInstancedStruct& InstancedStruct, const UScriptStruct* StructType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_InstancedStruct(const FInstancedStruct& A, const FInstancedStruct& B);
    
    UFUNCTION(BlueprintCallable)
    static FInstancedStruct MakeInstancedStruct(const int32& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_InstancedStruct(const FInstancedStruct& InstancedStruct);
    
    UFUNCTION(BlueprintCallable)
    static EStructUtilsResult IsInstancedStructValid(const FInstancedStruct& InstancedStruct);
    
    UFUNCTION(BlueprintCallable)
    static void GetInstancedStructValue(EStructUtilsResult& ExecResult, const FInstancedStruct& InstancedStruct, int32& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_InstancedStruct(const FInstancedStruct& A, const FInstancedStruct& B);
    
};

