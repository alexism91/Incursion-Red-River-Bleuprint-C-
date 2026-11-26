#pragma once
#include "CoreMinimal.h"
#include "PropertyBindingCopyInfo.h"
#include "PropertyBindingCopyInfoBatch.h"
#include "PropertyBindingPropertyIndirection.h"
#include "PropertyBindingBindingCollection.generated.h"

class IPropertyBindingBindingCollectionOwner;
class UPropertyBindingBindingCollectionOwner;

USTRUCT(BlueprintType)
struct FPropertyBindingBindingCollection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyBindingCopyInfoBatch> CopyBatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPropertyBindingCopyInfo> PropertyCopies;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPropertyBindingPropertyIndirection> PropertyIndirections;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPropertyBindingBindingCollectionOwner> BindingsOwner;
    
public:
    PROPERTYBINDINGUTILS_API FPropertyBindingBindingCollection();
};

