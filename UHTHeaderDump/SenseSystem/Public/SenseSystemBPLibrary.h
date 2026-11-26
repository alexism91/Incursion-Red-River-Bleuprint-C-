#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BitFlag64_SenseSys.h"
#include "SkeletalBoneIDCache.h"
#include "SenseSystemBPLibrary.generated.h"

class AActor;
class USenseReceiverComponent;
class USenseStimulusBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class USenseSystemBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USenseSystemBPLibrary();

    UFUNCTION(BlueprintCallable)
    static USenseStimulusBase* GetStimulusFromActor_BP(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static USenseReceiverComponent* GetReceiverFromActor_BP(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> GetBoneLocations_BoneIDCache(const USkeletalMeshComponent* SkeletalMeshComponent, const FSkeletalBoneIDCache& SkeletalBoneIDCache, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void ForceGarbageCollection();
    
    UFUNCTION(BlueprintCallable)
    static FSkeletalBoneIDCache CreateBoneIDCache(const USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> BitFlag64_ToArray(const FBitFlag64_SenseSys& In);
    
};

