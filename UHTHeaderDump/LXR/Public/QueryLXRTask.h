#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnQueryLXRDoneDelegate.h"
#include "QueryLXRTask.generated.h"

class AActor;
class ULXRSourceComponent;
class UObject;
class UQueryLXRTask;

UCLASS(Blueprintable)
class LXR_API UQueryLXRTask : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQueryLXRDone OnQueryLXRDone;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULXRSourceComponent*> Lights;
    
public:
    UQueryLXRTask();

    UFUNCTION(BlueprintCallable)
    static UQueryLXRTask* QueryLocationsLXR_Async(const AActor* Querier, const TArray<FVector>& Points, TArray<ULXRSourceComponent*> InLights);
    
};

