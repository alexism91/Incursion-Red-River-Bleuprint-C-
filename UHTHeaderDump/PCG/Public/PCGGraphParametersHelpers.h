#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PCGGraphParametersHelpers.generated.h"

class UEnum;
class UObject;
class UPCGGraphInterface;

UCLASS(Blueprintable, MinimalAPI)
class UPCGGraphParametersHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPCGGraphParametersHelpers();

    UFUNCTION(BlueprintCallable)
    static void SetVectorParameter(UPCGGraphInterface* GraphInterface, const FName Name, const FVector& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetVector4Parameter(UPCGGraphInterface* GraphInterface, const FName Name, const FVector4& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetVector2DParameter(UPCGGraphInterface* GraphInterface, const FName Name, const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetTransformParameter(UPCGGraphInterface* GraphInterface, const FName Name, const FTransform& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetStringParameter(UPCGGraphInterface* GraphInterface, const FName Name, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSoftObjectPathParameter(UPCGGraphInterface* GraphInterface, const FName Name, const FSoftObjectPath& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSoftObjectParameter(UPCGGraphInterface* GraphInterface, const FName Name, const TSoftObjectPtr<UObject>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSoftClassParameter(UPCGGraphInterface* GraphInterface, const FName Name, const TSoftClassPtr<UObject>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetRotatorParameter(UPCGGraphInterface* GraphInterface, const FName Name, const FRotator& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetQuaternionParameter(UPCGGraphInterface* GraphInterface, const FName Name, const FQuat& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetObjectParameter(UPCGGraphInterface* GraphInterface, const FName Name, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetNameParameter(UPCGGraphInterface* GraphInterface, const FName Name, const FName Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInt64Parameter(UPCGGraphInterface* GraphInterface, const FName Name, const int64 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInt32Parameter(UPCGGraphInterface* GraphInterface, const FName Name, const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatParameter(UPCGGraphInterface* GraphInterface, const FName Name, const float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnumParameter(UPCGGraphInterface* GraphInterface, const FName Name, const uint8 Value, const UEnum* Enum);
    
    UFUNCTION(BlueprintCallable)
    static void SetDoubleParameter(UPCGGraphInterface* GraphInterface, const FName Name, const double Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetClassParameter(UPCGGraphInterface* GraphInterface, const FName Name, UClass* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetByteParameter(UPCGGraphInterface* GraphInterface, const FName Name, const uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoolParameter(UPCGGraphInterface* GraphInterface, const FName Name, const bool bValue);
    
    UFUNCTION(BlueprintCallable)
    static bool IsOverridden(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetVectorParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static FVector4 GetVector4Parameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetVector2DParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetTransformParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStringParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static FSoftObjectPath GetSoftObjectPathParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UObject> GetSoftObjectParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static TSoftClassPtr<UObject> GetSoftClassParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetRotatorParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static FQuat GetQuaternionParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetObjectParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static FName GetNameParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static int64 GetInt64Parameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetInt32Parameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static float GetFloatParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static uint8 GetEnumParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static double GetDoubleParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static UClass* GetClassParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static uint8 GetByteParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBoolParameter(const UPCGGraphInterface* GraphInterface, const FName Name);
    
};

