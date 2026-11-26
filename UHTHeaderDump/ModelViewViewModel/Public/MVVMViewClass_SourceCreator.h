#pragma once
#include "CoreMinimal.h"
#include "MVVMVCompiledFieldPath.h"
#include "MVVMViewModelContext.h"
#include "MVVMViewClass_SourceCreator.generated.h"

class UMVVMViewModelContextResolver;

USTRUCT(BlueprintType)
struct FMVVMViewClass_SourceCreator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ExpectedSourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMVVMViewModelContextResolver* Resolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMViewModelContext GlobalViewModelInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMVCompiledFieldPath FieldPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentSourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewClass_SourceCreator();
};

