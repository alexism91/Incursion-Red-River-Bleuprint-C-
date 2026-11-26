#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AICoverSystem -ObjectName=Cover -FallbackName=Cover
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamId -FallbackName=GenericTeamId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAISettings -FallbackName=IRRAISettings
#include "ECoverAimDirection.h"
#include "Templates/SubclassOf.h"
#include "AIFunctionLibrary.generated.h"

class AAIManager;
class AActor;
class ACharacter;
class AController;
class APawn;
class UHTNNode;
class UIRRAIAimComponent;
class UIRRAICoverComponent;
class UIRRAIDataComponent;
class UIRRAISubSystem;
class UIRRAITarget;
class UIRRStatEffectComponent;
class UIRRTeamComponent;
class UObject;

UCLASS(Blueprintable)
class TEST_C_API UAIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ThrowGrenade_AI(AActor* Grenade, ACharacter* Instigator, const FVector& PredictedLocation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AController* SpawnAndPossessController(UObject* WorldContextObject, TSubclassOf<AController> SpecificControllerClass, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ObjectHasGameplayTags(const UObject* Object, const FGameplayTagContainer& Tags, bool bRequireAll);
    
    UFUNCTION(BlueprintCallable)
    static void GrenadeExploded_AI(AActor* Grenade, ACharacter* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static FCover GetWorldStateValueAsCover(UHTNNode* Node, const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable)
    static ECoverAimDirection GetValidCoverDirectionToTarget(FCover Cover, AActor* QueryOwner, AActor* Target, bool bMakeTraceTest, bool bDebug, float UpOffset, float ForwardOffset, float RightOffset);
    
    UFUNCTION(BlueprintCallable)
    static FGenericTeamId GetTeamId(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIRRTeamComponent* GetTeamComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIRRStatEffectComponent* GetStatEffectComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIRRAICoverComponent* GetCoverComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetAITargetActor(const APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIRRAITarget* GetAITarget(const APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIRRAISubSystem* GetAISubSystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FIRRAISettings GetAISettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIRRAIAimComponent* GetAimComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AAIManager* GetAIManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIRRAIDataComponent* GetAIDataComponent(const AActor* Actor);
    
};

