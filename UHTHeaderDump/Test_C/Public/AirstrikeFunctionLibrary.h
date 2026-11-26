#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AirstrikeAimPoint.h"
#include "Templates/SubclassOf.h"
#include "AirstrikeFunctionLibrary.generated.h"

class AActor;
class AAirstrike;
class APawn;
class UObject;

UCLASS(Blueprintable)
class TEST_C_API UAirstrikeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAirstrikeFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AAirstrike* SpawnAirstrike(const UObject* WorldContextObject, TSubclassOf<AAirstrike> AirstrikeClass, AActor* TargetActor, FVector TargetLocation, APawn* CalledInBy, float ExtraLaunchDelay, FVector AimOffset);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyStrikeCalledIn(AActor* TargetActor, APawn* CalledInBy);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FAirstrikeAimPoint> GetStrikeAimPoints(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetStrikeAimLocation(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanBeStruck(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AAirstrike*> CallInAirstrikeOnTargets(const UObject* WorldContextObject, TSubclassOf<AAirstrike> AirstrikeClass, AActor* TargetActor, FVector TargetLocation, int32 Count, float RippleInterval, float SpreadRadius, float TargetInterval, APawn* CalledInBy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AAirstrike*> CallInAirstrike(const UObject* WorldContextObject, TSubclassOf<AAirstrike> AirstrikeClass, AActor* TargetActor, FVector TargetLocation, int32 Count, float RippleInterval, float SpreadRadius, APawn* CalledInBy, float ExtraLaunchDelay);
    
};

