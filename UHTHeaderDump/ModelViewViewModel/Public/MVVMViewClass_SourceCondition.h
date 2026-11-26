#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FieldNotification -ObjectName=FieldNotificationId -FallbackName=FieldNotificationId
#include "MVVMViewClass_ConditionKey.h"
#include "MVVMViewClass_SourceCondition.generated.h"

USTRUCT(BlueprintType)
struct FMVVMViewClass_SourceCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldNotificationId FieldId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMViewClass_ConditionKey ConditionKey;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewClass_SourceCondition();
};

