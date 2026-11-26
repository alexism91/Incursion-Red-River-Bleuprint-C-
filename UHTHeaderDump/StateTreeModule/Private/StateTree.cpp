#include "StateTree.h"

UStateTree::UStateTree() {
    this->LastCompiledEditorDataHash = 0;
    this->Schema = NULL;
    this->CompletionGlobalTasksMask = 0;
    this->NumContextData = 0;
    this->NumGlobalInstanceData = 0;
    this->EvaluatorsBegin = 0;
    this->EvaluatorsNum = 0;
    this->GlobalTasksBegin = 0;
    this->GlobalTasksNum = 0;
    this->CompletionGlobalTasksControl = EStateTreeTaskCompletionType::Any;
    this->ParameterDataType = EStateTreeParameterDataType::GlobalParameterData;
    this->bHasGlobalTransitionTasks = false;
}


