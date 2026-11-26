#include "AnimNodeControlRigLibrary.h"
#include "Templates/SubclassOf.h"

UAnimNodeControlRigLibrary::UAnimNodeControlRigLibrary() {
}

FControlRigReference UAnimNodeControlRigLibrary::SetControlRigClass(const FControlRigReference& Node, TSubclassOf<UControlRig> ControlRigClass) {
    return FControlRigReference{};
}

void UAnimNodeControlRigLibrary::ConvertToControlRigPure(const FAnimNodeReference& Node, FControlRigReference& ControlRig, bool& Result) {
}

FControlRigReference UAnimNodeControlRigLibrary::ConvertToControlRig(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result) {
    return FControlRigReference{};
}


