#ifndef UE4SS_SDK_Deployed_MakeshiftJumpPad_HPP
#define UE4SS_SDK_Deployed_MakeshiftJumpPad_HPP

class ADeployed_MakeshiftJumpPad_C : public ADeployed_JumpPad_ParentBP_C
{
    class UDecalComponent* Decal;                                                     // 0x0988 (size: 0x8)
    class UStaticMeshComponent* TechStuff;                                            // 0x0990 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
}; // Size: 0x998

#endif
