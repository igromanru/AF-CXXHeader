#ifndef UE4SS_SDK_EQ_TargetContext_Players_HPP
#define UE4SS_SDK_EQ_TargetContext_Players_HPP

class UEQ_TargetContext_Players_C : public UEnvQueryContext_BlueprintBase
{

    void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>& ResultingActorsSet);
}; // Size: 0x30

#endif
