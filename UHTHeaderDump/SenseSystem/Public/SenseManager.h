#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "DrawElementSetup.h"
#include "SenseManager.generated.h"

class UObject;
class USenseReceiverComponent;
class USenseStimulusBase;

UCLASS(Blueprintable)
class SENSESYSTEM_API USenseManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReport_StimulusEvent, uint16, StimulusID, FName, SensorTag);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjStatusChanged, UObject*, Obj);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReport_StimulusEvent ReportStimulus_Event;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjStatusChanged On_UnregisterStimulus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjStatusChanged On_UnregisterReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<USenseReceiverComponent*> Receivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<USenseStimulusBase*> StimulsWorldOrigin;
    
    USenseManager();

    UFUNCTION(BlueprintCallable)
    FBox GetIntersectTreeBox(FName SensorTag, FBox InBox);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DrawTree(FName SensorTag, FDrawElementSetup TreeNode, FDrawElementSetup Link, FDrawElementSetup ElemNode, float LifeTime) const;
    
};

