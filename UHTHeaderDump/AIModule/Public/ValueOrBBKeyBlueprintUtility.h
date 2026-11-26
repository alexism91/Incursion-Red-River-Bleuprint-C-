#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ValueOrBBKey_Bool.h"
#include "ValueOrBBKey_Class.h"
#include "ValueOrBBKey_Enum.h"
#include "ValueOrBBKey_Float.h"
#include "ValueOrBBKey_Int32.h"
#include "ValueOrBBKey_Name.h"
#include "ValueOrBBKey_Object.h"
#include "ValueOrBBKey_Rotator.h"
#include "ValueOrBBKey_String.h"
#include "ValueOrBBKey_Struct.h"
#include "ValueOrBBKey_Vector.h"
#include "ValueOrBBKeyBlueprintUtility.generated.h"

class UBehaviorTreeComponent;
class UObject;

UCLASS(Blueprintable)
class UValueOrBBKeyBlueprintUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UValueOrBBKeyBlueprintUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetVector(const FValueOrBBKey_Vector& Value, const UBehaviorTreeComponent* BehaviorTreeComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInstancedStruct GetStruct(const FValueOrBBKey_Struct& Value, const UBehaviorTreeComponent* BehaviorTreeComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetString(const FValueOrBBKey_String& Value, const UBehaviorTreeComponent* BehaviorTreeComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetRotator(const FValueOrBBKey_Rotator& Value, const UBehaviorTreeComponent* BehaviorTreeComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetObject(const FValueOrBBKey_Object& Value, const UBehaviorTreeComponent* BehaviorTreeComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetName(const FValueOrBBKey_Name& Value, const UBehaviorTreeComponent* BehaviorTreeComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInt32(const FValueOrBBKey_Int32& Value, const UBehaviorTreeComponent* BehaviorTreeComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloat(const FValueOrBBKey_Float& Value, const UBehaviorTreeComponent* BehaviorTreeComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetEnum(const FValueOrBBKey_Enum& Value, const UBehaviorTreeComponent* BehaviorTreeComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetClass(const FValueOrBBKey_Class& Value, const UBehaviorTreeComponent* BehaviorTreeComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBool(const FValueOrBBKey_Bool& Value, const UBehaviorTreeComponent* BehaviorTreeComp);
    
};

