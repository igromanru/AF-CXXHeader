#ifndef UE4SS_SDK_Deployed_ChristmasTree_HPP
#define UE4SS_SDK_Deployed_ChristmasTree_HPP

class ADeployed_ChristmasTree_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UAudioComponent* TreeMusic;                                                 // 0x0928 (size: 0x8)
    class UStaticMeshComponent* SM_ChristmasTree_Star;                                // 0x0930 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void TogglePowerFX();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Deployed_ChristmasTree(int32 EntryPoint);
}; // Size: 0x938

#endif
