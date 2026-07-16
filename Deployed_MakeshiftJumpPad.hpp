#ifndef UE4SS_SDK_Deployed_MakeshiftJumpPad_HPP
#define UE4SS_SDK_Deployed_MakeshiftJumpPad_HPP

class ADeployed_MakeshiftJumpPad_C : public ADeployed_JumpPad_ParentBP_C
{
    class UDecalComponent* Decal;                                                     // 0x08D8 (size: 0x8)
    class UStaticMeshComponent* TechStuff;                                            // 0x08E0 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components, bool& DontHighlightPowerCord);
}; // Size: 0x8E8

#endif
