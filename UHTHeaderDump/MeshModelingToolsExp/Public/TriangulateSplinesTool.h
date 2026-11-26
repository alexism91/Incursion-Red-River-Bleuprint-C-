#pragma once
#include "CoreMinimal.h"
#include "BaseMeshFromSplinesTool.h"
#include "TriangulateSplinesTool.generated.h"

class UTriangulateSplinesToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UTriangulateSplinesTool : public UBaseMeshFromSplinesTool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTriangulateSplinesToolProperties* TriangulateProperties;
    
public:
    UTriangulateSplinesTool();

};

