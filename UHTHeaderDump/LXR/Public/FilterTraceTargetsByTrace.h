#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "OnTraceTargetOperationDoneDelegate.h"
#include "FilterTraceTargetsByTrace.generated.h"

class AActor;
class UFilterTraceTargetsByTrace;
class UObject;

UCLASS(Blueprintable)
class LXR_API UFilterTraceTargetsByTrace : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTraceTargetOperationDone OnTraceTargetOperationDone;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToIgnore;
    
public:
    UFilterTraceTargetsByTrace();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFilterTraceTargetsByTrace* FilterTraceTargetsByTrace_Async(const UObject* NewWorldContextObject, const FVector& FilterTraceStartLocation, const TSet<FVector>& TraceTargets, TArray<AActor*> NewActorsToIgnore, TEnumAsByte<ECollisionChannel> TraceChannel);
    
};

