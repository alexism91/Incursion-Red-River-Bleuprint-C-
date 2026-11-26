#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FieldNotification -ObjectName=FieldNotificationId -FallbackName=FieldNotificationId
#include "MVVMViewClass_SourceKey.h"
#include "MVVMViewClass_EvaluateSource.generated.h"

USTRUCT(BlueprintType)
struct FMVVMViewClass_EvaluateSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldNotificationId ParentFieldId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMViewClass_SourceKey ParentSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMViewClass_SourceKey ToEvaluate;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewClass_EvaluateSource();
};

